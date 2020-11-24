#include <stdio.h>
#include <stdlib.h>

int main(){

int counter, pil, ang;
char in = 'y';

	menu:
		printf("\n\n\n=====MENU=====\n\n");
		printf("1. Counted Loop\n");
		printf("2. Uncounted Loop\n");
		printf("3. Exit\n\n");
		printf("====================\n");
		printf("Masukan Pilihan [1-3] : ");
		scanf("%i", &pil);

switch(pil){
	case 1:
		system("clear");
		printf("\n=====================\n");
		printf("=====Counted Loop======\n");
			for(int counter = 0; counter < 10; counter++){
		
        	printf("Perulangan ke-%i\n", counter);
    }
	goto menu;
	
	case 2:
		system("clear");
		do{
			printf("Masukin Angka : ");
			scanf("%d", &ang);
		}while(ang>0);
			printf("\nCape kan ? Udahan dong");	
	goto menu;
	
	case 3:
		system("clear");
		printf("\n\nUdahan, cape ngetiknya. Makasih ya :) \n");
		printf("\nMade With Love, RF. Gundar TI 2018\n");
		break;
	default:
		printf("Ada Razia didepan, Puter Balik dah \n");
		goto menu;
	}
}
