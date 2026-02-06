#include <stdio.h>

int main()
{
    printf("WWW.");
    goto x;
    y:
    printf("mode");
    goto z;
    x:
    printf("learner");
    goto y;
    z:
    printf(".com");
    return 0;
}