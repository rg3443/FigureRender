
#include <iostream>
#include <stdio.h>
using namespace std;
#include "SDL.h"

#include "GGlobalVar.h"
#include "presenter/CPresenter.h"

int main(int argc, char *argv[])
{
    CPresenter test;
    test.Init();
    test.Run();

    return 0;
}
