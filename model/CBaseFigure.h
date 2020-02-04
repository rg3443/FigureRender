#ifndef CBASEFIGURE_H_INCLUDED
#define CBASEFIGURE_H_INCLUDED

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include "SDL.h"
#include "Windows.h"
using namespace std;

#include "../GGlobalVar.h"

class CBaseFigure {
public:
    CBaseFigure() {}
    virtual void Init() {}
//  SETTERS
    void SetPosition(cords position) { this->position = position; }
    void SetPostion(int x,int y) { position.x = x; position.y = y; }
    void SetColor(SDL_Color color) { this->color = color; }
    void SetPointAmmount(int ammount) { pointList.resize(ammount); }

//  GETTERS
    cords GetPosition() { return position; }
    int GetX() { return position.x; }
    int GetY() { return position.y; }
    SDL_Color GetColor() { return color; }
    int GetPointAmmount() { return pointList.size(); }
    cords GetPointById(int id) { return pointList[id]; }

protected: /*variables*/
    cords position;
    SDL_Color color;
    vector<cords> pointList;
};

#endif // CBASEFIGURE_H_INCLUDED
