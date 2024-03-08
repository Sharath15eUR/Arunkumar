// C program to remove the duplicate element from a sorted list  

#include <stdio.h> 

#include <stdlib.h> 

struct node{ 

    int data; 

    struct node *next; 

}; 

  

void insert(struct node **head, int value){ 

    struct node *new_node = (struct node*)(malloc(sizeof(struct node))); 

    new_node->data = value; 

    new_node->next = NULL; 

    struct node *last = *head; 

    if(*head == NULL){ 

        *head = new_node; 

        return; 

    } 

    while(last->next != NULL){ 

        last = last->next; 

    } 

    last->next = new_node; 

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

    printf("testing: \n"); 

    print(head); 

    printf("\n"); 

    struct node *first = head, *second = head->next; 

    while(second != NULL){ 

        while(second != NULL && first->data == second->data){ 

            second = second->next; 

        } 

        if(second == NULL){ 

            first->next = NULL; 

            break; 

        } 

        first->next = second; 

        first = first->next; 

        second = second->next; 

    } 

    printf("Linked List without duplicate elements: \n"); 

    print(head); 

}

     