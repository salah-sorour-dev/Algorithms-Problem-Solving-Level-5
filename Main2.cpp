

#include <iostream>
#include "clsDblLinkdList.h"
using namespace std;

int main()
{
    
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.UpdateItem(2, 500);

    cout << "\nAfter updating item(2):\n";
    MydblLinkedList.PrintList();




    system("pause>0");
    return 0;
}

