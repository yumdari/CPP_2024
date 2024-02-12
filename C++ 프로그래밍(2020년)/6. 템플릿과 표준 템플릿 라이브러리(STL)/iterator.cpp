#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v; // 정수 vector 생성
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	vector<int>::iterator it; // vector v의 원소에 대한 포인터 it 선언
	
	for(it = v.begin(); it != v.end(); it++) // iterator를 사용하여 모든 원소 탐색
	{
		int n = *it; // it가 가리키는 원소 값 리턴
		n = n*2;
		*it = n; // it가 가리키는 원소에 값 쓰기
	}
	
	for(it = v.begin(); it != v.end(); it++) // vector v의 모든 원소 출력
	{
		cout << *it << ' ';
	}
	cout << endl;
}