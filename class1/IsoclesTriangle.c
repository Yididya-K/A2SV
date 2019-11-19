
#include <stdio.h>

void triangle(int rows){
	   int k=0,space;
           for(int j=1;j<=rows;j++,k=0){
                for(space=1;space<=rows-j;++space){
                        printf(" ");
                }
                while(k != 2*j-1){
			printf("*");
			++k;
		}
		printf("\n");
	}
	
}

int main(){
        int rows;
        printf("Number of Rows: \n");
        scanf("%d",&rows);
        triangle(rows);
        return 1; 
}       











