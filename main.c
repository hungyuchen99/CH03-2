#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num =1;
	
	int a=0;
	char space=32;
	while(num<6){
		a=0;
		while(a<num){  
		
            printf("*");
            a++;
	    }
		
		
		printf("\n");
		num++;
}
    num=1;
    while(num<5){
		a=5;
		while(a>num){  
		
            printf("*");
            a--;
	    }
		
		
		printf("\n");
		num++;
}
	return 0;

}

