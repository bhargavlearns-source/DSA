#include <iostream>
using namespace std;

class Queue{
    private:
        int front= -1;
        int rear= -1;
        int arr [5] = {0};
    
    public:

        bool isempty(){
            if(front == -1 && rear == -1){
                return true;
            }
            else {
                return false;
            }
        }

        bool isfull(){
            if(rear == 4){
                return true;
            }
            else {
                return false;
            }
        }

        void enqueue(int value){
            if (isfull()){
                cout<< "The queue is full";
                return;
            }
            else if (front == - 1 && rear == -1 ){
                front = rear =0;
                arr[rear] = value;
            }
            else{
                rear++;
                arr[rear]= value;
            }
}
        

        int dequeue(){
            int x=0;
            if (isempty()){
                cout<< "The queue is empty";
                return 0;
            }
            else if (front == rear){
                x = arr[front];
                front = rear = -1;
            }
            else{
                x = arr[front];
                front++;
            }
            return x;}

        void display(){
            for(int i: arr){
                cout<< i<< endl;
            }
        }
        void count(){
            cout<< "rear: "<< rear << endl;
            cout<< "front: "<< front << endl;
        }
};
int main() {
    Queue queue;

    queue.enqueue(4);
    queue.display();
    return 0;
}