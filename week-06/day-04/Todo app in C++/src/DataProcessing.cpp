#include "DataProcessing.h"
#include <vector>
#include <iostream>
#include "UserInput.h"
#include <string>

using namespace std;

DataProcessing::DataProcessing()
{
    //ctor
}

int DataProcessing::new_task_to_vector()
{

    task_vector.push_back(task_name);

   // cout << "First task is: " <<  task_vector[0] << endl;

    return 0;
}

void DataProcessing::print_tasks()
{



    for( vector<string>::iterator it = task_vector.begin(); it != task_vector.end(); it++) {
        cout << task_vector[0] << endl;
int    index = std::distance( task_vector.begin(), it );
        cout << index << endl;
    }
}

DataProcessing::~DataProcessing()
{
    //dtor
}
