/***************************************************************
 * Name:      filegazeboApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Ben Milliron (bmilliron@hotmail.com)
 * Created:   2015-08-16
 * Copyright: Ben Milliron (www.filegazebo.com)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "filegazeboApp.h"
#include "filegazeboMain.h"

IMPLEMENT_APP(filegazeboApp);

bool filegazeboApp::OnInit()
{
    filegazeboFrame* frame = new filegazeboFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
