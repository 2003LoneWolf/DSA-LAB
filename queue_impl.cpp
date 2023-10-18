#include <iostream>
using namespace std;

void enqueue(int queue[],int &front,int &rear)
{
    int item;
    cin >> item;

    if(rear==5-1){
        cout<<"Queue is overflow"<<endl;
    }
    else if(front== -1){
        front = 0;
        rear++;
        queue[rear] = item;
    }
    else{
        rear++;
        queue[rear] = item;
    }
    
}

void display(int queue[],int front,int rear){

    cout<<"Elements in Queue: "<<endl;
    for (int i = front; i <= rear; i++)
    {
    cout<<queue[i]<<" "<<endl;
    }
}    
int main()
{

    int queue[5];
    int front = -1;
    int rear = -1;
    cout<<"Enter value to insert: "<<endl;

    enqueue(queue,front,rear);
    enqueue(queue,front,rear);
    enqueue(queue,front,rear);
    enqueue(queue,front,rear);
    display(queue,front,rear);
    return 0;
}