#include <iostream>
using namespace std;
int binarysearch(int arr[],int left,int right,int key)
{
    if(left>right)
    {
        return 0;
    }
    int mid = (left+right)/2;
    
    if(key == arr[mid])
    {
        return mid;
    }
    else if(key>arr[mid])
    {
        binarysearch(arr,mid+1,right,key);
    }
    else
    {
        binarysearch(arr,left,mid - 1,key);
    }
}
int main()
{
    int T;
    cout<<" enter number of test cases"<<endl;
    cin>>T;
    while(T>0)
    {
        int n,key;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        
        int index = binarysearch(arr,0,n,key);
        if(index == 0)
        {
            cout<<" element not found"<<endl;
        }
        else
        {
            int count = 1;
            int temp=index-1;
            while(temp>0 && arr[temp]!=arr[index])
            {
                count++;
                temp--;
            }
            temp = index + 1;
            while(temp<n-1 && arr[temp]!=arr[index])
            {
                count++;
                temp++;
            }
            cout << count;
        }
        T--;
        
    }

    return 0;
}
