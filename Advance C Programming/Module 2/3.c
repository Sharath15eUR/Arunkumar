// Program to sort the elements in the  queue  

#include <stdio.h>  

#define SIZE 1000 

int queue[SIZE]; 

int front = 0; 

int rear = 0; 

  

void enqueue(int data){ 

    if(rear == SIZE-1) return; 

    queue[rear] = data; 

    rear += 1; 

} 

  

void dequeue(int data){ 

    if(front > rear) return; 

    front += 1; 

} 

  

void print(){ 

    for(int i = 0; i<rear; i++){ 

        printf("%d ", queue[i]); 

    } 

    printf("\n"); 

} 

  

int main(){ 

    int n; 

    printf("Enter the number of elements in the queue: \n"); 

    scanf("%d",&n); 

    printf("Enter the elements in the queue: \n"); 

    for(int i = 0; i<n; i++){ 

        int tmp; 

        scanf("%d", &tmp); 

        enqueue(tmp); 

    } 

    printf("testing: \n"); 

    print(); 

    for(int i = front; i<rear; i++){ 

        int mn = queue[i]; 

        int mn_inx = i; 

        for(int j = i+1; j<rear; j++){ 

            if(queue[j] < mn){ 

                mn = queue[j]; 

                mn_inx = j; 

            } 

        } 

        int tmp = queue[mn_inx]; 

        queue[mn_inx] = queue[i]; 

        queue[i] = tmp; 

    } 

    printf("Sorted queue: \n"); 

    print(); 

     

     

} 

 