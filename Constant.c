#include <stdio.h>

int main() 
{
    const float PI = 3.14159;
    float radius;
    scanf("%f", &radius);
    printf("Area: %.2f\n", PI * radius * radius);
    return 0;
}
