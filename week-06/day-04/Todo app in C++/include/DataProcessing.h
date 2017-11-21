#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H

#include <string>
#include <vector>


using namespace std;

class DataProcessing
{
    public:
        DataProcessing();
        virtual ~DataProcessing();
        int new_task_to_vector();
        void print_tasks();
    protected:
        vector<string> task_vector;
    private:
};

#endif // DATAPROCESSING_H
