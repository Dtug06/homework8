#include<stdio.h> 
int main (){
	int array [5][5];
	int duongCheo=0; 
	for (int i=0;i<5;i++){
		for(int j=0 ;j<5;j++){
			printf("moi nhap");
			scanf("%d",&array[i][j]); 
		}
	}
	duongCheo=array[0][0]+array[1][1] +array[2][2] +array[3][3] +array[4][4]  ;
	printf("duong cheo co tong la %d\n",duongCheo);
	return 0; 
	 
} 
