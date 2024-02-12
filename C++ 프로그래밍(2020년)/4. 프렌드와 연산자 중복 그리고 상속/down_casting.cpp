#include <iostream>
using namespace std;

class Circle // 기본 클래스
{
public:
	int radius;

public:
	void setRadius (int r)
	{
		radius = r;
	}
	void showRadius()
	{
		cout << "반지름 : " << radius << endl;
	}
};

class Pizza : public Circle // 부모 클래스
{
public:
	double getArea();
};

double Pizza::getArea()
{
	return radius * radius*3.14;
}

int main()
{
	Circle circle;
	circle.setRadius(5);
	circle.showRadius();
	
	Pizza hampizza;
	hampizza.setRadius(10);
	cout << "햄 피자 면적 : " << hampizza.getArea() << endl;
	
	Pizza cheesepizza;
	Pizza* cDer = &cheesepizza;
	Circle* cBase = cDer; // 업 캐스팅
	
	cBase->setRadius(100);
	cBase->showRadius();
	
	cDer = (Pizza*)cBase; // 다운 캐스팅
	cDer->setRadius(1);
	cDer->showRadius();
	cout << "치즈 피자 면적 : " << cDer->getArea() << endl;
}