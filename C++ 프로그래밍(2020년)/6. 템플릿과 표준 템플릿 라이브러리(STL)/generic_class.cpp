#include <iostream>
using namespace std;

template <class T>
class Mystack
{
	int top; // top of stack
	T data[100]; // T타입의 배열. stack의 크기는 100
public:
	Mystack(); // 생성자 선언
	void push(T element); // T타입 원소 element를 data[] 배열에 삽입
	T pop(); // stack의 top에 있는 데이터를 data[] 배열에 return
};

template <class T>
Mystack<T>::Mystack() // 생성자 구현
{
	top = -1; // stack은 비어있음
}

template <class T>
void Mystack<T>::push(T element)
{
	if(top == 99)
	{
		cout << "stack is full";
		return;
	}
	else
	{
		top++;
		data[top] = element;
	}
}

template <class T>
T Mystack<T>::pop()
{
	T retData;
	if(top == -1)
	{
		cout << "stack is empty";
		return 0;
	}
	else
	{
		retData = data[top--];
		return retData;
	}
}

int main()
{
	Mystack<int> iStack; // int만 저장할 수 있는 stack
	iStack.push(3);
	cout << iStack.pop() << endl;
	
	Mystack<double> dStack; // double만 저장할 수 있는 stack
	dStack.push(3.5);
	cout << dStack.pop() << endl;
	
	Mystack<char>* p = new Mystack<char>(); // char만 저장할 수 있는 stack
	p->push('a');
	cout << p->pop() << endl;
	delete p;
}