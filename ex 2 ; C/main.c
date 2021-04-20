#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//tableaux de multiplication
int main(int argc, char *argv[]) {
	int a , b;
	for	(a=0;a<=20;a++)	{
		printf(" Table de : %d \n",a);
		for (b=1;b<=10;b++){
			printf(" %d *",a);
			printf (" %d",b);
			printf(" = %d \n",a*b);
		}

	}
	
	
	return 0;
}