#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v; // 정수만 삽입 가능한 vector 생성
	
	v.push_back(1); // vector에 정수 1 삽입
	v.push_back(2); // vector에 정수 2 삽입
	v.push_back(3); // vector에 정수 3 삽입
	
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " "; // vector의 모든 원소 출력
	}
	cout << endl;
	
	v[0] = 10; // vector의 첫 번째 원소를 10으로 변경
	int n = v[2]; // n에 3이 저장
	v.at(2) = 5; // vector의 세 번째 원소를 5로 변경
	
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " "; // vector의 모든 원소 출력
	}
	cout << endl;
}