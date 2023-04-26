#include "MyStack.h"
int main()
{
	
	cout << "\t \t \t ===For Integers=== " << endl;
	mystack<int> obj(5);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.push(6);
	cout << "After pushing values!!!" << endl;
	obj.display();
	cout << "Poped Values is ->  " << obj.pop() << endl;
	
	obj.display();
	cout << "Top of Stack" << endl;
	cout << obj.top();
	cout << "\t \t \t ===For Float Values=== " << endl;
	mystack<float> obj1(5);
	obj1.push(2.5);
	obj1.push(3.5);
	obj1.push(4.5);
	obj1.push(5.5);
	obj1.push(6.5);
	cout << "After pushing values!!!" << endl;
	obj1.display();
	cout << "Poped Values is ->  " << obj1.pop() << endl;

	obj1.display();
	cout << "Top of Stack" << endl;
	cout << obj1.top();
	cout << "\t \t \t ===For Characters=== " << endl;
	mystack<char> obj2(5);
	obj2.push('S');
	obj2.push('H');
	obj2.push('A');
	obj2.push('N');
	obj2.push('B');
	cout << "After pushing values!!!" << endl;
	obj2.display();
	cout << "Poped Values is ->  " << obj2.pop() << endl;

	obj2.display();
	cout << "Top of Stack" << endl;
	cout << obj2.top();
	cout << "\t \t \t ===For Strings=== " << endl;
	mystack<string> obj3(5);
	obj3.push("Boy123");
	obj3.push("Boy456");
	obj3.push("Boy789");
	obj3.push("Girl123");
	obj3.push("Girl456");
	cout << "After pushing values!!!" << endl;
	obj3.display();
	cout << "Poped Values is ->  " << obj3.pop() << endl;

	obj3.display();
	cout << "Top of Stack" << endl;
	cout << obj3.top();
	return 0;
}