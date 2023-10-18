#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail,int data){
   Node* temp = new Node(data);
   tail->next=temp;
   tail=temp;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    // insertAtHead(head, 20);
    // print(head);
    // insertAtHead(head, 30);
    // print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,30);
    print(head);
    insertAtTail(tail,40);
    print(head);
}