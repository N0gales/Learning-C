#include <stdio.h>

int main() {
    int age = 65;
    int isMember = 0;
	int isEligible = age >= 65 || isMember != 0;  

    printf("Eligible for discount? %d\n", isEligible);
    
    return 0;
}
