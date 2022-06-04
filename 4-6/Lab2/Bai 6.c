#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan;
	float ly;
	float hoa;
	float tong;
	float tb;
	
	printf ("Nhap diem toan ly hoa\n");
	scanf ("%f %f %f",&toan,&ly,&hoa);
	
	printf ("Tong diem la %f \n", tong = toan + ly + hoa);
	printf ("Diem trung binh la %f", tb = tong/3);
	
	return 0;
}
