#include "MyStack.h"
int main()
{
	mystack<int> obj(5);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.push(6);
	cout << "After pushing values!!!" << endl;
	obj.display();
	cout << "After Poped Value!!!" << endl;
	obj.pop();
	obj.display();
	cout << "Top of Stack" << endl;
	cout << obj.top();
	return 0;
}