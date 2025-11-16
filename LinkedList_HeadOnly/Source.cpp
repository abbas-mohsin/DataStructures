#include "myLinkedList.h"

int main()
{
    myLinkedList obj;
    obj.insertAtHead(0);
    obj.insertAtHead(-3);
    obj.insertAtHead(15);

    obj.insertAtTail(999);

    cout << "Deleted Value: " << obj.deleteFromTail() << endl;

    cout << "Display: " << endl;
    obj.display();

    cout << endl << endl;
    return 0;
}