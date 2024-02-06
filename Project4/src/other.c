#include <stdio.h>
#include <stdlib.h>
// #include "other.h"

extern int g_fav_num;

int get_fav_num() {
    return g_fav_num;
}