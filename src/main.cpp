// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#include "include/mainwindow.h"
#include "include/login.h"
#include "include/id.h"

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    MyMainFrame* frame = new MyMainFrame(nullptr, window::id::MAINWINDOW);
    frame->Show(true);
    return true;
}

DECLARE_APP(MyApp);
