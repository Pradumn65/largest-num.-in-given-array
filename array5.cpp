// finding smallest number in given array
#include<iostream>
using namespace std;
  
int main()
{
    
    
     cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int min=arr[0];
     for (int j = 1; j < n; j++)
     {
        if(arr[j]<min)
        {
            min=arr[j];
        }
     }
     cout<<"smallest number is :"<<min;
     
    return 0;
}