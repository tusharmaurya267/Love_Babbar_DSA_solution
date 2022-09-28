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
