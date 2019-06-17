#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
int element;
struct ListNode* next;
} Node;

int main (int argc, char** argv) {
Node* head = NULL;
Node *n1, *n2;
n1 = (Node*) malloc (sizeof(Node));
n1->element = 1;
n1->next = NULL;
head = n1;

n2 = (Node*) malloc sizeof(Node));
n2->element = 2;
n2->next = NULL;
head->next = n2;

return 0;
}
