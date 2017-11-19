#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape {

public:
    setName(string name);
    Shape(string _name);
    string getName();
    ~Shape();

private:
    string name;


};

#endif // SHAPE_H
