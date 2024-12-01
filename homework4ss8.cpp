#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int main (){
	srand(time(0));
	int array[2][8];
	int temp; 
	for (int i=0;i<2;i++){
		for(int j=0;j<8;j++){
			array[i][j]=rand()%100; 
		} 
	} 
	for (int i=0;i<2;i++){
		for(int j=0;j<8;j++){
			printf("%d ",array[i][j]); 
		} 
		printf("\n"); 
	} 
	 
	for (int i=0;i<2;i++){
		for(int j=0;j<8-1;j++){
			for(int k=0;k<8-j-1;k++) {
				if (array[i][j]>array[i][j+1]){
				temp=array[i][j];
				array[i][j]=array[i][j+1];
				array[i][j+1]=temp; 
			} 
			
			}
		} 
	
} 
if (array [1][7]>array[0][7]){
	printf("%d",array[1][7]) ;
} else 
printf("%d",array[0][7]); 
return 0;
}
