#include "LinkedList.h"

class myLinkedList:public LinkedList
{
public:
    void insertAtTail(int value);
    void insertAtHead(int value);
    void display();
    int deleteFromHead();
    int deleteFromTail();
    bool isEmpty();

};

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
