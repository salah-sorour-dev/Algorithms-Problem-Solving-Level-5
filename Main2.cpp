#include <iostream>
#include "clsDblLinkdList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"
#include "clsMyQueueArr.h"
#include "clsMyStackArr.h"
#include "clsMyString.h"

using namespace std;

int main()
{

    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    clsMyString S1;

    cout << "\nS1 = " << S1.Value << "\n";

    S1.Value = "Salah";

    cout << "\nS1 = " << S1.Value << "\n";

    S1.Value = "Salah2";

    cout << "\nS1 = " << S1.Value << "\n";

    S1.Value = "Salah3";

    cout << "\nS1 = " << S1.Value << "\n";

    cout << "\n\nUndo:\n";
    cout << "\n__________\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Value << "\n";

    cout << "\n\nRedo:\n";
    cout << "\n__________\n";

    S1.Redo();
    cout << "\nS1 after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 after Redo = " << S1.Value << "\n";

    
    system("pause>0");
    return 0;
}

