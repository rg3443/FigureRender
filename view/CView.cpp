#include "CView.h"

void CView::Init(CModel * model)
{
    this->model = model;

    TTF_Init();
    SDL_Init(SDL_INIT_EVERYTHING);

    fleetingWindow = SDL_CreateWindow(
        "Figures",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_SIZE_W, WINDOW_SIZE_H,
        SDL_WINDOW_SHOWN
    );
    fleetingRender = SDL_CreateRenderer(fleetingWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    mainRender = &fleetingRender;
    mainWindow = &fleetingWindow;

    brush.Init(mainRender,mainWindow);

}

void CView::Show()
{
    SDL_SetRenderDrawColor(*mainRender,0,0,0,0);
    SDL_RenderClear(*mainRender);

    for(int figureId=0; figureId<model->GetFigureAmmount(); figureId++)
    {
        brush.DrawFigure( model->GetFigure(figureId) );
    }

    SDL_RenderPresent(*mainRender);
}
