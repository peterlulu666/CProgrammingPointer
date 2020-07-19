#include <stdio.h>

int main() {
    char hw[] = "Hello World";
    // The address of the array is as same as the address of the first character
    // Array hw is the address of array &hw and it is the address of the first character &hw[0]
    printf("%s, %c, %d, %d, %d\n", hw, hw[0], &hw, &hw[0], hw);

    return 0;
}