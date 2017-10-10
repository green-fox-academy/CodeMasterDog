#include <stdio.h>

int main()
{
    int arr[50];

    //advanced_1.c
    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting

    puts("please enter tnomber of the array's elements");
   int num_of_elements;
   scanf("%d", &num_of_elements);
   printf("ennyi a szamod: %d", num_of_elements);

        for (int i=0; i<num_of_elements; i++){

            int value = rand() %500;
            printf("\n%d ",value);
            arr[i]=value;
           // printf("\n%d", arr[rand() %500] );
        }
printf("\n arr0: %d", arr[0]);
printf("\n arr1: %d", arr[1]);
printf("\n arr2: %d" , arr[2]);

    return 0;