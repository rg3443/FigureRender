#ifndef CCIRCLE_H_INCLUDED
#define CCIRCLE_H_INCLUDED

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include "SDL.h"
#include "Windows.h"
using namespace std;

#include "../../GGlobalVar.h"
#include "../CBaseFigure.h"

class CCircle : public CBaseFigure {
public:
    CCircle() {}
    void Init(cords /*middle point*/position,int radius, SDL_Color color);

protected:
    int radius;
};

#endif // CCIRCLE_H_INCLUDED
