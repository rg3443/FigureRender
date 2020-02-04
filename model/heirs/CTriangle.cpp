#include "CTriangle.h"

void CTriangle::Init(cords /*top corner*/position,int footingWildth, int height, SDL_Color color)
{
    this->position = position;
    this->footingWildth = footingWildth;
    this->height = height;
    this->color = color;
    this->SetPointAmmount(3);

    pointList[0] = position;                                                // TOPCORNER
    pointList[1].setcord( position.x+(footingWildth/2),position.y+height ); // RIGHTCORNER
    pointList[2].setcord( position.x-(footingWildth/2),position.y+height ); // LEFTCORNER
}
