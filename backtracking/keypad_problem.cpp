#include <iostream>
#include <string>
using namespace std;


string sel(int num)
{
    if ( num == 2)
        return "abc";
    if ( num == 3)
        return "def";
    if ( num == 4)
        return "ghi";
    if ( num == 5)
        return "jkl";
    if ( num == 6)
        return "mno";
    if ( num == 7)
        return "pqrs";
    if ( num == 8)
        return "tuv";
    if ( num == 9)
        return "wxyz";
}


void keypad (int num , string output)
{
    if ( num == 0)
    {
        cout << output << endl ;
        return ;
    }
    int d = num % 10;
    string str = sel(d);
    for ( int i = 0 ; i < str.length() ; i++)
    {
        keypad ( num/10 , str[i] + output );
    }
    return;
    
}

void printKeypad(int num)
{ 
    string output ="";
    keypad ( num , output ); 
    return;
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
