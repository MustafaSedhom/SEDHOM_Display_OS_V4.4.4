#ifndef SEDHOM_DATA_STRUCTUR_H_
#define SEDHOM_DATA_STRUCTUR_H_
//...................................................................................................
// Stack class
#ifndef STACK_DATA_TYPE
#define STACK_DATA_TYPE int
#endif

typedef STACK_DATA_TYPE Stack_Data_Type;
class Stack
{
    private:
        Stack_Data_Type* array;
        int size;
        int top;

    public:
        Stack(){}
        Stack(int Stack_size);
        ~Stack();
        void init_Stack(int size);
        bool isEmpty();
        bool isFull();
        void push(Stack_Data_Type value);
        Stack_Data_Type pop();
        Stack_Data_Type peak();
};
//========================================================================================
// Stack functions
Stack::Stack(int Stack_size)
{
    size = Stack_size;
    array = new Stack_Data_Type[size];
    top = -1;
}
Stack::~Stack()
{
    delete[] array;
}
void Stack::init_Stack(int Stack_size)
{
    size = Stack_size;
    array = new Stack_Data_Type[size];
    top = -1;   
}
void Stack::push(Stack_Data_Type value)
{
    if(isFull())return;
    array[++top]=value;

}
Stack_Data_Type Stack::pop()
{
    if(isEmpty())return(Stack_Data_Type());
    Stack_Data_Type var = array[top];
    top--;
    return var;
}
Stack_Data_Type Stack::peak()
{
    if(isEmpty()) return(Stack_Data_Type());
    return (array[top]);
}
bool Stack::isEmpty()
{
    return(top == -1);
}
bool Stack::isFull()
{
    return(top == size-1);   
}
//...................................................................................................

#ifndef Queue_DATA_TYPE
#define Queue_DATA_TYPE int
#endif

typedef Queue_DATA_TYPE Queue_Data_Type;

class Queue
{
    private:
        Queue_Data_Type* array;
        int size;
        int front;
        int rear;
        int count;  
    public:
        Queue(){}
        Queue(int Queue_size);
        ~Queue();
        void init_Queue(int Queue_size);
        bool enqueue(Queue_Data_Type value);
        bool dequeue(Queue_Data_Type &value);
        bool isEmpty() { return count == 0; }
        bool isFull() { return count == size; }
        int getCount() { return count; }
};

Queue::Queue(int Queue_size)
{
    size = Queue_size;
    array = new Queue_Data_Type[size];
    front = 0;
    rear = -1;
    count = 0;
}

Queue::~Queue()
{
    delete[] array;
}
void Queue::init_Queue(int Queue_size)
{
    size = Queue_size;
    array = new Queue_Data_Type[size];
    front = 0;
    rear = -1;
    count = 0;
}
bool Queue::enqueue(Queue_Data_Type value)
{
    if(isFull()) return false;
    rear = (rear + 1) % size;
    array[rear] = value;
    count++;
    return true;
}
bool Queue::dequeue(Queue_Data_Type &value)
{
    if(isEmpty()) return false;
    value = array[front];
    front = (front + 1) % size;
    count--;
    return true;
}
#endif // !SEDHOM_DATA_STRUCTUR_H_ 