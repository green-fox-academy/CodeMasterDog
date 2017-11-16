#include "DataProcessing.h"
#include <vector>
#include <iostream>
#include "UserInput.h"


using namespace std;

DataProcessing::DataProcessing()
{
    //ctor
}

int DataProcessing::new_task_to_vector()
{

    task_vector.push_back(task_name);
    cout << "First task is: " <<  task_vector[0] << endl;

    return 0;
}

DataProcessing::~DataProcessing()
{
    //dtor
}
