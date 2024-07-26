// QUESTION: Implement a Queue using an Array. Queries in the Queue are of the following type:
// (i) 1 x   (a query of this type means  pushing 'x' into the queue)
// (ii) 2     (a query of this type means to pop element from queue and print the poped element)


class Queue {
  int * arr;
  int start, end, currSize, maxSize;

  public:
    Queue() {
      arr = new int[16];
      start = -1;
      end = -1;
      currSize = 0;
    }

  Queue(int maxSize) {
    ( * this).maxSize = maxSize;
    arr = new int[maxSize];
    start = -1;
    end = -1;
    currSize = 0;
  }

  void push(int newElement) {
    if (currSize == maxSize) 
    {
      cout << "Queue is full\nExiting..." << endl;
      exit(1);
    }
    if (end == -1) 
    {
      start = 0;
      end = 0;
    } else
      end = (end + 1) % maxSize;
    arr[end] = newElement;
    cout << "The element pushed is " << newElement << endl;
    currSize++;
  }

  int pop() {
    if (start == -1) 
    {
      cout << "Queue Empty\nExiting..." << endl;
    }
    int popped = arr[start];
    if (currSize == 1) 
    {
      start = -1;
      end = -1;
    } else
      start = (start + 1) % maxSize;
    currSize--;
    return popped;
  }
  int top() {
    if (start == -1) 
    {
      cout << "Queue is Empty" << endl;
      exit(1);
    }
    return arr[start];
  }
