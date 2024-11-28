#include <stdio.h>

int main() {
    int n, m;
	printf("Moi ban nhap vao so hang va so cot: ");
	scanf("%d %d", &n, &m);
	
	int arr[n][m];
	
	for(int i =0; i<n;i++){
		for(int j= 0; j<m; j++){
			printf(" Phan tu trong hang %d, cot %d", i+1, j+1);
			scanf("%d", &arr[i][j]);
	
		}
		printf("\n");
		
	}
	for(int i = 0; i<n;i++){
		for(int j= 0; j< m; j++){	
			printf(" %d", arr[i][j]);
		}
	printf("\n");
	}


	int i, j;
    printf("Nhap vi tri phan tu can kiem tra (i j): ");
    scanf("%d %d", &i, &j);  
    

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
            	printf("Phan tu [%d][%d] nam tren bien cua ma tran .\n", i + 1, j + 1);
                sum += arr[i][j];
            }
			else{
				printf("Phan tu [%d][%d] khong nam tren bien.\n", i + 1, j + 1);
			} 
        }
    }

    printf("Tong cac phan tu tren duong bien la : %d\n", sum);

    return 0;
}
