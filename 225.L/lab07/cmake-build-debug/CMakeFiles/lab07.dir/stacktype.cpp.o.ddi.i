# 0 "/home/sujat/projects/CSE225/225.L/lab07/stacktype.cpp"
# 1 "/home/sujat/projects/CSE225/225.L/lab07/cmake-build-debug//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "/home/sujat/projects/CSE225/225.L/lab07/stacktype.cpp"




# 1 "/home/sujat/projects/CSE225/225.L/lab07/stacktype.h" 1
# 10 "/home/sujat/projects/CSE225/225.L/lab07/stacktype.h"
class stacktype {

    class FullStack


    {};
    class EmptyStack


    {};
    template <class ItemType>
    class StackType
    {
    public:

        static constexpr int MAX_ITEMS = 5;
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();
    private:
        int top;
        ItemType items[MAX_ITEMS];
    };

};
# 6 "/home/sujat/projects/CSE225/225.L/lab07/stacktype.cpp" 2
template <class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if( IsFull() ) throw FullStack();
    top++;
    items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() ) throw EmptyStack();
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty()) throw EmptyStack();
    return items[top];
}
