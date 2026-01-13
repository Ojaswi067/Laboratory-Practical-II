#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,5,1,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"original array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter Selection sort: ";
    
    for(int i=0;i<n-1;i++)
    {
        int min_id=i;
        for(int j=i+1;j<(n);j++)
        {
            if(arr[min_id]>arr[j])
            {
                min_id=j;
            }
        }
        if(arr[i]>arr[min_id])
        {
            int temp=arr[i];
            arr[i]=arr[min_id];
            arr[min_id]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
     cout<<" "<<arr[i]<<" ";
    }
    return 0;
}
