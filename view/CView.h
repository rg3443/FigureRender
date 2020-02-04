#ifndef CVIEW_H_INCLUDED
#define CVIEW_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;
#include "SDL.h"
#include "SDL_ttf.h"

#include "../GGlobalVar.h"
#include "CPointConnector.h"
#include "../model/CModel.h"

class CView {
public:
    CView() {}
    void Init(CModel * model);
    void Show();
protected:
    CModel * model;


    SDL_Renderer * fleetingRender;
    SDL_Window * fleetingWindow;
    SDL_Renderer ** mainRender;
    SDL_Window ** mainWindow;
    CPointConnector brush;
};

#endif // CVIEW_H_INCLUDED
