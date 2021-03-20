#include <iostream>

#include <string>
#include <vector>

using namespace std;

const int num = 100000;
int result[num] = { NULL };

int fibo(int n) {
	if (n == 0) 
		result[0] = 0;
	else if (n == 1) 
		result[1] = 1;
	else {
		if (result[n] == NULL)
			result[n] = fibo(n - 1) % 1234567 + fibo(n - 2) % 1234567;
	}
	return result[n];
}

int solution(int n) {
	return fibo(n) % 1234567;
}

void main() {
	int n = 0;
	cin >> n;
	cout << solution(n) << endl;

	cout << endl;

	for (int i = 0;i <= n;i++) {
		cout << result[i] << endl;
	}
}