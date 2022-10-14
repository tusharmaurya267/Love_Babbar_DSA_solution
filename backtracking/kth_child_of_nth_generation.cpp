#include <bits/stdc++.h>
using namespace std;


char family_tree ( char root_gender , int n , int k)
{
    if ( n == 1)
    {
        return root_gender;
    }
    int total_child = pow(2,n-1);
    if ( k <= total_child/2 )
    {
        return ( root_gender , n-1 , k);
    }
    else
    {
        char new_gender = 'm';
        if ( root_gender == 'm')
        {
            new_gender = 'f';
        }
        return ( new_gender , n-1 , k - (total_child/2)  );
    }
}


int main()
{
    char root_gender = 'f';
    int n , k;
    cin >> n >> k;

}