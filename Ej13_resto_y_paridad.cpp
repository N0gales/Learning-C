#include <stdio.h>

int main() {
    int first = 17;
    int second = 5;

    scanf("%d", &first);
    scanf("%d", &second);
    

    int suma = first + second;
    int isEven = suma % 2 == 0 || suma % 2 != 0;
	int remainder = first % second;
	int isDivisible = remainder ==0;

    printf("Remainder: %d\n", remainder);
    printf("Sum is odd: %d\n", isEven);
    printf("First is divisible by second: %d\n", isDivisible);
    return 0;
}
