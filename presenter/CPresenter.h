#ifndef CPRESENTER_H_INCLUDED
#define CPRESENTER_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
#include "SDL.h"

#include "../model/CModel.h"
#include "../view/CView.h"

class CPresenter {
public:
    CPresenter() {}
    void Init();
    void Run();
protected:
    CView view;
    CModel model;
    bool quit;
};

#endif // CPRESENTER_H_INCLUDED
