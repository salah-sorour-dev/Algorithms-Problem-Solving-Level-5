#pragma once

#include <iostream>
#include "clsDynamicArray.h"


using namespace std;
template <class T>

class clsMyQueueArr
{

protected:
	clsDynamicArray <T> _MyQueue;

public:

	void push(T Item)
	{
		_MyQueue.InsertAtEnd(Item);
	}


	void pop()
	{
		_MyQueue.DeleteFirstItem();
	}

	void Print()
	{
		_MyQueue.PrintList();
	}

	int Size()
	{
		return _MyQueue.Size();
	}

	bool IsEmpty()
	{
		return _MyQueue.IsEmpty();
	}

	T front()
	{
		return _MyQueue.GetItem(0);
	}

	T back()
	{
		return _MyQueue.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return _MyQueue.GetItem(Index);
	}

	void Reverse()
	{
		_MyQueue.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyQueue.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T Value)
	{
		_MyQueue.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_MyQueue.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyQueue.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyQueue.Clear();
	}

};


