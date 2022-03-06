#pragma once
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

///////////////////////////////////////////////////////////////////////////////
/// Class MyMainFrame
///////////////////////////////////////////////////////////////////////////////
class MyMainFrame : public wxFrame
{
    enum
    {
        ID_Hello = 1
    };

public:
    MyMainFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Main_window"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(673, 422), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

    ~MyMainFrame();

private:
    wxStaticText* m_staticText1;
    wxButton* m_button1;
    wxButton* m_button2;
    wxButton* m_button3;

    // Virtual event handlers, override them in your derived class
    virtual void OnUserMClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnGmClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLoginClick(wxCommandEvent& event) { event.Skip(); }
    wxDECLARE_EVENT_TABLE();
};
