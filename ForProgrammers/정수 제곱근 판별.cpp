#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
	long long answer = round(sqrt(n));

	if (pow(answer, 2) == n)
		return pow(answer + 1, 2);
	else
		return -1;
}

int main() {
	long long n = 3;

	cout << solution(n) << endl;

	return 0;
}