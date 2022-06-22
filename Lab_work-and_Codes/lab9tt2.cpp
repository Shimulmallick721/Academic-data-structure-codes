#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node* next;
   struct Node* prev;
};


void insert_front(struct Node** head, int new_data)
{

   struct Node* newNode = new Node;


   newNode->data = new_data;

   newNode->next = (*head);
   newNode->prev = NULL;

   if ((*head) != NULL)
   (*head)->prev = newNode;

   (*head) = newNode;
}
void insert_After(struct Node* prev_node, int new_data)
{
   if (prev_node == NULL) {
   cout<<"Previous node is required , it cannot be NULL";
   return;
}
   struct Node* newNode = new Node;

   newNode->data = new_data;

   newNode->next = prev_node->next;

   prev_node->next = newNode;

   newNode->prev = prev_node;
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}
void insert_end(struct Node** head, int new_data)
{
   struct Node* newNode = new Node;

   struct Node* last = *head;


   newNode->data = new_data;

   newNode->next = NULL;
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}

while (last->next != NULL)
last = last->next;


last->next = newNode;


newNode->prev = last;
return;
}

void displayList(struct Node* node) {
   struct Node* last;

   while (node != NULL) {
      cout<<node->data<<"-->";
      last = node;
      node = node->next;
   }
   if(node == NULL)
   cout<<"NULL";
   }

int main() {
   struct Node* head = NULL;

   insert_end(&head, 30);
   insert_front(&head, 25);
   insert_front(&head, 20);
   insert_front(&head, 10);
   insert_front(&head, 5);

   insert_end(&head, 35);


   insert_After(head->next, 15);

   cout<<"Doubly Linked List "<<endl;
   displayList(head);
   return 0;
}

