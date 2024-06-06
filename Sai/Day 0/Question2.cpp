#include<iostream>
#include<vector>
using namespace std;
int MaxSum(vector<int>arrint k)
{
     int lsum=0;
    int rsum=0;
    int maxsum=0;
    for(int i=0;i<k;i++)
    {
        lsum=lsum+arr[i];
    }
    maxsum=lsum;
    rightindex=arr.size()-1;
    for(int i=k-1;i>=0;i++)
    {
        lsum=lsum-arr[i];
        rsum=rsum+arr[rightindex];
        rightindex--;
        maxsum=max(lsum+rsum,maxsum);
    }
    return maxsum;

}

int main()
{
    int size;
    cout<<"Enter the size : "<<endl;
    cin>>size;
   int i=0;
    int j=size-1;
    int sum=0;
    vector<int>arr(size);

    for(int i=0;i<arr.size();i++)
    {
        cout<<"Enter the value at "<<i<<"th index : "<<endl;
        cin>>arr[i];
    }
    int k;
    cout<<"Enter K : "<<endl;
    cin>>k;
    cout<<MaxSum(arr,k);
    return 0;
}
