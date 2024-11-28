#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc ma tran vuong : ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Nhap cac phan tu cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu [%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        
        
    }

    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
    }

    printf("\n");

    return 0;
}

