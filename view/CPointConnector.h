#ifndef CPOINTCONNECTOR_H_INCLUDED
#define CPOINTCONNECTOR_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;
#include "SDL.h"

#include "../GGlobalVar.h"
#include "../model/heirs/CSquare.h"
#include "../model/CBaseFigure.h"
#include "CLineRender.h"

class CPointConnector {
public:
    CPointConnector() {}
    void Init(SDL_Renderer ** render,SDL_Window ** window);
    void DrawFigure(CBaseFigure * square);
protected:
    SDL_Renderer ** render;
    SDL_Window ** window;
    CLineRender brush;
};

#endif // CPOINTCONNECTOR_H_INCLUDED
