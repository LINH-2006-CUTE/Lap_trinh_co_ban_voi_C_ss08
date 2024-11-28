#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};

	
	int guess;
	printf("Ban hay nhap thu 1 phan tu trong mang: ");
	scanf("%d",&guess);
	
	int check =0 ;
	for(int i =0; i<5; i++){
		
		if(arr[i] == guess){
		printf(" Vi tri phan tu trong mang la : %d\n ", i);
		check = 1;  
            break;  
        }
    }

    	if (check == 0) {
        printf("Phan tu do khong co trong mang.\n");
    }
	
	
	return 0; 
} 
