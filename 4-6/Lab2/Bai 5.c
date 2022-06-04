#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top;
	float bottom;
	float height;
	float S;
	
	printf ("Nhap day nho ");
	scanf ("%f",&top);
	
	printf ("Nhap day lon ");
	scanf ("%f",&bottom);
	
	printf ("Nhap chieu cao ");
	scanf ("%f",&height);
	
	S = (top + bottom) * height / 2;
	
	printf ("Dien tich hinh thang la %f", S);
	
	
	return 0;
}
