#include <stdio.h>

int main() {
    int temperature;
    scanf("%d", &temperature);
   
    // Write your if statements below
   if (temperature >= 30) {
    printf("It's a hot day!\n");
}
   if (temperature >= 20 && temperature <= 30) {
    printf("The weather is nice.\n");
}
   if (temperature <= 20) {
    printf("It's a bit cold today.\n");
}
    return 0;
}