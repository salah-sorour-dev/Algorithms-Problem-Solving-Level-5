#include <iostream>
#include "clsDblLinkdList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"

using namespace std;

int main()
{
    
    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);

    cout << "\nStack: \n";
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Front: " << MyStack.Top();
    cout << "\nStack Back: " << MyStack.Bottom();

    MyStack.pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.Print();

    cout << "\n\nItem(2) : " << MyStack.GetItem(2);

    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();

    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after Updating Item(2) to 600 : \n";
    MyStack.Print();

    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();

    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at front : \n";
    MyStack.Print();

    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at Back : \n";
    MyStack.Print();

    MyStack.Clear();
    cout << "\n\nStack after Clear : \n";
    MyStack.Print();


    system("pause>0");
    return 0;
}

