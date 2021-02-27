#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

char rps(char you, char comp)
{
    if(you == comp)
    {
        printf("Game Draw");
    }
    else if(you == 'r' && comp == 'p')
    {
        printf("You Loose!!");
    }
    else if(you == 'r' && comp == 's')
    {
        printf("You Win!!");
    }
    else if(you == 'p' && comp == 'r')
    {
        printf("You Win!!");
    }
    else if(you == 'p' && comp == 's')
    {
        printf("You Loose!!");
    }
    else if(you == 's' && comp == 'r')
    {
        printf("You Loose!!");
    }
    else if(you == 's' && comp == 'p')
    {
        printf("You Win!!");
    }
}
int main()
{
    char you, comp;
    int x;
    srand(time(0));
    x = rand()%3 +1;
    if(x == 1)
    {
        comp = 'r';
    }
    else if(x == 2)
    {
        comp = 'p';
    }
    else if(x == 3)
    {
        comp = 's';
    }
    printf("Enter r for Rock, p for Paper & s for Scissor : ");
    scanf("%c", &you);
    if(you != 'r' || you != 'p' || you!= 's')
    {
        printf("Enter a Valid character\n");
    }
    printf("You chose %c and computer chose %c", you, comp);
    printf("\n");
    rps(you, comp);
    return 0;
}