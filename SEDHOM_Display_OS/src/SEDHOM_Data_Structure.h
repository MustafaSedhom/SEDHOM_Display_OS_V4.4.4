#ifndef SEDHOM_DATA_STRUCTUR_H_
#define SEDHOM_DATA_STRUCTUR_H_
//...................................................................................................
// Stack class
#ifndef STACK_DATA_TYPE
#define STACK_DATA_TYPE int
#endif

typedef STACK_DATA_TYPE Data_Type;
class Stack
{
    private:
        Data_Type* array;
        int size;
        int top;

    public:
        Stack(int Stack_size);
        ~Stack();
        bool isEmpty();
        bool isFull();
        void push(Data_Type value);
        Data_Type pop();
        Data_Type peak();
};
//========================================================================================
// Stack functions
Stack::Stack(int Stack_size)
{
    size = Stack_size;
    array = new Data_Type[size];
    top = -1;
}
Stack::~Stack()
{
    delete[] array;
}
void Stack::push(Data_Type value)
{
    if(isFull())return;
    array[++top]=value;

}
Data_Type Stack::pop()
{
    if(isEmpty())return(Data_Type());
    Data_Type var = array[top];
    top--;
    return var;
}
Data_Type Stack::peak()
{
    if(isEmpty()) return(Data_Type());
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
#endif // !SEDHOM_DATA_STRUCTUR_H_ 