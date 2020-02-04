#include "CSquare.h"

void CSquare::Init(cords /*top-left corner*/position,int width, int height,SDL_Color color)
{
    this->position = position;
    this->width = width;
    this->height = height;
    this->color = color;
    this->SetPointAmmount(4);

    pointList[0] = position;                                        // LEFT-TOP
    pointList[1].setcord( position.x+width,position.y );            // RIGHT-TOP
    pointList[2].setcord( position.x+width,position.y+height );     // RIGHT-LOWER
    pointList[3].setcord( position.x,position.y+height );           // LEFT-LOWER

}
