#ifndef INTEGER_H
#define INTEGER_H


class Integer
{
    public:
        Integer(int);
        add(int);
        add(int, int);
        add(int, int, int);
        add(int, int, int, int);
        add(int, int, int, int, int);
        int PrintVariavle();
        virtual ~Integer();

    protected:
        int int_one;

    private:
};

#endif // INTEGER_H
