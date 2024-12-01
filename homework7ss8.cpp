#include<stdio.h> 

int main() {
    int array[5][5];
    int duongCheo = 0;
    
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Nhap phan tu array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    
    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i][i]);
        duongCheo += array[i][i];
    }
    
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", duongCheo);
    return 0;
}

