#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t>0)
    {
        int n;
        cin>> n;
        int arr[n];
        for(int i =0; i<n; i++)
        {
            cin>>arr[i];
        }
        int i=0, j=n-2, k=n-1;
        while(k>0)
        {
            
            while(i<j)
            {
                if(arr[i]+arr[j] == arr[k])
                {
                    cout<< i+1<<" "<< j+1<< " " << k+1<<endl; 
                }
                if(arr[i]+arr[j] < arr[k])
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
            k--;
            j= k-1;
            i=0;
        }
        t--;
    }

    return 0;
}