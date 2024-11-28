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
	
	int max = 0; 
	for(int i = 0; i < n; i++){
		if(arr[i] > max){
				max = arr[i]; 
				} 
	} 
	 printf ( " Phan tu lon nhat la : %d\n", max);
	
	return 0;	
}
