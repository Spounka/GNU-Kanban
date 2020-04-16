/*
 * mainwindow.h
 *
 *  Created on: 16 Apr 2020
 *      Author: dova
 */

#ifndef INCLUDE_CORE_MAINWINDOW_H_
#define INCLUDE_CORE_MAINWINDOW_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

#include <GUI/Base/mainframe.h>



class MainWindow: public MainFrame 
{
	public:
		MainWindow(wxWindow*);
		virtual ~MainWindow();

	protected:
		void OnNewBoard( wxCommandEvent& event );
		void OnOpenBoard( wxCommandEvent& event );
		void OnSaveBoard( wxCommandEvent& event );
		void OnSaveAs( wxCommandEvent& event );
		void OnQuit( wxCommandEvent& event );
		void OnNewStage( wxCommandEvent& event );
		void OnCopyStage( wxCommandEvent& event );
		void OnDeleteStage( wxCommandEvent& event );
		void OnAbout( wxCommandEvent& event );
};

#endif /* INCLUDE_CORE_MAINWINDOW_H_ */
