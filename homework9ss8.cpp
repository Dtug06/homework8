#include<stdio.h> 
int main (){
 int array[] = {1, 2, 3, 2, 4, 2, 5, 3, 2, 1};	
	int size = sizeof(array) / sizeof(array[0]);
	int max=0,count=0;
	int numberMax; 
	for(int i=0;i<size;i++) {
		count =0; 
		for(int j=0;j<size;j++) {
		if (array[j]==array[i])	{
			count++; 
		}
	}
		if (count >max) {
			max=count;
			numberMax=array[i] ;
		}
		
		
	}
	printf("so xuat hien nhieu nhat la %d voi %d lan xuat hien ",numberMax,max) ;
	return 0; 
} 

