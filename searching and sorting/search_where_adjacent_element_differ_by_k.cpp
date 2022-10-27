/*
https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

int search(int arr[], int n, int x, int k)
{
	
    int i=0;
    while(i<n){
        if(arr[i]==x) return i;
        i=i+max(1,abs(arr[i]-x)/k);
    }
    return -1;
}  