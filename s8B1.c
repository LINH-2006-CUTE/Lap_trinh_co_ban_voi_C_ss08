#include<stdio.h>

int main(){
	int n; 
	printf("Nhap so luong phan tu cua mang\n");
	scanf("%d",&n) ;
	
	int arr[n];

	for(int i =0; i< n; i++){
			printf(" Phan tu cua mang la: [%d]",i);
			scanf("%d", &arr[i]); 
		
	} 

	printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    
    
    printf("\n");
    
 return 0;   
}
