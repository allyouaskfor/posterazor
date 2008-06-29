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

#ifndef QTPERSISTENTPREFERENCES_H
#define QTPERSISTENTPREFERENCES_H

#include <QSettings>
#include "PersistentPreferencesInterface.h"

class QtPersistentPreferences: public QSettings, public PersistentPreferencesInterface
{
	Q_OBJECT
	
public:
	QtPersistentPreferences(QObject *parent = NULL);

	void setInteger(int value, const char *key);
	void setDouble(double value, const char *key);
	void setBoolean(bool value, const char *key);
	void setString(const char *value, const char *key);

	int getInteger(const char *key, int defaultValue);
	double getDouble(const char *key, double defaultValue);
	bool getBoolean(const char *key, bool defaultValue);
	const char *getString(const char *key, const char *defaultValue);
};

#endif // QTPERSISTENTPREFERENCES_H