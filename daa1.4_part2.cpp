// Doubly linked list

#include <iostream>
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};
class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList() : head(nullptr) {}
    void insertAtStart(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void deleteAtStart()
    {
        if (head == nullptr)
        {
            std::cout << "List is already empty." << std::endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        delete temp;
    }
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};
int main()
{
    DoublyLinkedList list;
    list.insertAtStart(3);
    list.insertAtStart(5);
    list.insertAtStart(7);
    std::cout << "Doubly Linked List after insertion: ";
    list.display();
    list.deleteAtStart();
    std::cout << "Doubly Linked List after deletion: ";
    list.display();
    return 0;
}