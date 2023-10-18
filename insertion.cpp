#include <iostream>
#define Max 50

using namespace std;

void insertInarray(int a[], int &n, int item, int pos)
{
    if (pos < 0 || pos > n)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        for (int i = n; i >= pos; --i)
        {
            a[i] = a[i - 1];
        }
        a[pos - 1] = item;
        n++;
    }
}

int main()
{
    int a[Max];
    int n, item, pos;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n > Max)
    {
        cout << "Array size exceeds the maximum limit." << endl;
        return 1; 
    }

    cout << "Enter the element to insert: ";
    cin >> item;

    cout << "Enter the position to insert the element: ";
    cin >> pos;
  

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position" << endl;
        return 1; 
    }


    insertInarray(a, n, item, pos);

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
