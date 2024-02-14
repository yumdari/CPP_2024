#include <iostream>
#include <string>
using namespace std;

class MyException // 사용자 정의 기본 예외 클래스 선언
{
	int lineNo;
	string func, msg;
public:
	MyException(int n, string f, string m)
	{
		lineNo = n;
		func = f;
		msg = m;
	}
	void print()
	{
		cout << func << ":" << lineNo << " ," << msg << endl;
	}
};

class DivedeByZeroException : public MyException // 0으로 나누는 예외 클래스 선언
{
public:
	DivedeByZeroException(int lineNo, string func, string msg)
	: MyException(lineNo, func, msg)
	{ }
};

class InvlaidInputException : public MyException // 잘못된 입력 예외 클래스 선언
{
public:
	InvlaidInputException(int lineNo, string func, string msg)
	: MyException(lineNo, func, msg)
	{ }
};

int main()
{
	int x, y;
	
	try
	{
		cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요 >> ";
		cin >> x >> y;
		if(x < 0 || y < 0)
		{
			throw InvlaidInputException(32, "main()", "음수 입력 예외 발생");
		}
		if(y == 0)
		{
			throw DivedeByZeroException(34, "main()", "0으로 나누는 예외 발생");
		}
		cout << (double)x / (double)y;
	}
	catch(InvlaidInputException &e)
	{
		e.print();
	}
	catch(DivedeByZeroException &e)
	{
		e.print();
	}
}