/*
 * mainwindow.cpp
 *
 *  Created on: 16 Apr 2020
 *      Author: dova
 */

#include <core/mainwindow.h>

MainWindow::MainWindow(wxWindow *parent) : MainFrame(parent)
{
	
}

MainWindow::~MainWindow() 
{
	

}

void MainWindow::OnNewBoard (wxCommandEvent &event)
{
	MainFrame::OnNewBoard(event);
}

void MainWindow::OnOpenBoard (wxCommandEvent &event)
{
	MainFrame::OnOpenBoard(event);
}

void MainWindow::OnSaveBoard (wxCommandEvent &event)
{
	MainFrame::OnSaveBoard(event);
}

void MainWindow::OnSaveAs (wxCommandEvent &event)
{
	MainFrame::OnSaveAs(event);
}

void MainWindow::OnQuit (wxCommandEvent &event)
{
	Close(true);
}

void MainWindow::OnNewStage (wxCommandEvent &event)
{
	MainFrame::OnNewStage(event);
}

void MainWindow::OnCopyStage (wxCommandEvent &event)
{
	MainFrame::OnCopyStage(event);
}

void MainWindow::OnDeleteStage (wxCommandEvent &event)
{
	MainFrame::OnDeleteStage(event);
}

void MainWindow::OnAbout (wxCommandEvent &event)
{
	wxMessageBox("GNU-Kanban, Software made by Spounka Von Schpeiner", "GNU-Kanban About", wxOK | wxICON_INFORMATION);
}
