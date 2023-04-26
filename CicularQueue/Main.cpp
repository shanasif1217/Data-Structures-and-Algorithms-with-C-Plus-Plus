#include "MyQueue.h"
int main()
{
	cout << "\t \t \t ===For Integer Values=== " << endl;
	MyQueue<int> obj(5);
	obj.enqueue(1);
	obj.enqueue(2);
	obj.enqueue(3);
	
	cout << "After Enque" << endl;
	obj.display();
	
	cout << "Removed value is -> " << obj.dequeue() << endl;
	cout << "After Deque" << endl;
	
	obj.display();
	
	cout << endl;
	cout << "Top is ->  " << obj.first_element() << endl;
	cout << "End is ->  " << obj.last_element() << endl;
	cout << "\t \t \t ===For Float values=== " << endl;
	MyQueue<float> obj1(5);
	obj1.enqueue(1.5);
	obj1.enqueue(10.2);
	obj1.enqueue(30.2);
	cout << "After Enque" << endl;
	obj1.display();

	cout << "Removed value is -> " << obj1.dequeue() << endl;
	cout << "After Deque" << endl;
	
	obj1.display();

	cout << endl;
	cout << "Top is ->  " << obj1.first_element() << endl;
	cout << "End is ->  " << obj1.last_element() << endl;
	cout << "\t \t \t ===For Characters Values=== " << endl;
	MyQueue<char> obj2(5);
	obj2.enqueue('S');
	obj2.enqueue('A');
	obj2.enqueue('B');
	cout << "After Enque" << endl;
	obj2.display();

	cout << "Removed value is -> " << obj2.dequeue() << endl;
	cout << "After Deque" << endl;

	obj2.display();

	cout << endl;
	cout << "Top is ->  " << obj2.first_element() << endl;
	cout << "End is ->  " << obj2.last_element() << endl;
	cout << "\t \t \t ===For String Values=== " << endl;
	MyQueue<string> obj3(5);
	obj3.enqueue("Boy123");
	obj3.enqueue("Boy456");
	obj3.enqueue("Boy789");
	cout << "After Enque" << endl;
	obj3.display();

	cout << "Removed value is -> " << obj3.dequeue() << endl;
	cout << "After Deque" << endl;

	obj3.display();

	cout << endl;
	cout << "Top is ->  " << obj3.first_element() << endl;
	cout << "End is ->  " << obj3.last_element() << endl;
	return 0;
}