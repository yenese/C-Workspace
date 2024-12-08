#include <stdio.h>
#include <math.h>

int takenumber(signed long long ID, int flag, int initial, int number) {
    long int result = 0;
    int digits_array[12] = {0};
    int i = 11;
    int digits;
    int temp = number;
    int j;

    while (ID > 0) {
        digits = ID % 10;
        digits_array[i] = digits;
        i--;
        ID = ID / 10;
    }
    
    
    for (i=0; i<12; i++){
        printf("%d",digits_array[i]);
    }

    if (flag == 0) {
        for (j = initial - 1; j < initial + number - 1; j++) {
            result += digits_array[j] * pow(10, temp - 1);
            temp--;
        }
    }

    if (flag == 1) {
        for (j = 12 - initial; j < 12 - initial + number; j++) {
            result += digits_array[j] * pow(10, temp - 1);
            temp--;
        }
    }

    return result;
}

int min_number(signed long long ID) {
    int i = 11;
    int digits;
    int min;
    int digits_array[12] = {0};

    while (ID > 0) {
        digits = ID % 10;
        digits_array[i] = digits;
        i--;
        ID = ID / 10;
    }

    min = digits_array[0];

    for (i = 0; i < 12; i++) {
        if (digits_array[i] < min) {
            min = digits_array[i];
        }
    }
    return min;
}

int max_number(signed long long ID) {
    int i = 11;
    int max;
    int digits;
    int digits_array[12] = {0};

    while (ID > 0) {
        digits = ID % 10;
        digits_array[i] = digits;
        i--;
        ID = ID / 10;
    }

    max = digits_array[0];

    for (i = 0; i < 12; i++) {
        if (digits_array[i] > max) {
            max = digits_array[i];
        }
    }
    return max;
}

float average(signed long long ID) {
    int digits_array[12] = {0};
    int digits;
    int sum = 0;
    int i = 11;

    while (ID > 0) {
        digits = ID % 10;
        digits_array[i] = digits;
        i--;
        ID = ID / 10;
    }

    for (i = 0; i < 12; i++) {
        sum += digits_array[i];
    }
    return sum / 12.0 / 100;
}

float area(int a, int b, int c, int x0, int x1, float step) {
    float area1 = 0;
    float x; // f(x) =a*x^2 + b*x +c

    for (x = x0; x <= x1; x += step) {
        float y = a * x * x + b * x + c;
        area1 += y * step; // Riemann integrali
    }
    return area1;
}

int main() {
    signed long long ID1 = 220102002054;
    int coef1, coef2, coef3;
    int min, max;
    float avr;
    float area1;

    printf("%d \n", coef1 = takenumber(ID1, 0, 1, 2));
	printf("%d \n", coef2 = takenumber(ID1, 1, 4, 2));
	printf("%d \n", coef3 = takenumber(ID1, 1, 2, 2));
	
	printf("%d \n", min = min_number(ID1));
	printf("%d \n", max = max_number(ID1));
	
	avr = average(ID1);
	
	area1 = area(coef1, coef2, coef3, min, max, avr);
	
	printf("Area: %f\n", area1);
	
	
	return 0;
}
