#include <stdio.h>  

#define SIZE 1000 

int queue[SIZE]; 

int front = 0; 

int rear = 0; 

  

void enqueue(){ 

    int data; 

    printf("Enter the data to be inserted: \n"); 

    scanf("%d", &data); 

    if(rear == SIZE-1) return; 

    queue[rear] = data; 

    rear += 1; 

} 

  

void dequeue(){ 

    if(front > rear) return; 

    front += 1; 

} 

  

void print(){ 

    for(int i = front; i<rear; i++){ 

        printf("%d ", queue[i]); 

    } 

    printf("\n"); 

} 

  

void isempty(){ 

    if(rear == 0 || front > rear){ 

        printf("The queue is empty!\n"); 

    }else{ 

        printf("The queue is not empty!\n"); 

    } 

} 

  

void counter(){ 

    printf("The number of elements in the queue is %d\n", rear - front); 

} 

  

  

  

int main(){ 

    int ch; 

    while(1){ 

        printf("1. Enqueue\n2. Dequeue\n3. Isempty\n4. Count the number of elements\n5. Display\n6.Exit\n"); 

        printf("Enter your choice: \n"); 

        scanf("%d", &ch); 

        if(ch == 1){ 

            enqueue(); 

        }else if(ch == 2){ 

            dequeue(); 

        }else if(ch == 3){ 

            isempty(); 

        }else if(ch == 4){ 

            counter(); 

        }else if(ch == 5){ 

            print(); 

        }else{ 

            break; 

        } 

         

    } 

} 