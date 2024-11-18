stacktype.h
#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
    const int MAX_ITEMS = 5;
class FullStack
// Exception class thrown
// by Push when stack is full.
{};
class EmptyStack
// Exception class thrown
// by Pop and Top when stack is emtpy.
{};
template <class ItemType> class StackType {
public:
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
#endif // STACKTYPE_H_INCLUDED
stacktype.cpp
#include "StackType.h"
    template <class ItemType>
    StackType<ItemType>::StackType() {
  top = -1;
}
template <class ItemType> bool StackType<ItemType>::IsEmpty() {
  return (top == -1);
}
template <class ItemType> bool StackType<ItemType>::IsFull() {
  return (top == MAX_ITEMS - 1);
}
template <class ItemType> void StackType<ItemType>::Push(ItemType newItem) {
  if (IsFull())
    throw FullStack();
  top++;
  items[top] = newItem;
}
template <class ItemType> void StackType<ItemType>::Pop() {
  if (IsEmpty())
    throw EmptyStack();
  top--;
}
template <class ItemType> ItemType StackType<ItemType>::Top() {
  if (IsEmpty())
    throw EmptyStack();
  return items[top];
}
