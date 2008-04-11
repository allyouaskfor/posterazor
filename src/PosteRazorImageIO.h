/*
	PosteRazor - Make your own poster!
	Copyright (C) 2005-2008 by Alessandro Portale
	http://posterazor.sourceforge.net/

	This file is part of PosteRazor

	PosteRazor is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	
	PosteRazor is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with PosteRazor; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef POSTERAZORIMAGEIO_H
#define POSTERAZORIMAGEIO_H

#include "UnitsOfLength.h"
#include "ColorTypes.h"
#include "ImageIOTypes.h"

class PainterInterface;

class PosteRazorImageIO: public ColorTypes
{
public:
	virtual ~PosteRazorImageIO() {}

	static PosteRazorImageIO* createPosteRazorImageIO();

	virtual bool loadInputImage(const char *imageFileName, char *errorMessage, int errorMessageSize) = 0;
	virtual bool isImageLoaded(void) const = 0;

	virtual int getWidthPixels(void) const = 0;
	virtual int getHeightPixels(void) const = 0;

	virtual double getHorizontalDotsPerUnitOfLength(UnitsOfLength::eUnitsOfLength unit) const = 0;
	virtual double getVerticalDotsPerUnitOfLength(UnitsOfLength::eUnitsOfLength unit) const = 0;

	virtual double getWidth(UnitsOfLength::eUnitsOfLength unit) const = 0;
	virtual double getHeight(UnitsOfLength::eUnitsOfLength unit) const = 0;

	virtual bool getImageAsRGB(unsigned char *buffer) const = 0;
	virtual bool getImageAsRGB(unsigned char *buffer, int width, int height) const = 0;
	
	virtual int getBitsPerPixel(void) const = 0;
	virtual eColorTypes getColorDataType(void) const = 0;

	virtual int savePoster(const char *fileName, ImageIOTypes::eImageFormats format, const PainterInterface *painter, int pagesCount, double widthCm, double heightCm) const = 0;
};

#endif // POSTERAZORIMAGEIO_H