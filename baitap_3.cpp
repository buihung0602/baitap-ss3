#include <stdio.h>
short r;
float Perimeter, Area,pi=3.14;
int main() {
	printf("nhap r: ");
	scanf("%d",&r);
	Perimeter = 2*pi*r;
	Area=pi*r*r;
	printf("chu vi hinh tron la: %.2f\n", Perimeter);
	printf("dien tich hinh tron la: %.2f",Area);
	return 0;
}
