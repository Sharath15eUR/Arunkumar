// Program to multiply two matrices using pointers 

  

#include <stdio.h> 

  

int main(){ 

    int mat1[4][4], mat2[4][4]; 

    int res[4][4]; 

    for(int i = 0; i<4; i++){ 

        for(int j = 0; j<4; j++){ 

            *(*(mat1 + i) + j) = i+j; 

            *(*(mat2 + i) + j) = i-j; 

        } 

    } 

    for(int i = 0; i<4; i++){ 

        for(int j = 0; j<4; j++){ 

            *(*(res+i)+j) = 0; 

            for(int k = 0; k<4; k++){ 

                *(*(res+i)+j) += (*(*(mat1 + k) + i) + (*(*(mat2 + j) + k))); 

            } 

        } 

    } 

    printf("Multiplication of two matrices: \n"); 

    for(int i = 0; i<4; i++){ 

        for(int j = 0; j<4; j++){ 

            printf("%d ", *(*(res + i) + j)); 

        } 

        printf("\n"); 

    } 

} 

 