#ifndef CTRIANGLE_H_INCLUDED
#define CTRIANGLE_H_INCLUDED

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include "SDL.h"
#include "Windows.h"
using namespace std;

#include "../../GGlobalVar.h"
#include "../CBaseFigure.h"

class CTriangle : public CBaseFigure {
public:
    CTriangle() {}
    void Init(cords /*top corner*/position,int footingWildth, int height, SDL_Color color);

protected:
    int footingWildth; // ширина основания
    int height;
};

#endif // CTRIANGLE_H_INCLUDED
