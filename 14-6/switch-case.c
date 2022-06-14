#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf ("Nhap vao chu thuong trong bang chu cai (a -z):)");
	scanf ("%c", &ch);
	
	if (ch < 'a'|| ch > 'z'){
		printf ("Ky tu khong thuoc bang chu cai");
		}
	else 
		switch (ch)
		{
			case 'a': 
				printf("Ky tu la chu a");
				break;
			case 'e':
				printf ("Ky tu la chu e");
				break;
			case 'i':
				printf ("Ky tu la chu i");
				break;
			case 'o':
			case 'u':
				printf ("\n Ky tu la nguyen am");
				break;
			case 'z':
				printf ("\n Ky tu cuoi bang chu cai (z)");
				break;
			default:
				printf ("\n Ky tu la phu am");
				break;			
		}		
	return 0;
}
