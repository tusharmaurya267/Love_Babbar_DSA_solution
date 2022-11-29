#include<bits/stdc++.h>
using namespace std;


struct Stack{
    int *stack;
    int top;
    int capacity;
    Stack(int c){
        capacity=c;
        top=-1;
        stack=new int;
    }

    void POP(){
        if(top==-1) cout << "\nStack Empty\n";
        else{
            top--;
        }
    }

    void PUSH(int data){
        if(top==capacity-1) cout <<"\nStack Full\n";
        else{
            top++;
            stack[top]=data;
            
        }
    }

    int PEEK(){
        if(top==-1){ 
            cout <<"\nStack Empty\n";
            return -1;
        }
        return stack[top];
    
    }
};

int main(){
    Stack s(5);
    int x;
    do{
        cin >> x;
        switch(x){
            case 1: s.POP(); break;
            case 2: int n;
                    cin >> n;
                    s.PUSH(n); break;
            case 3: cout << s.PEEK() << endl; break;
            default: cout << "Wrong choice";
        }
    }while(x==1 || x==2 || x==3);
}