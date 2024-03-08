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

    struct node *last_before = NULL; 

    while(last != NULL && last->data < value){ 

        last_before = last; 

        last = last->next; 

    } 

    new_node->prev = last_before; 

    new_node->next = last; 

    if(last_before != NULL) last_before->next = new_node; 

    else *head = new_node; 

    if(last != NULL) last->prev = new_node; 

  

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

    printf("Doubly linked list in sorted order: \n"); 

    print(head); 

} 