#include <stdio.h>

int main() {
    int temperature;
    char scale;

    
    scanf("%d", &temperature);
    scanf(" %c", &scale);
    
    float C;
	if (scale == 'F') {
		C = (temperature - 32) * 5.0 / 9.0;
	} else if (scale == 'C') {
		C = temperature;
	}
	
	if (C < 0) {
	printf("Freezing\n");
	} else if (C >= 0 && C <= 20) {
		printf("Cold\n");
	} else if (C >= 21 && C <= 30) {
		printf("Pleasant\n");
	} else if (C > 30) {
		printf("Hot\n");
	}
	
    return 0;
}