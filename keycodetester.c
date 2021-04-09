#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    for (;;)
    {
        int in1 = getch();
        if (in1 == 0)
        {
            int in2 = getch();
            printf("%d \n", in2);
        }
        else
        {
            printf("%d \n", in1);
        }
    }
    return 0;
}