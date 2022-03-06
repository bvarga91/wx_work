#include "include/login.h"

///////////////////////////////////////////////////////////////////////////

MyLoginFrame::MyLoginFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Login window"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 25, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer11->Add( m_staticText4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer2->Add( bSizer11, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 2, 2, 0, 0 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Username"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer13->Add( m_staticText5, 0, wxALIGN_RIGHT|wxALL, 5 );


	gSizer2->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl4 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	bSizer14->Add( m_textCtrl4, 0, wxALL, 5 );


	gSizer2->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer15->Add( m_staticText6, 0, wxALIGN_RIGHT|wxALL, 5 );


	gSizer2->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl5 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_PASSWORD);
	bSizer16->Add( m_textCtrl5, 0, wxALL, 5 );


	gSizer2->Add( bSizer16, 1, wxEXPAND, 5 );


	bSizer2->Add( gSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Login"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	bSizer12->Add( m_button2, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer2->Add( bSizer12, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyLoginFrame::OnLoginClick ), NULL, this );
	m_button2->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( MyLoginFrame::OnLoginEnter ), NULL, this );
}

MyLoginFrame::~MyLoginFrame()
{
	// Disconnect Events
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyLoginFrame::OnLoginClick ), NULL, this );
	m_button2->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( MyLoginFrame::OnLoginEnter ), NULL, this );
}

wxBEGIN_EVENT_TABLE(MyLoginFrame, wxFrame)
    EVT_MENU(ID_Login_Click, MyLoginFrame::OnLoginClick)
wxEND_EVENT_TABLE()