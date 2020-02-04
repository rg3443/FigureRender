#include "CModel.h"
#include <ctime>

void CModel::Init()
{
    this->CreateTriangle(cords(60,WINDOW_SIZE_H/2),100,100,typecolor(255,0,0));
    this->CreateSquare(cords(170,WINDOW_SIZE_H/2),100,100,typecolor(255,0,0));
    this->CreateSquare(cords(280,WINDOW_SIZE_H/2),100,50,typecolor(255,0,0));
    this->CreateCircle(cords(500,WINDOW_SIZE_H/2),100,typecolor(255,0,0));
}



void CModel::CreateSquare(cords /*top-left corner*/position,int wildth,int height,SDL_Color color)
{
    CSquare * new_sq = new CSquare;
    new_sq->Init(position,wildth,height,color);
    figureList.push_back( new_sq );
}


void CModel::CreateTriangle(cords /*top corner*/position,int footingWildth, int height, SDL_Color color)
{
    CTriangle * new_tr = new CTriangle;
    new_tr->Init(position,footingWildth,height,color);
    figureList.push_back( new_tr );
}

void CModel::CreateCircle(cords /*middle point*/position,int radius, SDL_Color color)
{
    CCircle * new_cr = new CCircle;
    new_cr->Init(position,radius,color);
    figureList.push_back(new_cr);
}

CModel::~CModel()
{
    for(int figureId=0;figureId<figureList.size();figureId++)
    {
        delete figureList[figureId];
    }
}
