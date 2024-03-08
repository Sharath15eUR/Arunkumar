// Program to reverse the string using stack  

  

#include <stdio.h> 

#define SIZE 1000 

char stack[SIZE]; 

int last = 0; 

  

void push(char c){ 

    if(last == SIZE - 1) return; 

    stack[last] = c; 

    last++; 

} 

  

char pop(){ 

    char c = stack[last]; 

    last--; 

    return c; 

} 

  

int main(){ 

    printf("Enter the string to be reversed: \n"); 

    char s[1000]; 

    scanf("%s", s); 

    printf("Original String: \n"); 

    puts(s); 

    printf("\n"); 

    int i = 0;  

    while(s[i] != '\0'){ 

        push(s[i]); 

        i++; 

    } 

    printf("Reversed string: \n"); 

    while(last >= 0){ 

        char c = pop(); 

        printf("%c", c); 

    } 

} 

 