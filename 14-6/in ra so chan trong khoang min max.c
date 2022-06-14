#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, min, max;
	
	printf ("Nhap so lon nhat");
	scanf ("%d",&max);
	
	printf ("Nhap so nho nhat");
	scanf ("%d", &min);
	
		for (a = min; a <= max; a++){
		if(a %2 ==0){
			printf ("%d \n",a);
		}	
	}	
	return 0;
}
