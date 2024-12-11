#include <stdio.h>
int side,height;
float area = 0;
int main() {
	printf("nhap vao do dai canh: ");
	scanf("%d",&side);
	printf("nhap chieu cao: ");
	scanf("%d",&height);
	area = (side * height)/ 2;
	printf("dien tich tam giac la: %.2f ", area);
	return 0;
}
