///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 14 2020)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once


#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		enum
		{
			ID_NEW_BOARD = 1000,
			ID_OPEN_BOARD,
			ID_SAVE_BOARD,
			ID_SAVE_AS,
			ID_NEW_STAGE,
			ID_COPY_STAGE,
			ID_DELETE_STAGE
		};

		wxMenuBar* MenuBar;
		wxMenu* FileMenu;
		wxMenu* EditMenu;
		wxMenu* AboutMenu;
		wxStatusBar* StatusBar;

		// Virtual event handlers, overide them in your derived class
		virtual void OnNewBoard( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenBoard( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveBoard( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveAs( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNewStage( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCopyStage( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteStage( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("GNU Kanban"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxCAPTION|wxDEFAULT_FRAME_STYLE, const wxString& name = wxT("MainFrame") );

		~MainFrame();

};

