#include<stdio.h>
#include"util.h"

int g_num = 0;

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        increment_num();
        print_num();
    }
}