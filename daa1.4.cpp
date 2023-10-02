// Singly Linked List

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}
    
    void insertAtStart(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void deleteAtStart()
    {
        if (head == nullptr)
        {
            cout << "List is already empty." << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    ~LinkedList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main()
{
    LinkedList list;
    list.insertAtStart(3);
    list.insertAtStart(5);
    list.insertAtStart(7);

    cout << "Linked List after insertion: ";
    list.display();

    list.deleteAtStart();
    cout << "Linked List after deletion: ";
    list.display();

    return 0;
}
