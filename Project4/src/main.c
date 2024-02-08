#include <stdio.h>
#include "other.h"

int main(void)
{
    extern int g_fav_num;
    g_fav_num = 9;
    printf("%d\n", get_fav_num());
    printf("%d\n", g_fav_num*2);
    return 0;
}
