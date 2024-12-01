#include<stdio.h>
int main (){
	int n;
	printf("moi nhap so hang va cot muon hien thi ");
	scanf("%d",&n) ;
	int array [n][n];
	printf("moi nhap cac phan tu") ;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&array[i][j]); 
		} 
	} 
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",array[i][j]); 
		}
		printf("\n"); 
	} 
	
	 
	return 0; 
} 
