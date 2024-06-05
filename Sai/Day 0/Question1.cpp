#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size,k;
    cout<<"Enter the size : "<<endl;
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<arr.size();i++)
    {
        cout<<"Enter the value at "<<i<<"th index : ";
        cin>>arr[i];
    }
    cout<<"Enter K : "<<endl;
    cin>>k;
    //Reversing the Array
    for(int i=0,j=arr.size()-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=0,j=k-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=k,j=arr.size()-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    //Printing 
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}