#include "include/mainwindow.h"
#include "include/login.h"
#include "include/id.h"

///////////////////////////////////////////////////////////////////////////

MyMainFrame::MyMainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer1;
    bSizer1 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer2;
    bSizer2 = new wxBoxSizer(wxVERTICAL);

    m_staticText1 = new wxStaticText(this, wxID_ANY, wxT("UMC-L management demo"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_staticText1->Wrap(-1);
    m_staticText1->SetFont(wxFont(25, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    bSizer2->Add(m_staticText1, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


    bSizer1->Add(bSizer2, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer3;
    bSizer3 = new wxBoxSizer(wxVERTICAL);

    m_button1 = new wxButton(this, wxID_ANY, wxT("User Managment"), wxDefaultPosition, wxSize(200, 50), 0);
    m_button1->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    bSizer3->Add(m_button1, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


    bSizer1->Add(bSizer3, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer4;
    bSizer4 = new wxBoxSizer(wxVERTICAL);

    m_button2 = new wxButton(this, wxID_ANY, wxT("Global Policy Management"), wxDefaultPosition, wxSize(200, 50), 0);
    m_button2->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    bSizer4->Add(m_button2, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


    bSizer1->Add(bSizer4, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer5;
    bSizer5 = new wxBoxSizer(wxVERTICAL);

    m_button3 = new wxButton(this, wxID_ANY, wxT("Login"), wxDefaultPosition, wxSize(200, 50), 0);
    m_button3->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    bSizer5->Add(m_button3, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


    bSizer1->Add(bSizer5, 1, wxEXPAND, 5);


    this->SetSizer(bSizer1);
    this->Layout();

    this->Centre(wxBOTH);

    // Connect Events
    m_button1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyMainFrame::OnUserMClick), NULL, this);
    m_button2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyMainFrame::OnGmClick), NULL, this);
    m_button3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyMainFrame::OnLoginClick), NULL, this);
}

MyMainFrame::~MyMainFrame()
{
    // Disconnect Events
    m_button1->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyMainFrame::OnUserMClick), NULL, this);
    m_button2->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyMainFrame::OnGmClick), NULL, this);
    m_button3->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyMainFrame::OnLoginClick), NULL, this);
}

void MyMainFrame::OnLoginClick(wxCommandEvent& event)
{
    MyLoginFrame* frame = new MyLoginFrame(nullptr, window::id::MAINWINDOW);
    frame->Show(true);
}

wxBEGIN_EVENT_TABLE(MyMainFrame, wxFrame)
    EVT_MENU(ID_User, MyMainFrame::OnUserMClick)
    EVT_MENU(ID_Global, MyMainFrame::OnGmClick)
    EVT_MENU(ID_Login, MyMainFrame::OnLoginClick)
wxEND_EVENT_TABLE()