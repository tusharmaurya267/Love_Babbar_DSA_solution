#include <bits/stdc++.h>
using namespace std;

void print_subs ( string input , string output)
{
    if ( input.empty())
    {
        cout << output << endl ;
        return ;
    }
    string op1=output;
    string op2=output+input[0];
    print_subs ( input.substr(1) , op1);
    print_subs ( input.substr(1) , op2);
    return;
}

int main()
{
    string input;
    cin >> input;
    string output = "";
    print_subs ( input , output );
    return 0;
}