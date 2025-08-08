#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);
    // Don't change above this line
    
    // Write your code here
    int decena = grade / 10;
    switch (decena) {
   case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
}

    return 0;
}