#include <stdio.h>

int main()
{
    //advanced_1.c
    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting
    int arr[50];
    puts("Please enter number of the array's elements.:");
    int num_of_elements;
    scanf("%d", &num_of_elements);

    for (int i=0; i<num_of_elements; i++){
            int value = rand() %500;
            arr[i]=value;
        }

    for(int i=0; i<num_of_elements; i++){
        printf("\nThe value of arr[%d] is %d", i, arr[i] );
        }

    printf("\n\n");
    printf("\nSelect one element to delete\n");
    int idx_to_delete=-1;
    scanf("%d", &idx_to_delete);

    while (idx_to_delete >= num_of_elements||idx_to_delete*-1>0){
        scanf("%d", &idx_to_delete);
        printf("\nSelect one element to delete\n");
        }

    for (int i = 0; i<num_of_elements-1;i++){
        if (i<idx_to_delete)
            arr[i] = arr[i];
        else
            arr[i] = arr[i+1];

        printf("\nThe value of arr[%d] is %d", i, arr[i] );
    }
    printf("\n\n");
    return 0;
}
