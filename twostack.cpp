class twoStacks {
    int *arr;
    int size;
    int top1;
    int top2;
    
  public:
    
twoStacks() {
    size = 3;  // default size
    arr = new int[size];
    top1 = -1;
    top2 = size;
}


    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top2-top1>0){
            top1++;
            arr[top1]=x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
         if(top2-top1>0){
            top2--;
            arr[top2]=x;
        }
        // code here
    }
    // Function to remove an element from top of the stack1.      
    int pop1() {
        // code here
        if(top1!=-1){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2!=size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};