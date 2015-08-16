/***************************************************************
 * Name:      filegazeboMain.h
 * Purpose:   Defines Application Frame
 * Author:    Ben Milliron (bmilliron@hotmail.com)
 * Created:   2015-08-16
 * Copyright: Ben Milliron (www.filegazebo.com)
 * License:
 **************************************************************/

#ifndef FILEGAZEBOMAIN_H
#define FILEGAZEBOMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "filegazeboApp.h"

class filegazeboFrame: public wxFrame
{
    public:
        filegazeboFrame(wxFrame *frame, const wxString& title);
        ~filegazeboFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // FILEGAZEBOMAIN_H
