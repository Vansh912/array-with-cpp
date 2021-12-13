#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int arr[i];
	
	cout<<"enter the number of elements you want to store ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"please enter "<<i<<" element in array ";
		cin>>arr[i];
		
	}
	for(i=0;i<n;i++)
	{
		cout<<"the elements you entered are "<<arr[i]<<endl;
	}
} 
