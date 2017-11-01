#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
char userinput[100];

char op[100];
double num1;
double num2;
static int cursor_y;

int transformedop;
int lenght_of_userinput;
extern int open;
COORD coord = {0,0};

void run()
{
    while (userinput != '\0') {
        if (open == 0)
            start_screen();
        open++;

        gets(userinput);
        lenght_of_userinput = (strlen(userinput));
        //print_userinput();
        other_command();
        arithmeticop();
    }

}

void clearscr()
{

    system("cls");
    cursor_y = 0;

}

void start_screen()
{
    int c = 0;
    do {
        clearscr();
        printf("	CLI Calculator\n\
        ====================================\n\
        usage: [number] [operation] [number]\n\
        Commands:\
        \n\
         +	summation\n\
         -	subtraction\n\
         *	multiplication\n\
         /	division\n\
         %	division with remainder\n\
         ^	squaring\n\
         <	square root\n\
         log	logarithm\n\
         binto	binary to hex or dec\n\
         hexto	hexadecimal to bin or dec\n\
         decto	decimal to bin or hex\n\
         ====================================\n\
         exit	exiting from the program\n\
         clear	clear the screen\n\
         help	print usage\n\
         ====================================\n\
         Hit enter to start!\n\
         ====================================\n");
    } while ((c = getch()) != 13);
    clearscr();

}


void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void other_command()
{

    if (strcasecmp(userinput, "exit") == 0) {
        exit(0);
    }

    if (strcasecmp(userinput, "clear") == 0) {
        clearscr();
        main();
    }

    if (strcasecmp(userinput, "help") == 0) {
        system("cls");
        start_screen();
        main();
    }



}

void arithmeticop()
{
    split();

    if (strcasecmp(op, "+") == 0)
        transformedop = 1;

    if (strcasecmp(op, "-") == 0)
        transformedop = 2;

    if (strcasecmp(op, "*") == 0)
        transformedop = 3;

    if (strcasecmp(op, "/") == 0)
        transformedop = 4;

    if (strcasecmp(op, "%") == 0)
        transformedop = 5;

    if (strcasecmp(op, "^") == 0)
        transformedop = 6;

    if (strcasecmp(op, "<") == 0)
        transformedop = 7;

    if (strcasecmp(op, "log") == 0)
        transformedop = 8;

    if (strcasecmp(op, "binto") == 0)
        transformedop = 9;





    switch (transformedop) {

        case 0:
        break;

        case 1:
        summation();
        break;

        case 2:
        subtraction();
        break;

        case 3:
        multiplication();
        break;

        case 4:
        division();
        break;

        case 5:
        division_with_remainder();
        break;

        case 6:
        squaring();
        break;

        case 7:
        square_root();
        break;

        case 8:
        log_calc();
        break;

        case 9:
        binto();
        break;

        default:
        printf("default");
        break;
    }

}

void print_userinput()
{

    printf("user input: %s\n", userinput);


}

void split()
{

    char charnum[100];

    //takes the first num as float
    strcpy(charnum, strtok(userinput, " "));
    num1 = atof(charnum);
    //takes the operator as char
    strcpy(op, strtok(NULL , " "));
    //takes the second num as float
    strcpy(charnum, strtok(NULL, " "));
    num2 = atof(charnum);

    //printf("num1 (as float) is: %f\n", num1);
    // printf("op (as char) is: %s\n", op);
    //printf("num2 (as float) is: %f\n", num2);


}

void summation()
{

    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    float result = num1+num2;
    cursor_y++;
    printf("= %.3f\n", num1 + num2);

}

void subtraction()
{
    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    float result = num1 - num2;
    cursor_y++;
    printf("= %.3f\n", result);
}

void multiplication()
{
    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    float result = num1 * num2;
    cursor_y++;
    printf("= %.3f\n", result);
}

void division()
{
    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    float result = num1 / num2;
    cursor_y++;
    printf("= %.3f\n", result);
}

void division_with_remainder()
{
    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    float result = fmod(num1, num2);
    cursor_y++;
    printf("= %.3f\n", result);
}

void squaring()
{
    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    float result = pow(num1, num2);
    cursor_y++;
    printf("= %.3f\n", result);
}

void square_root()
{
    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    if (num1 == 2) {
        float result = sqrt(num2);
        cursor_y++;
        printf("= %.3f\n", result);
    }
    else{
    cursor_y++;
    printf("The first number must be 2.\n");
    }
}

void log_calc()
{
    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);
    float result = log10(num2)/ log10(num1);
    cursor_y++;
    printf("= %.3f\n", result);
}

void binto()
{

    int x = lenght_of_userinput + 1;
    set_cursor_pos(x, cursor_y);

    int result;
    char binarynum[30];

    if (num2 == 10) {

        strtol(binarynum, NULL, 2);

        int lenght;
        int  result =0;
        int counter = 0;
        lenght = sizeof(binarynum) / sizeof (binarynum[0]);
        for(int i = 0; i < lenght-1; i++) {

            if (binarynum[lenght-2-i] == 49){
                result = result + pow(2, counter);
            }
            counter++;
        }
    printf("result %d\n", result);

    }
}


