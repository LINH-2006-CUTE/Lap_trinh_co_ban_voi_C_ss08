#include<stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 2, 3, 5, 1, 3, 2, 2, 3};
    int maxcount = 0;   
    int result[100] = {0};  
    int index = 0;  
    int lengharr = sizeof(arr) / sizeof(arr[0]);

   
    for (int i = 0; i < lengharr; i++) {
        int count = 0;
        for (int j = 0; j < lengharr; j++) {
            if (arr[i] == arr[j]) {
                count++; 
            }
        }
        
       
        if (count > maxcount) {
            maxcount = count;
        }
    }

   
    for (int i = 0; i < lengharr; i++) {
        int count = 0;
        for (int j = 0; j < lengharr; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
       
        if (count == maxcount) {
            int flag = 0;
           
            for (int k = 0; k < index; k++) {
                if (arr[i] == result[k]) {
                    flag = 1;
                    break;
                }
            }
            
            if (flag == 0) {
                result[index] = arr[i];
                index++;
            }
        }
    }
    printf("Cac phan tu xuat hien voi so lan %d la:\n", maxcount);
    for (int i = 0; i < index; i++) {
        printf("Phan tu %d xuat hien %d lan\n", result[i], maxcount);
    }

    return 0;
}

