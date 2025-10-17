#include "myStack.h"

int main()
{
	myStack<int> obj(4);
	obj.push(15);
	obj.push(0);
	obj.push(-3);
	obj.push(99);
	obj.push(24);

	cout << "Top Value = " << obj.top() << endl;


	cout << "Integer values displayed: " << endl;
	obj.display();

/*	myStack<char> a(100);
	//a.push('A');
	cout << endl << "Character values displayed: " << endl;
	cout << a.pop() << endl;

	a.display();
	*/
	return 0;
}