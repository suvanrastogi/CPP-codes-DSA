#include<iostream>
using namespace std;

class Stack{
        private:
        int size;
        int *arr;
        int top;

        public:
        Stack(int s){
            this->size=s;
            arr=new int[s];
            top=-1;
        }


        // we need functions like push , pop , top , peek , empty 
         void push(int d){
            if(size-top>1){
                top++;
                arr[top]=d;
                cout<<arr[top]<<endl;
            }else{
                cout<<"overflow";
            }
        }
        //push ends 

        //pop starts

        void pop(){
            if(top>=0){
                cout<<"element popped"<<arr[top];
                top--;
                
            }else{
                cout<<"underflow";
            }
        }
        //pop ends

        // peek function starts
        int peek(){
            if(top>=0){
                int ans= arr[top];
                return ans;

            }else{
                cout<<"stack empty";
            }
            return -1;
        }

        //peek ends

        //empty starts
        bool Empty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }

        //empty ends 
        //print function 
void stackPrint() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack from top to bottom:\n";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

    };

int main(){

    Stack s(5);
    s.push(1);
     s.push(2);
      s.push(3);
       s.push(4);
        s.push(5);
        //adding another to test 
         s.push(6);

         s.pop();
         s.stackPrint();
    return 0;
}