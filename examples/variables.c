#include <stdio.h>

int main(void) {
    int age = 30;
    float height = 5.9;
    char initial = 'J';
    char name[] = "John";

    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Initial: %c\n", initial);
    printf("Name: %s\n ", name);

    return 0;
}
