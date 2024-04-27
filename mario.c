#include <stdio.h>
#include <stdlib.h>

 

int main(void)
{

    int i;
    int height;
 
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }

    while (height < 1);

    for (i = 1; i <= height; i++)
    {

        for (int sp = height - i; sp > 0; sp--)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {

            printf("#");
        }

        printf("\n");
    }
}