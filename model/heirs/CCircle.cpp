#include "CCircle.h"

void CCircle::Init(cords /*middle point*/position,int radius, SDL_Color color)
{
    this->position = position;
    this->radius = radius;
    this->color = color;
    const int LIST_AMMOUNT = 4;
    vector<cords> _pointList[LIST_AMMOUNT];
    int x = 0,y = radius,gap = 0, delta = (2 - 2 * radius);

    while(y >= 0)
    {
        cords pack[4];
        pack[0].setcord( position.x+x,position.y+y );
        pack[1].setcord( position.x+x,position.y-y );
        pack[2].setcord( position.x-x,position.y-y );
        pack[3].setcord( position.x-x,position.y+y );
        for(int listId=0;listId<LIST_AMMOUNT;listId++)
        {
            _pointList[listId].push_back(pack[listId]);
        }


        gap = 2 * (delta + y) - 1;
        if(delta < 0 && gap <= 0)
        {
            x++;
            delta += (2 * x + 1);
            continue;
        }
        if(delta > 0 && gap > 0)
        {
            y--;
            delta -= (2 * y + 1);
            continue;
        }
        x++;
        delta += (2 * (x - y));
        y--;
    }
    for(int i=0;i<(_pointList[3].size()*4);i++ )
    {
        for(int currentListId = 0;currentListId<4;currentListId++)
        for(int localPointId=0;localPointId<_pointList[currentListId].size();localPointId++)
        {
            pointList.push_back( _pointList[currentListId][localPointId] );
        }
    }
}
