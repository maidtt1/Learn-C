#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sobuoihoc;
	int sobuoinghi;
	int diemlythuyet;
	int diemthuchanh;
	int baitaplon;
	int a;
	 
		 printf ("Nhap so buoi hoc \n");
		 scanf ("%d",&sobuoihoc);
		 
		 printf ("Nhap so buoi nghi\n");
		 scanf ("%d",&sobuoinghi);
	 
 	a = sobuoinghi*100/ sobuoihoc;
 	if(a>25){
		printf ("Hoc lai");
	}
	else{
		printf ("Nhap diem ly thuyet\n");
	 	scanf ("%d",&diemlythuyet);
	 	
	 	printf ("Nhap diem thuc hanh\n");
	 	scanf ("%d",&diemthuchanh);	
	 	
	 	printf("Nhap diem bai tap lon\n");
	 	scanf("%d",&baitaplon);
	 		
 		if(diemlythuyet > 40*20/100){
 			printf ("Ban do ly thuyet\n");
 		}
		else{
			printf("ban truot ly thuyet\n");
		}
 		
		if(diemthuchanh > 40*15/100){
 			printf ("Ban do thuc hanh\n");
 		}
		else{
			printf("ban truot thuc hanh\n");
		 }		
 	
 		 if(baitaplon > 40*10/100){
 			printf ("Ban do bai tap lon\n");
 		}
		else{
			printf("ban truot bai tap lon\n");
		 }
	 }
	return 0;
}
