// Program to fetch the value of the array element arr[i][j][k][2] using pointers 

#include <stdio.h> 

  

  

int main(){ 

    int mat[4][4][4][4]; 

    for(int i = 0; i<4; i++){ 

        for(int j = 0; j<4; j++){ 

            for(int k = 0; k<4; k++){ 

                for(int l = 0; l < 4; l++){ 

                    *(*(*(*(mat + i) + j ) + k) + l) = i+j+k+l; 

                } 

            } 

        } 

    } 

    int i = 2, j= 3, k = 1; 

    printf("Answer: %d\n", *(*(*(*(mat + i) + j) + k) + 2)); 

     

     

  

} 