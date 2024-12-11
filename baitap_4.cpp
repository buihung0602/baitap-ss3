#include <stdio.h>
float math,literature,english,sumScore,averageScore;
int main() {
	printf("nhap diem mon toan: ");
	scanf("%f",&math);
	printf("nhap diem mon van: ");
	scanf("%f",&literature);
	printf("nhap diem mon anh: ");
	scanf("%f",&english);
	sumScore=math+literature+english;
	averageScore=sumScore/3;
	printf("tong diem la: %.2f\n",sumScore);
	printf("diem trung binh la: %.2f",averageScore);
	return 0;
}
