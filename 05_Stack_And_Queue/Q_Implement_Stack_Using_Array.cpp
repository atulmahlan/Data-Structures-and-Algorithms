//   QUESTION: Write a program to implement a Stack using Array. 
// Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 
// The push() method takes one argument, an integer 'x' to be pushed into the stack and pop() which returns an integer present at the top and popped out from the stack. 
// If the stack is empty then return -1 from the pop() method.


class Stack {
  int size;
  int * arr;
  int top;

  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }

  void push(int x) {
    top++;
    arr[top] = x;
  }

  int pop() {
    int x = arr[top];
    top--;
    return x;
  }

  int Top() {
    return arr[top];
  }

  int Size() {
    return top + 1;
  }
};
