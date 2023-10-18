#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if (size-top>1)
        {
            arr[top] = element;
        }else{

        cout<<"Stack overflow!"<<endl;
        }
        

    }

    void pop(){
        if (top>=0)
        {
            top--; 
        }
        else{

        cout<<"Stack underflow!"<<endl;
        }
        

    }

    int peak(){
        if (top>=0)
        {        
        return arr[top];
        }
        cout<<"Stack is empty!"<<endl;
    }

    bool isEmpty(){
        if (top==-1)
        {
            return true;
        }
        return false;
        

    }

};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.peak();
    cout<<st.isEmpty()<<endl;

}