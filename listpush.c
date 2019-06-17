typedef struct ListNode{
int element;
struct ListNode* next;
} Node;

Node* Push(Node* hear, int e){
Node* n = (Node*) malloc (sizeof(Node));
assert (n!= NULL);
n->element = e;
n->next = head;
return n;
}


