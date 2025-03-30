#include <stdio.h>

int main(void) {
    int x = 15;
    int* y = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", y);

    return 0;

}