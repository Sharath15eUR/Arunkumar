// C program to rotate a doubly linked list by N nodes  

#include <stdio.h> 

#include <stdlib.h> 

struct node{ 

    int data; 

    struct node *next, *prev; 

}; 

  

void insert(struct node **head, int value){ 

    struct node *new_node = (struct node*)(malloc(sizeof(struct node))); 

    new_node->data = value; 

    new_node->next = NULL, new_node->prev = NULL; 

    struct node *last = *head; 

    if(*head == NULL){ 

        *head = new_node; 

        return; 

    } 

    while(last->next != NULL){ 

        last = last->next; 

    } 

    last->next = new_node; 

    new_node->prev = last; 

} 

  

void print(struct node *head){ 

    struct node *tmp = head; 

    while(tmp != NULL){ 

        printf("%d ", tmp->data); 

        tmp = tmp->next; 

    } 

} 

  

int main(){ 

    int n; 

    printf("Enter the number of elements in the linked list: \n"); 

    scanf("%d", &n); 

    printf("Enter the elements in the linked list\n"); 

    struct node *head; 

    for(int i = 0; i<n; i++){ 

        int tmp; 

        scanf("%d", &tmp); 

        insert(&head, tmp); 

    } 

    int N; 

    printf("Enter the value to roate N times: \n"); 

    scanf("%d",&N); 

    printf("testing: \n"); 

    print(head); 

    printf("\n"); 

     

    for(int i = 0; i<N; i++){ 

        struct node *f = head, *l = head; 

        while(l->next != NULL){ 

            l = l->next; 

        } 

        struct node *sec = f->next; 

        sec->prev = NULL; 

        f->next = NULL; 

        l->next = f; 

        f->prev = l; 

     

        f = sec; 

     

        head = f; 

    } 

    printf("Doubly Linked List after %d rotation: \n", N); 

    print(head); 

  

     

} 