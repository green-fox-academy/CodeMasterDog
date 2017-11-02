#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[100] ;
} Dogs;

int main()
{
    Dogs d1 = {10, "Kutyus"};
    Dogs d2 = {2, "Tutyus"};
    Dogs d3 = {1, "Lolka"};
    Dogs d4 = {11, "Mazsola"};
    Dogs dog[] = {d1, d2, d3, d4};
    int lenght = sizeof(dog) / sizeof(dog[0]);
    int result = get_young(dog, lenght);

    printf("The youngest dog is %s, and he is %d years old.\n", dog[result].name, dog[result].age);

    return 0;
}

int get_young(Dogs *dog, int len)
{
    int youngest = 100;

    for(int i = 0; i < len; i++) {
        if (dog[i].age < dog[youngest].age)
            youngest = i;
    }

    return youngest;
}


