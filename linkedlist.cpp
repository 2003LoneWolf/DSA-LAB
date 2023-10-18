#include <iostream>
#include <cstdlib> // Include cstdlib for malloc
using namespace std;

struct node
{
    int value;
    struct node *next;
};

typedef struct node node;

node *head = NULL;

void InsertAtEndSLL(int ele)
{
    node *temp = (node *)malloc(sizeof(node));

    if (temp == NULL)
    {
        exit(1);
    }
    temp->value = ele;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele; 
        InsertAtEndSLL(ele);
    }

    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }

    return 0;
}
