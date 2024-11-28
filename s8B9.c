#include<stdio.h>

int main (){
	int arr[] = {1,5,2,3,2,3,5,1,2,2};
	int maxcount;
	int maxitem;
	int lengharr =sizeof(arr)/sizeof(arr[0]);
	 
		for (int i =0; i<lengharr; i++ ){
			int count =0; 
			for( int j =0; j<lengharr; j++){
				
				if( arr[i]== arr[j]){
					count++;	
				} 
			}
			
			if(count > maxcount){
				maxcount = count;	
				maxitem = arr[i];	
				} 	
		} 
		
	 printf("Phan tu %d xuat hien so lan nhieu nhat trong mang la %d", maxitem, maxcount);
	
	
	
	return 0; 
} 
