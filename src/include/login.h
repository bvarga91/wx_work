#pragma once

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

///////////////////////////////////////////////////////////////////////////////
/// Class MyLoginFrame
///////////////////////////////////////////////////////////////////////////////
class MyLoginFrame : public wxFrame
{
    enum button
    {
        ID_Login_Click = 1,
        ID_Login_Enter = 2
    };

public:
    MyLoginFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 300), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

    ~MyLoginFrame();

private:
	wxStaticText* m_staticText4;
	wxStaticText* m_staticText5;
	wxTextCtrl* m_textCtrl4;
	wxStaticText* m_staticText6;
	wxTextCtrl* m_textCtrl5;
	wxButton* m_button2;

	// Virtual event handlers, override them in your derived class
	virtual void OnLoginClick( wxCommandEvent& event ) { event.Skip(); }
	virtual void OnLoginEnter( wxMouseEvent& event ) { event.Skip(); }
    wxDECLARE_EVENT_TABLE();
};

