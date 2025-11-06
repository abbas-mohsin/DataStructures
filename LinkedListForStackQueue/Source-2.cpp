#include "myLinkedList.h"

int main()
{
    myLinkedList obj;

    obj.insertAtTail(10);        
    obj.insertAtTail(0);
    obj.insertAtTail(-3);
    obj.insertAtTail(99);
    obj.insertAtTail(1024);
    obj.insertAtHead(458);

    cout << "Deendl;lete From Head: " << obj.deleteFromHead() << 
    cout << "Delete From Tail: " << obj.deleteFromTail() << endl;



    cout << endl << "Display: " << endl;
    obj.display();

    cout << endl << endl;

    return 0;
}