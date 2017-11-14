#include <iostream>
#include <string>
#include "Student.h"
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21
  /* Well, I already made a constructor for this, so the next task will be its second 'instance' */
using namespace std;

int main()
{
    Student st("John", 21);
    st.print_st();


  return 0;
}
