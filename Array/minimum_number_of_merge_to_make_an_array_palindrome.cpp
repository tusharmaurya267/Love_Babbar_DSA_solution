
/*
https://www.geeksforgeeks.org/find-minimum-number-of-merge-operations-to-make-an-array-palindrome/
*/

int findMinOps(int arr[], int n)
{
    int i=0;
    int j=n-1;
    int count=0;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else if(arr[i]<arr[j]){
            i++;
            arr[i]=arr[i]+arr[i-1];
            count++;
            
        }
        else if(arr[i]>arr[j]){
            j--;
            arr[j]=arr[j]+arr[j-1];
            count++;
        }
    }
    return count;
}
 
