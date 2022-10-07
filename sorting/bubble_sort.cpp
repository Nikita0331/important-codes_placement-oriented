#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
     for(int i=1;i<n;i++)
    {
         bool swapp=false;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapp=true;
                swap(arr[j],arr[j+1]);
            }
        }
         if(swapp==false)
             break;
    }
}

int main()
{
        int n,a;
        vector<int>arr;
        cout<<"Enter the size of array: ";
        cin>>n;
        cout<<"Enter the no. element in the array : "<< endl;
         for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    bubbleSort(arr,n);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
