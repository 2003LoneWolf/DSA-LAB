#include<iostream>
#define max 50
using namespace std;

void insertionInArray( int a[],int &n,int item,int pos)
{
	if(pos<0 || pos>=n)
	 cout<<"invalid position";
	else
{
	for(int i=n;i>=pos-1;i--)
	   a[i+1]=a[i];
	a[pos-1]=item;
	n++;
}
}
int main()
{
	int a[max],n,item,pos;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>pos>>item;

   insertionInArray(a,n,item,pos);

	cout<<"after insertion array is:";

	for (int i=0;i<n;i++)
     cout<<a[i]<<" ";
 return 0;
}