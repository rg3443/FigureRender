#ifndef CLINERENDER_H_INCLUDED
#define CLINERENDER_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;
#include "SDL.h"

#include "../GGlobalVar.h"

class CLineRender {
public:
    CLineRender() {}
    void Init(SDL_Renderer ** etrenderer, SDL_Window ** window) { renderer = etrenderer; this->window = window; }
    void DrawLine(cords p1, cords p2,SDL_Color c);

protected:
    SDL_Renderer ** renderer;
    SDL_Window ** window;

};


#endif // CLINERENDER_H_INCLUDED
