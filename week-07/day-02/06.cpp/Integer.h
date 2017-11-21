#ifndef INTEGER_H
#define INTEGER_H

// Take the Integer class from the previous exercise and add two methods:
// One which takes an Integer& parameter and adds the value of it to the member variable of this.
// One which takes an int and adds the value of it to the member variable of this.

class Integer
{
    public:
        Integer(int);
        Integer(Integer& _obj, int);
        Integer();
        add();
        add_task6(int&);
        int PrintVariavle();
        virtual ~Integer();

    protected:
        int int_one;

    private:
};

#endif // INTEGER_H
