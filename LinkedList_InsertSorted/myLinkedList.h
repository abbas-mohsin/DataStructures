#include "LinkedList.h"

class myLinkedList:public LinkedList
{
    void insertAtTail(int value);
    void insertAtHead(int value);
public:
   
    void display();
    int deleteFromHead();
    int deleteFromTail();
    bool isEmpty();
    void insertSorted(int);


};

void myLinkedList::insertSorted(int value)
{
    if (head==nullptr && tail == nullptr) //first node case
    {
        Node*nn = new Node;
        nn->data = value;
        nn->next = nullptr;
        head = nn;
        tail = nn;
    }

    else if (value <= head->data) //smallest value
        insertAtHead(value);

    else if (value >= tail->data) //largest value
        insertAtTail(value);

    else
    {
        Node*t = head;
        Node*nn = new Node;
        nn->data = value;
        nn->next = nullptr;

        while(true)
        {
            if (t->next->data >= value)
            {
                nn->next=t->next;
                t->next = nn;
                break;
            }

            else
                t = t->next;
        
        }

        
    }

}

bool myLinkedList::isEmpty()
{
    return head==nullptr && tail==nullptr;
}

int myLinkedList::deleteFromTail()
{
    if (head==nullptr && tail == nullptr) //empty linked list
    {
        cout << "LL is empty; returing NULL value" << endl;
        return NULL;
    }

    else if (head == tail) //single node case
    {
        int returingValue = head->data;

        delete tail;
        head = nullptr;
        tail = nullptr;

        return returingValue;
    }

    else
    {
        Node*t = head;

        while(1)
        {
            if (t->next == tail)
                break;

            t = t->next;
        }

        int returingValue = tail->data;
        delete tail;
        t->next = nullptr;
        tail = t;


        return returingValue;

    }
}

int myLinkedList::deleteFromHead()
{
    if (head==nullptr && tail == nullptr) //empty linked list
    {
        cout << "LL is empty; returing NULL value" << endl;
        return NULL;
    }

    else if (head == tail) //single node case
    {
        int returingValue = head->data;

        delete tail;
        head = nullptr;
        tail = nullptr;

        return returingValue;
    }

    else
    {
        int returingValue = head->data;
        
        Node*t = head;
        
        head = head->next;
        
        delete t;
        t = nullptr;

        return returingValue;


    }
}

void myLinkedList::display()
{
    if (head == nullptr && tail == nullptr)
        cout << "Cannot display, LL is empty" << endl;

    else
    {  
        Node* t = head;

        while (1)
        {
            cout << t->data << endl;
            t = t->next;

            if (t == nullptr)
                break;
        }

    }
    
}

void myLinkedList::insertAtHead(int value)
{
    Node*nn = new Node;
    nn->data = value;
    nn->next = nullptr;

    if (head==nullptr && tail == nullptr) //first node case
    {
        head = nn;
        tail = nn;
    }
    else // for all Nodes other than the first
    {
        
       nn->next = head;
       head = nn;

    }
}

void myLinkedList::insertAtTail(int value)
{
    Node*nn = new Node;
    nn->data = value;
    nn->next = nullptr;

    if (head==nullptr && tail == nullptr) //first node case
    {
        head = nn;
        tail = nn;
    }
    else // for all Nodes other than the first
    {
        tail->next = nn;
        tail = nn;
    }
}
