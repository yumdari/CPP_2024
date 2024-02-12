#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v; // 정수 vector 생성
	
	vector<int>::iterator it; // vector 내의 원소를 탐색하는 iterator 변수 선언
	
	for (int i = 0; i < 5; i++)
	{
		int n;
		cout << i+1 << "번 원소 입력 >> ";
		cin >> n;
		v.push_back(n); // 키보드에서 읽은 정수를 vector에 삽입
	}
	cout << "vector 원소 입력 완료" << endl;
	
	// v.begin()에서 v.end() 사이의 값을 오름 차순으로 정렬
	// sort() 함수의 실행 결과 vector v의 원소 순서가 변경됨
	sort(v.begin(), v.end());
	
	for(it = v.begin(); it != v.end(); it++)
	{
		cout << *it << ' '; // vecotr v의 모든 원소 출력
	}
	cout << endl;
}