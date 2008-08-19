/*
    PosteRazor - Make your own poster!
    Copyright (C) 2005-2008 by Alessandro Portale
    http://posterazor.sourceforge.net/

    This file is part of PosteRazor

    PosteRazor is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    PosteRazor is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with PosteRazor; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include "controller.h"
#include "mainwindow.h"
#include <QSettings>
#include <QFileDialog>
#include <QMessageBox>

const QLatin1String settingsKey_LaunchPDFApplication("launchPDFApplication");

Controller::Controller(PosteRazorCore *posteRazorCore, MainWindow *mainWindow, QObject *parent)
    : QObject(parent)
    , m_posteRazorCore(posteRazorCore)
    , m_mainWindow(mainWindow)
    , m_launchPDFApplication(true)
{
    connect(m_mainWindow, SIGNAL(paperFormatChanged(const QString&)), SLOT(setPaperFormat(const QString&)));
    connect(m_mainWindow, SIGNAL(paperOrientationChanged(QPrinter::Orientation)), SLOT(setPaperOrientation(QPrinter::Orientation)));
    connect(m_mainWindow, SIGNAL(paperBorderTopChanged(double)), SLOT(setPaperBorderTop(double)));
    connect(m_mainWindow, SIGNAL(paperBorderRightChanged(double)), SLOT(setPaperBorderRight(double)));
    connect(m_mainWindow, SIGNAL(paperBorderBottomChanged(double)), SLOT(setPaperBorderBottom(double)));
    connect(m_mainWindow, SIGNAL(paperBorderLeftChanged(double)), SLOT(setPaperBorderLeft(double)));
    connect(m_mainWindow, SIGNAL(paperCustomWidthChanged(double)), SLOT(setCustomPaperWidth(double)));
    connect(m_mainWindow, SIGNAL(paperCustomHeightChanged(double)), SLOT(setCustomPaperHeight(double)));
    connect(m_mainWindow, SIGNAL(overlappingWidthChanged(double)), SLOT(setOverlappingWidth(double)));
    connect(m_mainWindow, SIGNAL(overlappingHeightChanged(double)), SLOT(setOverlappingHeight(double)));
    connect(m_mainWindow, SIGNAL(overlappingPositionChanged(Qt::Alignment)), SLOT(setOverlappingPosition(Qt::Alignment)));
    connect(m_mainWindow, SIGNAL(posterWidthAbsoluteChanged(double)), SLOT(setPosterWidthAbsolute(double)));
    connect(m_mainWindow, SIGNAL(posterHeightAbsoluteChanged(double)), SLOT(setPosterHeightAbsolute(double)));
    connect(m_mainWindow, SIGNAL(posterWidthPagesChanged(double)), SLOT(setPosterWidthPages(double)));
    connect(m_mainWindow, SIGNAL(posterHeightPagesChanged(double)), SLOT(setPosterHeightPages(double)));
    connect(m_mainWindow, SIGNAL(posterSizePercentualChanged(double)), SLOT(setPosterSizePercentual(double)));
    connect(m_mainWindow, SIGNAL(posterAlignmentChanged(Qt::Alignment)), SLOT(setPosterAlignment(Qt::Alignment)));
    connect(m_mainWindow, SIGNAL(savePosterSignal()), SLOT(savePoster()));
    connect(m_mainWindow, SIGNAL(launchPDFApplicationChanged(bool)), SLOT(setLaunchPDFApplication(bool)));
    connect(m_mainWindow, SIGNAL(loadImageSignal()), SLOT(loadInputImage()));
    connect(m_mainWindow, SIGNAL(needsPaint(PaintCanvasInterface*, const QVariant&)), m_posteRazorCore, SLOT(paintOnCanvas(PaintCanvasInterface*, const QVariant&)));
    connect(m_posteRazorCore, SIGNAL(previewImageChanged(const QImage&)), m_mainWindow, SLOT(setPreviewImage(const QImage&)));

    updateDialog();
    setDialogPosterSizeMode();
}

void Controller::updateDialog()
{
    setDialogPaperOptions();
    setDialogPosterOptions();
    setDialogOverlappingOptions();
    setDialogImageInfoFields();
    setDialogSaveOptions();
    m_mainWindow->setUnitOfLength(m_posteRazorCore->getUnitOfLength());
    updatePreview();
}

void Controller::updatePreview()
{
    m_mainWindow->updatePreview();
}

void Controller::setUnitOfLength(UnitsOfLength::eUnitsOfLength unit)
{
    m_posteRazorCore->setUnitOfLength(unit);
    updateDialog();
}

void Controller::setPaperFormat(const QString &format)
{
    m_posteRazorCore->setPaperFormat(format);
    setDialogPosterOptions();
    setDialogPaperBorders();
    updatePreview();
}

void Controller::setPaperOrientation(QPrinter::Orientation orientation)
{
    m_posteRazorCore->setPaperOrientation(orientation);
    setDialogPosterOptions();
    setDialogPaperBorders();
    updatePreview();
}

void Controller::setPaperBorderTop(double border)
{
    m_posteRazorCore->setPaperBorderTop(border);
    setDialogPosterOptions();
    updatePreview();
}

void Controller::setPaperBorderRight(double border)
{
    m_posteRazorCore->setPaperBorderRight(border);
    setDialogPosterOptions();
    updatePreview();
}

void Controller::setPaperBorderBottom(double border)
{
    m_posteRazorCore->setPaperBorderBottom(border);
    setDialogPosterOptions();
    updatePreview();
}

void Controller::setPaperBorderLeft(double border)
{
    m_posteRazorCore->setPaperBorderLeft(border);
    setDialogPosterOptions();
    updatePreview();
}

void Controller::setCustomPaperWidth(double width)
{
    m_posteRazorCore->setCustomPaperWidth(width);
    setDialogPosterOptions();
    setDialogPaperBorders();
    updatePreview();
}

void Controller::setCustomPaperHeight(double height)
{
    m_posteRazorCore->setCustomPaperHeight(height);
    setDialogPosterOptions();
    setDialogPaperBorders();
    updatePreview();
}

void Controller::setUseCustomPaperSize(bool useIt)
{
    m_posteRazorCore->setUseCustomPaperSize(useIt);
    setDialogPosterOptions();
    setDialogPaperBorders();
    updatePreview();
}

void Controller::setOverlappingWidth(double width)
{
    m_posteRazorCore->setOverlappingWidth(width);
    setDialogPosterOptions();
    updatePreview();
}

void Controller::setOverlappingHeight(double height)
{
    m_posteRazorCore->setOverlappingHeight(height);
    setDialogPosterOptions();
    updatePreview();
}

void Controller::setOverlappingPosition(Qt::Alignment position)
{
    m_posteRazorCore->setOverlappingPosition(position);
    updatePreview();
}

void Controller::setPosterWidthAbsolute(double width)
{
    m_posteRazorCore->setPosterWidth(PosteRazorEnums::ePosterSizeModeAbsolute, width);
    setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModeAbsolute, true);
}

void Controller::setPosterHeightAbsolute(double height)
{
    m_posteRazorCore->setPosterHeight(PosteRazorEnums::ePosterSizeModeAbsolute, height);
    setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModeAbsolute, false);
}

void Controller::setPosterWidthPages(double width)
{
    m_posteRazorCore->setPosterWidth(PosteRazorEnums::ePosterSizeModePages, width);
    setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModePages, true);
}

void Controller::setPosterHeightPages(double height)
{
    m_posteRazorCore->setPosterHeight(PosteRazorEnums::ePosterSizeModePages, height);
    setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModePages, false);
}

void Controller::setPosterSizePercentual(double percent)
{
    m_posteRazorCore->setPosterHeight(PosteRazorEnums::ePosterSizeModePercentual, percent);
    setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModePercentual, false);
}

void Controller::setPosterSizeMode(PosteRazorEnums::ePosterSizeModes mode)
{
    m_posteRazorCore->setPosterSizeMode(mode);
}

void Controller::setPosterAlignment(Qt::Alignment alignment)
{
    m_posteRazorCore->setPosterAlignment(alignment);
    updatePreview();
}

void Controller::setLaunchPDFApplication(bool launch)
{
    m_launchPDFApplication = launch;
    setDialogSaveOptions();
}

void Controller::setDialogSaveOptions()
{
    m_mainWindow->setLaunchPDFApplication(m_launchPDFApplication);
}

void Controller::setDialogPosterSizeMode()
{
    m_mainWindow->setPosterSizeMode(m_posteRazorCore->getPosterSizeMode());
}

void Controller::setDialogPosterOptions()
{
    setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModeNone, true);
    m_mainWindow->setPosterAlignment(m_posteRazorCore->getPosterAlignment());
    m_mainWindow->setPosterSizeMode(m_posteRazorCore->getPosterSizeMode());
}

void Controller::setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModes excludedMode, bool widthExcluded)
{
    const QSizeF posterSizeAbsolute = m_posteRazorCore->getPosterSize(PosteRazorEnums::ePosterSizeModeAbsolute);
    const QSizeF posterSizePages = m_posteRazorCore->getPosterSize(PosteRazorEnums::ePosterSizeModePages);
    const QSizeF posterSizePercentual = m_posteRazorCore->getPosterSize(PosteRazorEnums::ePosterSizeModePercentual);
    if (excludedMode != PosteRazorEnums::ePosterSizeModeAbsolute || !widthExcluded)
        m_mainWindow->setPosterWidthAbsolute(posterSizeAbsolute.width());
    if (excludedMode != PosteRazorEnums::ePosterSizeModeAbsolute || widthExcluded)
        m_mainWindow->setPosterHeightAbsolute(posterSizeAbsolute.height());
    if (excludedMode != PosteRazorEnums::ePosterSizeModePages || !widthExcluded)
        m_mainWindow->setPosterWidthPages(posterSizePages.width());
    if (excludedMode != PosteRazorEnums::ePosterSizeModePages || widthExcluded)
        m_mainWindow->setPosterHeightPages(posterSizePages.height());
    if (excludedMode != PosteRazorEnums::ePosterSizeModePercentual)
        m_mainWindow->setPosterSizePercentual(posterSizePercentual.width());
    updatePreview();
}

void Controller::setDialogPaperOptions()
{
    setDialogPaperBorders();
    setDialogCustomPaperDimensions();
    m_mainWindow->setUseCustomPaperSize(m_posteRazorCore->getUseCustomPaperSize());
    m_mainWindow->setPaperFormat(m_posteRazorCore->getPaperFormat());
    m_mainWindow->setPaperOrientation(m_posteRazorCore->getPaperOrientation());
}

void Controller::setDialogPaperBorders()
{
    m_mainWindow->setPaperBorderTop(m_posteRazorCore->getPaperBorderTop());
    m_mainWindow->setPaperBorderRight(m_posteRazorCore->getPaperBorderRight());
    m_mainWindow->setPaperBorderBottom(m_posteRazorCore->getPaperBorderBottom());
    m_mainWindow->setPaperBorderLeft(m_posteRazorCore->getPaperBorderLeft());
}

void Controller::setDialogCustomPaperDimensions()
{
    m_mainWindow->setCustomPaperSize(m_posteRazorCore->getCustomPaperSize());
}

void Controller::setDialogImageInfoFields()
{
    if (m_posteRazorCore->getIsImageLoaded()) {
        m_mainWindow->updateImageInfoFields (
            m_posteRazorCore->getInputImageSizePixels(),
            m_posteRazorCore->getInputImageSize(),
            m_posteRazorCore->getUnitOfLength(),
            m_posteRazorCore->getInputImageVerticalDpi(),
            m_posteRazorCore->getInputImageHorizontalDpi(),
            m_posteRazorCore->getInputImageColorType(),
            m_posteRazorCore->getInputImageBitsPerPixel()
        );
    }
}

void Controller::setDialogOverlappingDimensions()
{
    m_mainWindow->setOverlappingWidth(m_posteRazorCore->getOverlappingWidth());
    m_mainWindow->setOverlappingHeight(m_posteRazorCore->getOverlappingHeight());
}

void Controller::setDialogOverlappingOptions()
{
    setDialogOverlappingDimensions();
    m_mainWindow->setOverlappingPosition(m_posteRazorCore->getOverlappingPosition());
}

bool Controller::readSettings(const QSettings *settings)
{
    const bool result = m_posteRazorCore->readSettings(settings);
    m_launchPDFApplication = settings->value(settingsKey_LaunchPDFApplication, m_launchPDFApplication).toBool();

    if (result)
        updateDialog();

    return result;
}

bool Controller::writeSettings(QSettings *settings) const
{
    settings->setValue(settingsKey_LaunchPDFApplication, m_launchPDFApplication);
    return m_posteRazorCore->writeSettings(settings);
}

void Controller::loadInputImage()
{
    QStringList allFilters;
    QStringList allWildcards;

    const QVector<QPair<QStringList, QString> > &formats = m_posteRazorCore->getImageFormats();
    for (int i = 0; i < formats.count(); i++) {
        QStringList formatWildcards;
        foreach (const QString &extension, formats.at(i).first)
            formatWildcards << "*." + extension;
        allWildcards << formatWildcards;
        allFilters << formats.at(i).second + " (" +  formatWildcards.join(" ") + ")";
    }
    allFilters.prepend(QCoreApplication::translate("PosteRazorDialog", "All image formats") + " (" +  allWildcards.join(" ") + ")");

    static const QString loadPathSettingsKey("loadPath");
    QSettings loadPathSettings;

    QString loadFileName = QFileDialog::getOpenFileName (
        m_mainWindow,
        QCoreApplication::translate("PosteRazorDialog", "Load an input image"),
        loadPathSettings.value(loadPathSettingsKey, ".").toString(),
        allFilters.join(";;")
    );

    if (!loadFileName.isEmpty()) {
        bool successful = loadInputImage(loadFileName);
        if (successful)
            loadPathSettings.setValue(loadPathSettingsKey, QFileInfo(loadFileName).absolutePath());
    }
}

bool Controller::loadInputImage(const QString &fileName)
{
    QString loadErrorMessage;
    const bool successful = loadInputImage(fileName, loadErrorMessage);
    if (!successful) {
        const QString errorMessage = QCoreApplication::translate("PosteRazorDialog", "The Image '%1' could not be loaded.\n")
            .arg(QDir::convertSeparators(fileName));
        QMessageBox::critical(NULL, QCoreApplication::translate("PosteRazorDialog", "Loading Error"), errorMessage);
    }
    return successful;
}

bool Controller::loadInputImage(const QString &imageFileName, QString &errorMessage)
{
    const bool result = m_posteRazorCore->loadInputImage(imageFileName, errorMessage);
    if (result) {
        updateDialog();
        m_mainWindow->showImageFileName(imageFileName);
    }
    return result;
}

int Controller::savePoster(const QString &fileName) const
{
    const int result = m_posteRazorCore->savePoster(fileName);
    if (result == 0 && m_launchPDFApplication)
        m_mainWindow->launchPdfApplication(fileName);
    return result;
}

void Controller::savePoster() const
{
    static const QLatin1String savePathSettingsKey("savePath");
    QSettings savePathSettings;

    QString saveFileName = savePathSettings.value(savePathSettingsKey, ".").toString();
    bool fileExistsAskUserForOverwrite = false;

    do {
        saveFileName = QFileDialog::getSaveFileName(
            NULL,
            QCoreApplication::translate("PosteRazorDialog", "Choose a filename to save under"),
            saveFileName,
            QLatin1String("Portable Document format (*.pdf)"),
            NULL,
            QFileDialog::DontConfirmOverwrite
        );

        if (!saveFileName.isEmpty()) {
            if (QFileInfo(saveFileName).suffix().toLower() != QLatin1String("pdf"))
                saveFileName.append(".pdf");

            fileExistsAskUserForOverwrite = QFileInfo(saveFileName).exists();

            if (!fileExistsAskUserForOverwrite
                || QMessageBox::Yes == (QMessageBox::question(NULL, "", QCoreApplication::translate("PosteRazorDialog", "The file '%1' already exists.\nDo you want to overwrite it?").arg(QDir::convertSeparators(saveFileName)), QMessageBox::Yes, QMessageBox::No))
                ) {
                int result = savePoster(saveFileName.toAscii());
                if (result != 0)
                    QMessageBox::critical(NULL, "", QCoreApplication::translate("PosteRazorDialog", "The File \"%1\" could not be saved.").arg(saveFileName), QMessageBox::Ok, QMessageBox::NoButton);
                else
                    savePathSettings.setValue(savePathSettingsKey, QFileInfo(saveFileName).absolutePath());
                fileExistsAskUserForOverwrite = false;
            }
        } else {
            break;
        }
    } while (fileExistsAskUserForOverwrite);
}