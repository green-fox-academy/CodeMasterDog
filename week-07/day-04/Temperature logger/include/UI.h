#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "..\SerialPortWrapper.h"
#include <windows.h>
#include "Storage.h"

class UI
{
    public:
        UI();
        virtual ~UI();
        void menu_src();
        void choice();
        void correcting_format(string &);

    protected:

    private:
        char key;
        bool is_opened;
};

#endif // UI_H
