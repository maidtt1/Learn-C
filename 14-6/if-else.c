#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin;
	int cardid;
	int thaotac;
	
	printf ("Nhap vao so pin");
	scanf ("%d", &pin);
	
	printf ("Nhap vao so cardid");
	scanf ("%d", &cardid);
	
	if (pin==123 && cardid == 456){
		printf ("Menu : 1.Rut tien \n 2.Chuyen khoan \n 3.Xem so du \n 4.Exit \n");
		scanf ("%d",&thaotac);
		if (thaotac==1){
			printf ("Moi ban rut tien");
		}
		else if (thaotac ==2){
			printf ("Moi ban chuyen khoan");
		}
		else if (thaotac ==3){
			printf ("Moi ban xem so du");
		}	
		else if (thaotac ==4){
			printf ("Moi ban thoat ra");
		}	
	}
	else {
		printf ("Nhap sai");
	}	
		
	return 0;
}
