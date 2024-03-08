// Program to count the number of bitset in a number 

#include <stdio.h> 

  

  

int main(){ 

    int n; 

    printf("Enter a number: \n"); 

    scanf("%d", &n); 

    int cnt = 0; 

    while(n > 0){ 

        printf("n: %d\n", n); 

        cnt += (n & 1); 

        n >>= 1; 

    } 

    printf("The number of bitset in a number is %d\n", cnt); 

     

  

} 