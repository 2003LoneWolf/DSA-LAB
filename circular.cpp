#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int s)
    {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enQueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear = (rear + 1) % size;
            arr[rear] = value;
            cout << "Inserted " << value << endl;
        }
    }

    void deQueue()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int value = arr[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
            cout << "Deleted " << value << endl;
        }
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Elements in Circular Queue are: ";
            if (rear >= front)
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            else
            {
                for (int i = front; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
                for (int i = 0; i <= rear; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    CircularQueue q(5);

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);

    q.display();


    return 0;
}
