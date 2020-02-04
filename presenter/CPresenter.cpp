#include "CPresenter.h"

void CPresenter::Init()
{
    model.Init();
    view.Init(&model);
}

void CPresenter::Run()
{
    quit = false;
    SDL_Event e;
    while(!quit) {
        view.Show();
        if(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_QUIT) quit = true;
        }
    }
}
