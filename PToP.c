#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr;
    int **pptr;
    int number = 6;
    ptr = &number;
    pptr = &ptr;
    printf("ptr is %p\n", ptr);
    printf("Content of ptr is %d\n", *ptr);
    printf("pptr is %p\n", pptr);
    printf("Address ptr is %p\n", &ptr);
    printf("Address ptr is %p\n", (void *) &ptr);

    return 0;
}