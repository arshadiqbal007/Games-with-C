#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, n, x = 1;
    srand(time(0));
    number = rand()%100 + 1;
    do
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        if(n<number)
        {
            printf("Enter More\n");
        }
        else if(n>number)
        {
            printf("Enter Less\n");
        }
        else if(n==number)
        {
            printf("You Win\n");
            break;
        }
        x++;
    }while(1);
    printf("Number of attempts = %d\n", x);
    return 0;
}
