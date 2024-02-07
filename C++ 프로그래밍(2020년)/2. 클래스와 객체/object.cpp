#include <iostream>
using namespace std;

class Circle{				// Circle 선언부
	public:
	int radius;
	double getArea();
};

double Circle::getArea(){	// Circle 구현부
	return 3.14 * radius * radius;
}

int main(){
	Circle donut;					// 객체 donut 생성
	donut.radius = 1;				// donut 객체의 반지름을 1로 설정. donut의 멤버 변수 접근
	double area = donut.getArea();	// donut 객체의 면적 알아내기. donut의 멤버 함수 호출
	cout << "donut 면적은 " << area << endl;
	
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}