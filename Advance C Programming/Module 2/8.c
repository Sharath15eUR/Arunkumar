// Program to check if one array is a subset of another array: 

#include <stdio.h>

int main(){
    int n,m;
    printf("Enter the number of elements in the first array: \n");
    scanf("%d", &n);
    printf("Enter the elements in the array: \n");
    int arr1[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: \n");
    scanf("%d", &m);
    printf("Enter the elements in the second array: \n");
    int arr2[m];
    for(int j = 0; j<m; j++){
        scanf("%d", &arr2[j]);
    }
    for(int i = 0; i<m; i++){
        int ok = 0;
        for(int j = 0; j<n; j++){
            if(arr1[j] == arr2[i]){
                ok = 1;
                break;
            }
        }
        if(!ok){
            printf("arr2 is not a subset of arr1\n");
            return 0;
        }
    }
    printf("Arr2 is a subset of Arr1\n");
}