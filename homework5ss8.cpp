#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main (){
	srand(time(0));
	int array [2][8];
	int sum; 
	for (int i=0;i<2;i++){
		for(int j=0;j<8;j++){
			array[i][j]=rand()%100; 
			printf("%d ",array[i][j]) ;
		} 
		printf("\n") ;
	}
	for (int i=0;i<2;i++){
		for(int j=0;j<8;j++) {
			sum+=array[i][j] ;
		}
	} 
	printf("%d",sum) ;
	return 0; 
	 
} 

