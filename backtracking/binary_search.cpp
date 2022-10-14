#include <iostream>
using namespace std;


int helper ( int input[] , int start , int end , int x)
{
    if ( start > end )
    {
        return -1;
    }
    int mid = (start + end)/2 ;
    if ( input[mid] == x)
    {
        return mid;
    }
    if ( x < input[mid])
        return helper ( input , start , mid - 1 , x );
    else
        return helper ( input , mid + 1 , end , x  );
    
}

int binarySearch(int input[], int size, int element) {
    // Write your code here
    int index = helper ( input , 0 , size-1 , element);
    return index;

}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
