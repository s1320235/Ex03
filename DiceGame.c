#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STANDERD 7

int Dice();
void Check(int);
void Greet();

char name[10];

int main()
{
    int sum = 0;

    srand(time(NULL));

    //挨拶をする
    Greet();

    //サイコロを回す
    printf("Rolling Dice...\n");
    for(int i = 0; i < 2; i++)
    {
        sum += Dice();
    }
    printf("Total value: %d \n", sum);

    //勝敗をチェック
    Check(sum);

    return 0;
}

//挨拶をする
void Greet()
{
    //名前を聞く
    printf("What your name? \n");
    printf("> ");

    //名前を読み込む
    scanf("%s", name);

    //挨拶をする
    printf("Hello, %s! \n", name);
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

//勝敗をチェックする
void Check(int sum)
{
    if(sum > STANDERD)
    {
        printf("%s won! \n", name);
    }
    else
    {
        printf("%s lost! \n", name);
    }
}