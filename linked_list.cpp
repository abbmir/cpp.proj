#include <stdio.h>
#include <cstdlib>

//          ____________     _____________     _____________     ____________
// head -->| val |next -|-->| val |next -|-->| val |next -|-->| val |next -|-> NULL
//         |_____|______|   |_____|______|   |_____|______|   |_____|______|


// Advantages:  Arrays are static datastructure, where as linked-list is a dynamic datastructure
//              
// Disadvantages: Does not allow direct access to individual elements
//                Uses more memory in comparison to array
//

// Variables
typedef struct node {
  int value;
  struct node *next;
} node_t;

// Globals (not required, though).
node_t *head, *tail/*, *temp*/;

// Function to add new nodes to the linked list
void add(int value) {
  //temp = (node_t *) malloc(sizeof(struct node));
  node_t *temp=new node_t;
  /*
  node_t *head, *tail;
  */
  temp->next=NULL; //(node_t *)0;
  temp->value=value;
  if(head==NULL/*(node_t *)0*/){
    head=temp;
    tail=temp;
  }
  else{
    tail->next=temp;
    tail=temp;
  }
}

// Function to print the linked list.
void print_list() {
  node_t *temp=new node_t;

  printf("\n\n");
  for(temp=head; temp!=NULL/*(node_t *)0*/; temp=temp->next) {
    printf("[%d]->",(temp->value));
  }
  printf("[NULL]\n\n");
}

// Function to reverse the linked list.
//node_t * reverse(node_t * root) {
//  /*
//  node_t *head=new node_t;
//  */
//  if(root->next!=NULL){
//      reverse(root->next);
//      root->next->next=root;
//      return(root);
//
//  }
//  else head=root;
//}

void reverse(node_t** root) {

    node_t* prev = NULL;
    node_t* current = *root;
    node_t* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next; // Node with 20
        //printf("[%d]->",(next->value));
        //printf("[XXXXNULL]\n\n");

        // Reverse current node's pointer
        current->next = prev; // NULL, 
        //printf("[%d]->",(current->next->value));
 
        // Move pointers one position ahead.
        prev = current; // Node with 10, 20, 30, 40
        //printf("[%d]->",(prev->value));
        //printf("[XNULL]\n\n");
        current = next; // Node with 20, 30, 40, NULL
        //printf("[%d]->",(current->value));
        //printf("[XXNULL]\n\n");
    }
    *root = prev;
}

//void deleteN(node_t *head, int N){
//  node_t *temp = head;
//  node_t *prev = head;
//
//  for (int i=0; i < N; i++){
//    if (i==0 && N ==1){
//      print_list();
//      printf("[deleteN]\n\n");
//      head = head -> next;
//      printf("[%d]->",(head->value));
//      printf("[%d]->",(temp->value));
//      free(temp);
//    }
//  }
//}

void deleteN(node_t** head, int N)
{
    node_t* temp;
    node_t* prev;
    temp = *head;
    prev = *head;
    for (int i = 0; i < N; i++) {
        // only for N=1
        if (i == 0 && N == 1) {
            *head = (*head)->next;
            free(temp);
        }
        // N = 2, 3, 4, 5
        else {
            if (i == N - 1 && temp) {
                prev->next = temp->next;
                free(temp);
            }
            else {
                prev = temp;
 
                // Position was greater than
                // number of nodes in the list
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
}

/*
// Functions
void add(int value);
node_t *reverse(node_t*);
void print_list();
*/

// The main() function
int main() {

  node_t *temp=new node_t;
  //head=NULL/*(node_t *)0*/;
  // Construct the linked list.
  add(10);
  print_list();
  add(20);
  print_list();
  add(30);
  print_list();
  add(40);
  print_list();
  add(50);
  print_list();
  
  deleteN(&head, 5);
  
  //if(head != NULL /*(node_t *)0*/){
  //  temp = reverse(head);
  //  temp->next = NULL /*(node_t *)0*/;
  //}
  
  //Print it
  print_list();

  reverse(&head);

  print_list();
  
  return(0);
}