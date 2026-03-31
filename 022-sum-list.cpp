#include "iostream"

class Node {
  public:
    int v;
    Node *next;
    Node(int vv) {
      v = vv;
      next = nullptr;
    }
};

int iteractive(Node *head)
{
  int total = 0;
  Node *curr = head;
  
  while (curr) {
    total += curr->v;
    curr = curr->next;
  }
  return total;
}

int recursive(Node *head) {
  if (!head) return 0;
  return head->v + recursive(head->next);
}

int sumList(Node* head) {
  // return iteractive(head);
  return recursive(head);
}


void run() {
  Node a(2);
  Node b(8);
  Node c(3);
  Node d(-1);
  Node e(7);
  
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;

  std::cout << sumList(&a); // 19
}
