///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 14 2020)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "mainframe.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxFrame( parent, id, title, pos, size, style, name )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );

	MenuBar = new wxMenuBar( 0 );
	FileMenu = new wxMenu();
	wxMenuItem* newBoard;
	newBoard = new wxMenuItem( FileMenu, ID_NEW_BOARD, wxString( wxT("New Board") ) + wxT('\t') + wxT("Ctrl+N"), wxT("Creates a New Board"), wxITEM_NORMAL );
	FileMenu->Append( newBoard );

	wxMenuItem* openBoard;
	openBoard = new wxMenuItem( FileMenu, ID_OPEN_BOARD, wxString( wxT("Open Board") ) + wxT('\t') + wxT("Ctrl+O"), wxT("Opens an already existing board"), wxITEM_NORMAL );
	FileMenu->Append( openBoard );

	FileMenu->AppendSeparator();

	wxMenuItem* saveBoard;
	saveBoard = new wxMenuItem( FileMenu, ID_SAVE_BOARD, wxString( wxT("Save Board") ) + wxT('\t') + wxT("Ctrl+S"), wxT("Saves The Current Board"), wxITEM_NORMAL );
	FileMenu->Append( saveBoard );

	wxMenuItem* saveAs;
	saveAs = new wxMenuItem( FileMenu, ID_SAVE_AS, wxString( wxT("Save As") ) + wxT('\t') + wxT("Ctrl+shift+s"), wxT("Saves The Current Board To new file"), wxITEM_NORMAL );
	FileMenu->Append( saveAs );

	FileMenu->AppendSeparator();

	wxMenuItem* quit;
	quit = new wxMenuItem( FileMenu, wxID_EXIT, wxString( wxT("Quit") ) + wxT('\t') + wxT("Ctrl+q"), wxEmptyString, wxITEM_NORMAL );
	FileMenu->Append( quit );

	MenuBar->Append( FileMenu, wxT("File") );

	EditMenu = new wxMenu();
	wxMenuItem* newStage;
	newStage = new wxMenuItem( EditMenu, ID_NEW_STAGE, wxString( wxT("New Stage") ) + wxT('\t') + wxT("Ctrl++"), wxT("Create New Stage"), wxITEM_NORMAL );
	EditMenu->Append( newStage );

	wxMenuItem* copyStage;
	copyStage = new wxMenuItem( EditMenu, ID_COPY_STAGE, wxString( wxT("Copy Stage") ) , wxT("Copies The Selected Stage"), wxITEM_NORMAL );
	EditMenu->Append( copyStage );

	wxMenuItem* deleteStage;
	deleteStage = new wxMenuItem( EditMenu, ID_DELETE_STAGE, wxString( wxT("Delete Stage") ) + wxT('\t') + wxT("Ctrl+Shift+D"), wxT("Deletes The Selected Stage"), wxITEM_NORMAL );
	EditMenu->Append( deleteStage );

	MenuBar->Append( EditMenu, wxT("Edit") );

	AboutMenu = new wxMenu();
	wxMenuItem* about;
	about = new wxMenuItem( AboutMenu, wxID_ABOUT, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	AboutMenu->Append( about );

	MenuBar->Append( AboutMenu, wxT("About") );

	this->SetMenuBar( MenuBar );

	wxBoxSizer* boxSizer;
	boxSizer = new wxBoxSizer( wxHORIZONTAL );

	boxSizer->SetMinSize( wxSize( 800,600 ) );

	this->SetSizer( boxSizer );
	this->Layout();
	StatusBar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );

	this->Centre( wxBOTH );

	// Connect Events
	FileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnNewBoard ), this, newBoard->GetId());
	FileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnOpenBoard ), this, openBoard->GetId());
	FileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnSaveBoard ), this, saveBoard->GetId());
	FileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnSaveAs ), this, saveAs->GetId());
	FileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnQuit ), this, quit->GetId());
	EditMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnNewStage ), this, newStage->GetId());
	EditMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnCopyStage ), this, copyStage->GetId());
	EditMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnDeleteStage ), this, deleteStage->GetId());
	AboutMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnAbout ), this, about->GetId());
}

MainFrame::~MainFrame()
{
	// Disconnect Events

}
