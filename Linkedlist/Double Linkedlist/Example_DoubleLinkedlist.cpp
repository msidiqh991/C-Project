#include <iostream>

class Node {
 public:
  int data;
  Node* next;
  Node* prev;

  Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

class DoubleLinkedList {
 public:
  Node* head;
  Node* tail;

  DoubleLinkedList() : head(nullptr), tail(nullptr) {}

  void insertAtFront(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    } else {
      head->prev = newNode;
      newNode->next = head;
      head = newNode;
    }
  }

  void insertAtBack(int data) {
    Node* newNode = new Node(data);
    if (tail == nullptr) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  void deleteFromFront() {
    if (head == nullptr) {
      return;
    }
    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
      head->prev = nullptr;
    }
    delete temp;
  }

  void deleteFromBack() {
    if (tail == nullptr) {
      return;
    }
    Node* temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
      tail->next = nullptr;
    }
    delete temp;
  }

  void printList() {
    Node* temp = head;
    while (temp != nullptr) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
};

int main() {
  DoubleLinkedList list;

  list.insertAtFront(1);
  list.insertAtFront(2);
  list.insertAtBack(3);
  list.insertAtBack(4);

  list.printList();  // Output: 2 1 3 4

  list.deleteFromFront();
  list.deleteFromBack();

  list.printList();  // Output: 1 3

  return 0;
}

