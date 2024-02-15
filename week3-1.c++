#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class sorting{
public:
int shifts=0,comp=0;
void insertionSort(int arr[],int n)
{
    int i,key,j;
    
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>key)
        {
            shifts++;
            arr[j+1]=arr[j];
            j--;
            comp++;
        }
        arr[j+1]=key;
        shifts++;
    }

}
void display(int arr[],int n)
{
    cout<<"Array is :"<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<< " "<<arr[i]<<" ";
    }
    cout<<"Shifts="<<shifts<<"comp="<<comp<<endl;
    
}
};

int main(){

    int arr[50],n,i;
    sorting s1;
    cout<<"Enter array size";
    cin>>n;
    cout<<"Enter elements of the array";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    s1.insertionSort(arr,n);
    s1.display(arr,n);
    return 0;
    

}

