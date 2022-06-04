#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C;
	float F;
	
	printf ("Nhap vao do C\n");
	scanf ("%f",&C);
	
	F = 32 + C *9/5;
	
	printf ("Do F tuong ung la %f",F);
	return 0;
}
