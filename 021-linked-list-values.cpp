#include <vector>
#include <string>
#include <iostream>

class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};

// iteractive way
// std::vector<std::string> linkedListValues(Node* head) {
//   std::vector<std::string> vec;
//   while (head) {
//     vec.push_back(head->val);
//     head = head->next;
//   }
//   return vec;
// }

// recursive way
void  linkedListValues(Node *head, std::vector<std::string> &vec) {
  if (!head) return;
  vec.push_back(head->val);
  linkedListValues(head->next, vec);
}

std::vector<std::string> linkedListValues(Node* head) {
  std::vector<std::string> vec;
  linkedListValues(head, vec);
  return vec;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  
  a.next = &b;
  b.next = &c;
  c.next = &d;

  bool afteBegin = false;
  std::cout << "[";
  for (auto v: linkedListValues(&a)) {
    if (afteBegin)
      std::cout << ", ";
    std::cout << v;
    afteBegin = true;
  }
  std::cout << "]";
}
