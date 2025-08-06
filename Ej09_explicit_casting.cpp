#include <stdio.h>

int main() {
   int smallNumber = 42;
   float mediumNumber = 123.456; 
   double largeNumber = smallNumber;

   printf("Small to large: %.1f\n", largeNumber);

   double large = mediumNumber;
   printf("Medium to large: %.1f", large);
   
    return 0;
}
