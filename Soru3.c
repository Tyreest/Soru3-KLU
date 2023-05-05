#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[100], arr2[100];
    int size1, size2;

    printf("Birinci dizinin boyutunu girin: ");
    scanf("%d", &size1);
    printf("Birinci dizinin elemanlarini girin: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Ikinci dizinin boyutunu girin: ");
    scanf("%d", &size2);
    printf("Ikinci dizinin elemanlarini girin: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    int newSize = size1 + size2;
    int* mergedArr = (int*)malloc(newSize * sizeof(int));  

    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++) {
        mergedArr[size1 + j] = arr2[j];
    }

    
    printf("Birlesik dizi: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    free(mergedArr);  

    return 0;
}
