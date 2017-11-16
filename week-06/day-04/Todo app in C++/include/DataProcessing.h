#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H
#include "UserInput.h"
#include <vector>


class DataProcessing : public UserInput
{
    public:
        DataProcessing();
        virtual ~DataProcessing();
        int new_task_to_vector();

    protected:
        vector<string> task_vector;
    private:
};

#endif // DATAPROCESSING_H
