// Exercise 2.4
// Calculate the product of three integers
#include <stdio.h>

int main(void) {
    printf("Enter three integers: ");
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d%d%d", &x, &y, &z);
    int result = x * y * z;
    printf("The product is %d\n", result);
    return 0;
}
