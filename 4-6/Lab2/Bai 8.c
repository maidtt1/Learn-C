#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	float b;
	double c;
	char d;
	
	printf ("/*===========Kich thuoc cua cac kieu du lieu ==========*/ \n");
	
	printf ("	Kieu int: %d Byte \n", sizeof(int));
	printf ("	So nguyen: ");
	scanf ("	%d",&a);
	
	printf ("\n	Kieu float: %d Byte \n", sizeof(float));
	printf ("	So thuc kieu float: ");
	scanf ("	%f",&b);
	
	printf ("\n	Kieu double: %d Byte \n", sizeof(double));
	printf ("	So thuc kieu double: ");
	scanf ("	%f",&c);
	
	printf ( "\n	Kieu char: %d Byte \n", sizeof(char));
	printf ("	Ky tu: ");
	scanf ("	%c, &d");
	
	printf ("\n	Kieu long int: %d Byte \n", sizeof(long int));
	
	printf("\n	Kieu long double: %d Byte \n", sizeof (long double));
	
	printf("/*========================================================*/");
	
	return 0;
}
