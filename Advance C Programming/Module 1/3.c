// Program to swap two numbers using function pointers 

#include <stdio.h> 

  

void swap(int *a, int *b){ 

    int tmp = *a; 

    *a = *b; 

    *b = tmp; 

} 

  

int main(){ 

    int a,b; 

    printf("Enter two numbers: \n"); 

    scanf("%d%d", &a, &b); 

    printf("Before swapping: \n"); 

    printf("a = %d, b = %d\n", a,b); 

    void (*func_ptr)(int *, int *) = &swap; 

    (*func_ptr)(&a, &b); 

    printf("After swapping: \n"); 

    printf("a = %d, b = %d\n", a,b); 

     

} 