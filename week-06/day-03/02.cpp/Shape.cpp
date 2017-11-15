#include "Shape.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Shape::print_result(double result)
{
    cout << "The result is: " << fixed << setprecision(3) << result << " cm2"<<endl;
}
