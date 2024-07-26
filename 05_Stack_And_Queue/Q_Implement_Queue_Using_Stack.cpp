// QUESTION: Implement a first in first out (FIFO) queue using only two stacks. 
// The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

// Implement the MyQueue class:
// void push(int x) Pushes element x to the back of the queue.
// int pop() Removes the element from the front of the queue and returns it.
// int peek() Returns the element at the front of the queue.
// boolean empty() Returns true if the queue is empty, false otherwise.


class MyQueue {
public:
    stack<int> input;
    stack<int> output;

    MyQueue() {

    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if (output.empty()) 
        {
            while (!input.empty()) 
            {
                output.push(input.top());
                input.pop();
            }
        }
        int topElement = output.top();
        output.pop();
        return topElement;
    }
    
    int peek() {
        if (output.empty()) 
        {
            while (!input.empty()) 
            {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};
