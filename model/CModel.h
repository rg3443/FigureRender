#ifndef CMODEL_H_INCLUDED
#define CMODEL_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
#include "SDL.h"

#include "CBaseFigure.h"
#include "heirs/CSquare.h"
#include "heirs/CTriangle.h"
#include "heirs/CCircle.h"

class CModel {
public:
    CModel() {}
    ~CModel();
    void Init();
    void CreateSquare(cords position,int wildth,int height,SDL_Color color);
    void CreateTriangle(cords /*top corner*/position,int footingWildth, int height, SDL_Color color);
    void CreateCircle(cords /*middle point*/position,int radius, SDL_Color color);

    CBaseFigure* GetFigure(int id) { return figureList[id]; }
    int GetFigureAmmount() { return figureList.size(); }
protected:
    vector<CBaseFigure*> figureList;

};

#endif // CMODEL_H_INCLUDED
