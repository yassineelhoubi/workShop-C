#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// affichage de nombre plus grand
int main(int argc, char *argv[]) {
	int x,y;
	printf("donner le 1er entier : ");
	scanf("%d",&x);
	printf("donner le 2eme entier : ");
	scanf("%d",&y);
	if (x>y){
	printf("le plus grand est : %d",x);
	}
	else if (x<y){
		printf("le plus grand est : %d",y);
	}
	else 
	{
		printf("les deux sont egaux");
	}
	return 0;
}