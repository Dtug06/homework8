#include<stdio.h> 
int main (){
int array[8]={1,2,3,4,5,6,7,8};
int n,dung; 
dung =0; 
printf("nguoi dung nhap vao so muon kiem tra");
scanf("%d",&n) ;
for (int j=0;j<8;j++){
	if(array[j]==n){
		printf("vi tri phan tu trong mang la %d",j+1) ; 
		dung=1; 
		 	
} 

}
if (dung==0){
	printf("phan tu khong ton tai"); 
} 
return 0;
}
