#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	int tong;
	int hieu;
	int tich;
	int thuong;
	
	printf ("Nhap so num1 = ");
	scanf ("%d",&num1);
	
	printf ("Nhap so num2 = ");
	scanf ("%d",&num2);
	

	printf ("Tong = %d \n",tong = num1 + num2);
	printf ("Hieu = %d \n",hieu = num1 - num2);
	printf ("Tich = %d \n",tich = num1 * num2);
	printf ("Thuong = %d \n", thuong = num1 / num2);
	
	return 0;
}
