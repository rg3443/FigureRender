#ifndef CSQUARE_H_INCLUDED
#define CSQUARE_H_INCLUDED

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include "SDL.h"
#include "Windows.h"
using namespace std;

#include "../../GGlobalVar.h"
#include "../CBaseFigure.h"

class CSquare : public CBaseFigure {
public:
    CSquare() {}
    void Init(cords /*top-left corner*/position,int width, int height,SDL_Color color);

    int GetWidth() { return width; }
    int GetHeight() { return height; }
protected:
    int width,height;
};

#endif // CSQUARE_H_INCLUDED
