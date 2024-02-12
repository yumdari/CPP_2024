#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void draw()
	{
		cout << "--Shape--";
	}
};

class Circle : public Shape 
{
public:
	int x;
	virtual void draw()
	{
		Shape::draw(); // 기본 클래스의 draw() 호출
		cout << "Circle" << endl;
	}
};

int main()
{
	Circle circle;
	Shape* pShape = &circle;
	
	pShape->draw(); // Dynamic Binding. draw() is overriding
	pShape->Shape::draw(); // Static Binding. cuz of scope operator
}