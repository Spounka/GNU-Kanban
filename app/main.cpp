/*
 * main.cpp
 *
 *  Created on: 15 Apr 2020
 *      Author: dova
 */

#include "main.h"


wxIMPLEMENT_APP(GnuKanban);

bool GnuKanban::OnInit()
{
//	
//	MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, 
//			const wxString& title = wxT("GNU Kanban"), const wxPoint& pos = wxDefaultPosition, 
//			const wxSize& size = wxSize( 500,300 ), long style = wxCAPTION|wxDEFAULT_FRAME_STYLE, 
//			const wxString& name = wxT("MainFrame") );
	MainWindow* window = new MainWindow(NULL);
	window->Show(true);
	window->Maximize(true);
	
	return true;
}
