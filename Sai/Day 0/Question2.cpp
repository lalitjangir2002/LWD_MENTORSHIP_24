#include<iostream>
#include<vector>
using namespace std;
int MaxSum(vector<int>arr,int i,int j,int k,int &sum)
{
    if(k==0)
    {
        return sum;
    }
    while(k>0)
    {
    
    if(arr[i]>arr[j])
    {
        
        while(k>0)
        {
            sum=sum+arr[i];
            i++;
            k--;
        }
        return sum;
    }
    else if(arr[i]<arr[j])
    {
         while(k>0)
        {
            sum=sum+arr[j];
            j--;
            k--;
        }
        return sum;
    }
    else
    {
        sum=sum+arr[i];
        i++;
        j--;
        k--;
        return MaxSum(arr,i,j,k,sum);
    }
}
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
    cout<<MaxSum(arr,i,j,k,sum);
    return 0;
}