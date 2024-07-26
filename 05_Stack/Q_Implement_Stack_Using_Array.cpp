// QUESTION: Write a program to implement a Stack using Array. 
// Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 
// The push() method takes one argument, an integer 'x' to be pushed into the stack and pop() which returns an integer present at the top and popped out from the stack. 
// If the stack is empty then return -1 from the pop() method.


/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x) {
    if(top == 1000) return -1;
    arr[++top] = x;
}

int MyStack ::pop() {
    if(top == -1) return -1;
    
    int poppedEl = arr[top];
    top--;
    return poppedEl;
}


