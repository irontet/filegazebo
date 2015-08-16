/***************************************************************
 * Name:      filegazeboApp.h
 * Purpose:   Defines Application Class
 * Author:    Ben Milliron (bmilliron@hotmail.com)
 * Created:   2015-08-16
 * Copyright: Ben Milliron (www.filegazebo.com)
 * License:
 **************************************************************/

#ifndef FILEGAZEBOAPP_H
#define FILEGAZEBOAPP_H

#include <wx/app.h>

class filegazeboApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // FILEGAZEBOAPP_H
