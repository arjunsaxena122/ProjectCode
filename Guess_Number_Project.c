#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));            //time const then number are randomly .
    number = rand() % 100 + 1; /*Guess the number between 1 to 100 therefore use %100 .*/
    //printf("The random is %d",number);
    do
    {
        printf("The Your Number is \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher Number please!\n");
        }
        else
        {
            printf("You Attempt Number in %d", nguess);
        }
        nguess+=1;

    } while (guess != number);

    return 0;
}