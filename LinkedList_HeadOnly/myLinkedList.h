#include "LinkedList.h"

class myLinkedList:public LinkedList
{
public:
    void insertAtHead(int);
    void insertAtTail(int);
    void display();
    int deleteFromHead();
    int deleteFromTail();

};

int myLinkedList::deleteFromTail()
{
    if (head == nullptr)
        return NULL;

    else if (head->next == nullptr) //single node case
    {
        int RV = head->data;
        delete head;
        head = nullptr;
        return RV;
    }

    else
    {
        Node*t = head;

        while(1)
        {
            if (t->next->next == nullptr)
            {
                int RV = t->next->data;
                
                delete t->next;
                t->next = nullptr;

                return RV;

            }

            t = t->next;
        }
    }
}


int myLinkedList::deleteFromHead()
{
    if (head == nullptr)
        return NULL;

    else if (head->next == nullptr) //single node case
    {
        int RV = head->data;
        delete head;
        head = nullptr;
        return RV;
    }

    else
    {
        int RV = head->data;
        Node*t = head;
        head = head->next;
        delete t;
        t = nullptr;
        return RV;
    }
}

void myLinkedList::display()
{
    if (head==nullptr)
        cout << "LL is empty" << endl;

    else
    {
        Node*temp = head;

        while(1)
        {
            cout << temp->data << endl;
            if (temp->next == nullptr)
                break;


            temp = temp->next;
        }
    }
}

void myLinkedList::insertAtHead(int value)
{
    Node*nn = new Node;
    nn->next = nullptr;
    nn->data = value;

    if (head == nullptr)
    {
        head = nn;
    }

    else
    {
        nn->next = head;
        head = nn;
        
    }
}

void myLinkedList::insertAtTail(int value)
{
    Node*nn = new Node;
    nn->next = nullptr;
    nn->data = value;

    if (head == nullptr)
    {
        head = nn;
    }

    else
    {
        Node*t = head;

        while(1)
        {
            if (t->next == nullptr)
            {
                t->next=nn;
                break;
            }

            t = t->next;
        }
        
    }
}