#include<stdio.h>

extern int g_num;

void increment_num(void)
{
    g_num++;
}

void print_num(void)
{
    printf("g_num = %d\n", g_num);
}
