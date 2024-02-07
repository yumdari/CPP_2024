#include <iostream>
using namespace std;

int odd(int x) {
	return (x % 2);
}

int main() {
	int sum = 0;
	
	// 1에서 10000까지 홀수의 합 계산
	for (int i = 1; i <= 10000; i++) {
		if (odd(i))
			sum += i;
	}
	cout << sum;
}