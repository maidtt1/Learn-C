#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r;
	float a;
	float m;
	float n;
	float C1;
	float S1;
	float C2;
	float S2;
	float C3;
	float S3;
	
	printf ("Nhap ban kinh duong tron ");
	scanf ("%f",&r);
	
	printf ("Nhap canh hinh vuong ");
	scanf ("%f",&a);
	
	printf ("Nhap chieu dai hinh chu nhat ");
	scanf ("%f", &m);
	
	printf ("Nhap chieu rong hinh chu nhat ");
	scanf ("%f", &n);
	
	printf ("Chu vi hinh tron la %f \n", C1 = 2 * 3.14 * r);
	printf ("Dien tich hinh tron la %f \n", S1 = 3.14 * r * r );
	
	printf ("Chu vi hinh vuong la %f \n", C2 = 4 * a);
	printf ("Dien tich hinh vuong la %f \n", S2 = a *a);
	
	printf ("Chu vi hinh chu nhat la %f \n", C3 = (m + n) * 2);
	printf ("Dien tich hinh chu nhat la %f \n", S3 = m * n);
	
	return 0;
}
