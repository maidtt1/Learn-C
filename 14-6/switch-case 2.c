#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin, cardid, thaotac;
	
	printf ("Nhap vao ma pin");
	scanf ("%d",&pin);
	
	printf ("Nhap vao cardid");
	scanf ("%d",&cardid);
	
	if(cardid == 123 && pin == 456){
		printf ("Menu \n 1.Rut tien \n 2.Chuyen khoan \n 3.Xem so du \n 4.Thoat");
		
		printf ("Thuc hien thao tac");
		scanf ("%d", &thaotac);
		
		switch (thaotac){
			case 1:
			printf ("Moi ban rut tien");
			break;
			
			case 2:
			printf ("Moi ban chuyen khoan");
			break;
			
			case 3:
			printf ("Moi ban xem so du");
			break;
			
			case 4:
			printf ("Thoat");
			break;
			
			default:
			break;	
		}	
	}	
		return 0;
}
