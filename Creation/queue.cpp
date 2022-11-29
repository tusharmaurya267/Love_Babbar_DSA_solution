#include <bits/stdc++.h>
using namespace std;
 
struct Queue {
    public:
    int front, rear, capacity;
    int* queue;

    public:
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }

    void Enqueue(int data)
    {
        if (capacity == rear) {
            printf("\nQueue is full\n");
            return;
        }
        else {
            queue[rear] = data;
            rear++;
        }
        return;
    }

    void Dequeue()
    {
        if (front == rear) {
            printf("\nQueue is  empty\n");
            return;
        }

        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
        return;
    }

    void Display()
    {
        int i;
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
         for (i = front; i < rear; i++) {
            printf(" %d <-- ", queue[i]);
        }
        return;
    }
 
    void Front()
    {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", queue[front]);
        return;
    }
};

int main(){
    Queue q(5);

    int x;
    do{
        cin >> x;

        switch(x){
            case 1: q.Dequeue(); break;
            case 2: int n;
                    cin >> n;
                    q.Enqueue(n); break;
            case 3: q.Front(); break;
            case 4: q.Display(); break;
            default : cout << "Wrong selection";
        }
    }while(x==1 || x==2 || x==3 || x==4);
}