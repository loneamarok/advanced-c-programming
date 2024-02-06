#include <stdio.h>
#include "other.h"

extern int g_fav_num;

int main(void)
{
    printf("%d\n", get_fav_num());
    printf("%d\n", g_fav_num*2);
    return 0;
}
