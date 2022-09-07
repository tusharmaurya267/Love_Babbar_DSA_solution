#include<iostream>
using namespace std;

void rotate(int *arr,int start,int end)
{
    for(;start<end;)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n ;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    rotate(arr,0,n-1);
    print(arr,n);
}
