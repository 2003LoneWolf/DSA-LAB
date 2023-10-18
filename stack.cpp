#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(7);
    s.push(4);
    s.push(5);
    s.pop();
    s.pop();
    cout<<"Show size of stack: " << s.size()<< endl;
    cout<<"Show top of stack: " << s.top() << endl;
    if (s.empty())
    {
        cout << "Stack is empty!" << endl;
    }
    cout << "Stack is not empty!" << endl;

    return 0;
}