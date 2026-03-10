#include <string>
#include <iostream>

class Node {
  public:
    std::string v;
    Node *next;
  
    Node(std::string vv) {
    v = vv;
    next = nullptr;
  }
};

void  recursiveListPrinting(Node *head) {
  if (!head) return;
  std::cout << head->v << std::endl;
  recursiveListPrinting(head->next);
}

void  iteractiveListPrinting(Node *head) {
  while (head) {
    std::cout << head->v << std::endl;
    head = head->next;
  }
}

void run() {
  Node a("A");
  Node b("B");
  Node c("C");
  
  a.next = &b;
  b.next = &c;
  
  iteractiveListPrinting(&a);
  std::cout << std::endl;
  recursiveListPrinting(&a);
}
