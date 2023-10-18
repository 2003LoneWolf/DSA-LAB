#include <iostream>
#define Max 50

using namespace std;

void deletionInArray(int a[],int &n,int pos){

    	if(pos<0 || pos>n)
	 cout<<"invalid position";
	else
{
	for(int i=pos-1;i<n;i++)
    {
	   a[i]=a[i+1];
    }
	n--;
}

}

int main()
{
    int a[Max];
    int n, item, pos;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n > Max)
    {
        cout << "Array size exceeds the maximum limit." << endl;
        return 1; 
    }

    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the position to delete the element: ";
    cin >> pos;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position" << endl;
        return 1; 
    }


    deletionInArray(a, n, pos);

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
