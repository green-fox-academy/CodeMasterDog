#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "..\SerialPortWrapper.h"
#include <windows.h>
#include "UI.h"






class UI
{
    public:
        UI();
        virtual ~UI();
        void menu_src();
        void choice();

    protected:

    private:
        char key;
};

#endif // UI_H
