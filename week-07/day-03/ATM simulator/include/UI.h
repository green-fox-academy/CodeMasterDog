#ifndef UI_H
#define UI_H

using namespace std;

class UI
{
    public:
        UI();
        void menu_src();
        void login(string, string);
        virtual ~UI();

    protected:

    private:
        string entered_pin;
};

#endif // UI_H
