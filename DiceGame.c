#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dice();

int main()
{
    int sum = 0;

    srand(time(NULL));

    //サイコロを回す
    printf("Rolling Dice...\n");
    for(int i = 0; i < 2; i++)
    {
        sum += Dice();
    }
    printf("Total value: %d \n", sum);
    return 0;
}

//サイコロの目を出す
int Dice()
{
    static int id = 0;
    int n;

    printf("Dice %d: ", ++id);
    n = rand() % 6 + 1;
    printf("%d \n", n);

    return n;
}