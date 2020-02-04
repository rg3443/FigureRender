#include "CPointConnector.h"

void CPointConnector::Init(SDL_Renderer ** render,SDL_Window ** window)
{
    try {
        if(render != nullptr) this->render = render;
        else throw "ERROR: void render\n";
        if(window != nullptr) this->window = window;
        else throw "ERROR: void window\n";

        brush.Init(render,window);
    }
    catch(const char* error) { printf(error); }
}

void CPointConnector::DrawFigure(CBaseFigure * figure)
{
    int pointAmmount = figure->GetPointAmmount();
    if(pointAmmount != 1) {
    for(int pointId=0; pointId<pointAmmount; pointId++)
    {
        if(pointId == pointAmmount) break;
        else {
            cords p1,p2;
            p1 = figure->GetPointById(pointId);

            if(pointId == pointAmmount-1) p2 = figure->GetPointById(0);
            else p2 = figure->GetPointById(pointId+1);

            SDL_Color figureColor = figure->GetColor();
            brush.DrawLine(p1,p2,figureColor);
        }
    }
    } else {
        //draw circle
    }
}
