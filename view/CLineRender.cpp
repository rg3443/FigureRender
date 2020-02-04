#include "CLineRender.h"

void CLineRender::DrawLine(cords p1, cords p2,SDL_Color c)
{
    SDL_SetRenderDrawColor( *renderer, c.r, c.g, c.b,c.a);
    SDL_RenderDrawLine( *renderer, p1.x, p1.y, p2.x, p2.y );
}
