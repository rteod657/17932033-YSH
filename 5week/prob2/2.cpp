#include<stdio.h>

int main(void)
{
    while (1)
    {
        int integer;
        int i, j;
        int pointer;
        int count = 0;

        printf("\nEnter 0 to exit \n");
        printf("Please enter an integer greater than or equal to 2 : ");
        scanf_s("%d", &integer);

        for (i = 2; i <= integer; i++)
        {
            pointer = 1;
            for (j = 2; j < i; j++)
            {
                if ((i % j) == 0)
                {
                    pointer = 0;
                    break;
                }
            }
            if (pointer == 1)
            {
                printf("%5d", i);
                count++;
                if ((count % 5) == 0)
                {
                    printf("\n");
                }
            }
        }
        if (integer == 0) break;
    }
}
