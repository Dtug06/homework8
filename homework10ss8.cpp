#include<stdio.h> 

int main() {
    int array[] = {1, 2, 3, 2, 4, 2, 5, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int max = 0, count = 0;
    int numberMax[10];
    int numMaxIndex = 0;

    for (int i = 0; i < size; i++) {
        count = 0;
        for (int j = 0; j < size; j++) {
            if (array[j] == array[i]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            numMaxIndex = 0;
            numberMax[numMaxIndex++] = array[i];
        } else if (count == max) {
            int alreadyExists = 0;
            for (int k = 0; k < numMaxIndex; k++) {
                if (numberMax[k] == array[i]) {
                    alreadyExists = 1;
                    break;
                }
            }
            if (!alreadyExists) {
                numberMax[numMaxIndex++] = array[i];
            }
        }
    }
    
    printf("Cac so xuat hien nhieu nhat voi %d lan xuat hien: ", max);
    for (int i = 0; i < numMaxIndex; i++) {
        printf("%d ", numberMax[i]);
    }
    printf("\n");
    
    return 0;
}

