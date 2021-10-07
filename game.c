#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, a, j = 0;
    srand(time(0));
    n = (rand()) % 100 + 1;
    while(1){
    
        printf("Enter New Number ");

        scanf("%d",&a);
        if (a == n)
        {
            printf("The correct number you guessed\n");
            break;
        }
        else if (a > n)
        {
            printf("You entered bigger number\n");
            j++;
        }
        else
        {
            printf("You entered smaller number\n");
            j++;
        }
    }
    printf("Number of attempts = %d", i);
    return (0);
}
