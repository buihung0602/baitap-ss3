#include <stdio.h>
float Celsius, Fahrenheit;
int main() {
	printf("nhap nhiet do Celsius: ");
	scanf("%f",&Celsius);
	Fahrenheit = Celsius*9/5 +32; 
	printf("%.2f Celsius doi thanh %.2f Fahrenheit",Celsius,Fahrenheit);
	return 0;
}
