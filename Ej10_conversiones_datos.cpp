#include <stdio.h>
#define MAX_SCORE 100
int main() {
     
    int age = 25;
    float price = 19.99;
    char grade = 'A';
    
   
    float discountprice = price * (1 - 0.15);
   
    int roundedprice = (int)discountprice;
   
    printf("Age: %d\n", age);
    printf("Price: $%.2f\n", price);
    printf("Discounted Price: $%.2f\n", discountprice);
    printf("Rounded Price: $%d\n", roundedprice);
    printf("Grade: %c\n", grade);    
    printf("Max Score: %d\n", MAX_SCORE);

    return 0;
}
