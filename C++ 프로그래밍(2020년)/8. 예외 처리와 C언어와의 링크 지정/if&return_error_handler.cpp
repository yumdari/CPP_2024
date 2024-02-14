#include <iostream>
using namespace std;

bool getExp(int base, int exp, int &ret) // base&exp 값을 계산하여 ret에 저장
{
	if(base <= 0 || exp <= 0)
	{
		return false;
	}
	int value = 1;
		
	for(int n = 0; n < exp; n++)
	{
		value = value * base;
	}
	ret = value;
	return true;
}

int main()
{
	int v = 0;
	if(getExp(2, 3, v)) // getExp()는 true 리턴
	{
		cout << "2의 3승은 " << v << "입니다." << endl;
	}
	else
	{
		cout << "오류. 2의 3승은 " << "계산할 수 없습니다." << endl;
	}
	
	int  e = 0;
	if(getExp(2, -3, e)) // getExp()는 false 리턴
	{
		cout << "2의 -3승은 " << e << "입니다." <<endl;
	}
	else
	{
		cout << "오류. 2의 -3승은 " << "계산할 수 없습니다." << endl;
	}
}