#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape {

private:
    string name;

public:
    Shape(string _name);
    string getName();
    ~Shape();

};

#endif // SHAPE_H
