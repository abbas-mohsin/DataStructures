#include "myLinkedList.h"

int main()
{
    myLinkedList obj;

    obj.insertSorted(55);
    obj.insertSorted(10);
    obj.insertSorted(-3);
    obj.insertSorted(165);
    obj.insertSorted(100);
    obj.insertSorted(7);
    obj.insertSorted(30);
    cout << endl << "Display: " << endl;
    obj.display();

    cout << endl << endl;

    return 0;
}