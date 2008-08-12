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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "UnitsOfLength.h"
#include "PaperFormats.h"
#include "PosteRazor.h"

class MainWindow : public QMainWindow, private Ui::MainWindow 
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0, Qt::WFlags flags = 0);

	void setUnitOfLength(UnitsOfLength::eUnitsOfLength unit);

	void setPaperFormat(const QString &format);
	void setPaperOrientation(PaperFormats::ePaperOrientations orientation);

	void setPaperBorderTop(double border);
	void setPaperBorderRight(double border);
	void setPaperBorderBottom(double border);
	void setPaperBorderLeft(double border);

	void setCustomPaperWidth(double width);
	void setCustomPaperHeight(double height);
	void setUseCustomPaperSize(bool useIt);

	void setOverlappingWidth(double width);
	void setOverlappingHeight(double height);
	void setOverlappingPosition(Qt::Alignment position);

	void setPosterWidthAbsolute(double width);
	void setPosterHeightAbsolute(double height);
	void setPosterWidthPages(double width);
	void setPosterHeightPages(double height);
	void setPosterSizePercentual(double percent);
	void setPosterSizeMode(PosteRazorEnums::ePosterSizeModes mode);
	void setPosterAlignment(Qt::Alignment alignment);

	void setPosterOutputFormat(ImageIOTypes::eImageFormats format);
	void setLaunchPDFApplication(bool launch);

	void updatePreview();
	void showImageFileName(const char *fileName);
	void updateImageInfoFields(int imageWidthInPixels, int imageHeightInPixels, double imageWidth, double imageHeight, UnitsOfLength::eUnitsOfLength unitOfLength, double verticalDpi, double horizontalDpi, ColorTypes::eColorTypes colorType, int bitsPerPixel);
	void launchPdfApplication(const char *pdfFileName) const;

public slots:
	void setPreviewImage(const unsigned char* rgbData, const QSize &size);
	void setPrevButtonEnabled(bool enabled);
	void setNextButtonEnabled(bool enabled);
	void setWizardStep(int step);
	void setPreviewState(const QString &state);

private:
	PosteRazor *m_posteRazor;
	QHash<Qt::Alignment, QAbstractButton*> m_overlappingButtons;
	QHash<Qt::Alignment, QAbstractButton*> m_alignmentButtons;

	void createConnections();
	void populateUI();

signals:
	void paperFormatChanged(const QString &format) const;
	void paperOrientationChanged(PaperFormats::ePaperOrientations orientation) const;
	void paperCustomWidthChanged(double width) const;
	void paperCustomHeightChanged(double height) const;
	void paperBorderTopChanged(double border) const;
	void paperBorderRightChanged(double border) const;
	void paperBorderBottomChanged(double border) const;
	void paperBorderLeftChanged(double border) const;
	void overlappingWidthChanged(double width) const;
	void overlappingHeightChanged(double height) const;
	void overlappingPositionChanged(Qt::Alignment position) const;
	void posterWidthAbsoluteChanged(double width) const;
	void posterHeightAbsoluteChanged(double height) const;
	void posterWidthPagesChanged(double width) const;
	void posterHeightPagesChanged(double height) const;
	void posterSizePercentualChanged(double percent) const;
	void posterAlignmentChanged(Qt::Alignment alignment) const;
	void savePosterSelected() const;
	void launchPDFApplicationChanged(bool launch) const;
	void nextButtonPressed() const;
	void prevButtonPressed() const;
	void savePosterSignal() const;
	void loadImageSignal() const;
	void needsPaint(PaintCanvasInterface *paintDevice, const QVariant &options) const;
	void imageLoaded() const;

private slots:
	void handlePaperFormatTabChanged(int index);
	void handlePaperOrientationPortraitSelected();
	void handlePaperOrientationLandscapeSelected();

	void emitOverlappingPositionChange(int alignmentInt) const;
	void emitPosterAlignmentChange(int alignmentInt) const;

	void updatePosterSizeGroupsState();
};

#endif // MAINWINDOW_H