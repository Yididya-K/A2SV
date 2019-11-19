#include <stdio.h>


void triangle(int rows){
	for(int i=0;i<rows;i++){
                for(int j=0;j<=i;j++){
                        printf("*");
                }
                printf("\n");
        }
}
	
int main(){
	int rows;
	printf("Number of Rows: \n");
	scanf("%d",&rows);
	triangle(rows);
	return(1); 
}	
