#include <stdio.h>
#include <math.h>

int main() {
    float radius = 1.5;
    float pi = 3.14159;
    float volume = (4.0/3.0) * pi * radius * radius * radius;// Write your code here
    printf("The volume of a sphere with radius %.2f is %.2f cubic units", radius, volume);
    return 0;
}
