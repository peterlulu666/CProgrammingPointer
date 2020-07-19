# include <stdio.h>

int main() {
    char hw[] = "Hello World";
    char *greeting = "Hello";
    // Copy address of array to pointer
    // Array is the address of array ans it is the address of the first character
    // hw is as same as &hw and it is as same as &hw[0]
//    greeting = &hw[0];
//    greeting = &hw;
    greeting = hw;
//    printf("%s, %s\n", &hw[0], greeting);
//    printf("%s, %s\n", &hw, greeting);
    printf("%s, %s\n", hw, greeting);
    printf("address of hw = %p, %p, address of greeting = %p\n", hw, &hw, greeting);

    return 0;

}