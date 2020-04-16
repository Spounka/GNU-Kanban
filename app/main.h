/*
 * main.h
 *
 *  Created on: 15 Apr 2020
 *      Author: dova
 */

#ifndef APP_MAIN_H_
#define APP_MAIN_H_



#include <iostream>

#include <wx/filesys.h>
#include <wx/app.h>
#include <core/mainwindow.h>
#include <string>
#include <filesystem>

class GnuKanban: public wxApp
{
	private:
	protected:
	public:
		virtual bool OnInit();
		virtual ~GnuKanban(){};
};

#endif /* APP_MAIN_H_ */
