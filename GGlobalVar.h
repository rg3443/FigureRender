#ifndef GGLOBALVAR_H_INCLUDED
#define GGLOBALVAR_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;
#include "SDL.h"
#include "windows.h"

const int WINDOW_SIZE_W = 1200;
const int WINDOW_SIZE_H = 800;

struct cords {
       int x,y;
       cords() {}
       cords(const cords & crd) { x = crd.x; y = crd.y; }
       cords(int nx,int ny) { x = nx; y = ny; }
       void setcord(int nx, int ny) { x = nx; y = ny; }
       void setcord(const cords& crd) {
            x = crd.x;
            y = crd.y;
       }
};

inline SDL_Color typecolor(int r,int g,int b)
{
    SDL_Color clr = { r,g,b };
    return clr;
}

inline SDL_Rect typerect(cords p1, cords wh)
{
	SDL_Rect rect;
	rect.x = p1.x;
	rect.y = p1.y;
	rect.w = wh.x;
	rect.h = wh.y;
	return rect;
}

inline void printmemory()
{
   MEMORYSTATUS ms;
   GlobalMemoryStatus(&ms);
   cout << "START MEMORY: " << (ms.dwTotalPhys / 1024 / 1024) << " mb" << endl;
   cout << "LEFT MEMORY: " << (ms.dwAvailPhys / 1024 / 1024) << " mb" << endl;
}

inline void setrenderdrawcolor(SDL_Renderer* rend, SDL_Color clr)
{
    SDL_SetRenderDrawColor(rend,clr.r,clr.g,clr.b,clr.a);
}

#endif // GGLOBALVAR_H_INCLUDED
