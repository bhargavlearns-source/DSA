/*
Stack is a abstract data type which provides opeation list and we can choose 
whichever way we want to implement that in our code.

stack follows first in last out (what goes first in, comes out the last) or last in first out (what goes in last, comes out first)

if we make a stack of array {1,2,3,4,5}, here if 5 is the last element we inserted it will come out first.

*/
#include <iostream>
using namespace std;

class Stack{
    private:
        int top= -1;
        int arr[5] = {0,0,0,0,0};

    
    public:

        bool isempty(){
            if(top == -1){
                return true;
            }
            else {
                return false;
            }
        }

        bool isfull(){
            if(top == 4){
                return true;
            }
            else {
                return false;
            }
        }
        int push(int value){
            if (isfull()){
                cout<< "Stack overflow";
            }
            top++;
            arr[top] = value;
            return value;
        }
        int pop(){
            if(isempty()){
                cout<<"Stack underflow";
            }
            arr[top] = 0;
            top--;
            return arr[top];
        }
        void display(){
            for(int num: arr){
                cout<< num<< endl;
            }
        }
        int peek(int n){
            return arr[n];
        }
        int count(){
            return (top+1);
        }

};

int main() {
    int operation;
    Stack stack;

    stack.push(1);
    stack.push(1);
    stack.push(1);
    stack.push(1);
    stack.display();
    stack.pop();
    stack.display();

    return 0;
}