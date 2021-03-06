#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;

	while (n > 0) {
		answer.push_back(n % 10);
		n /= 10;
	}

	return answer;
}

void main() {
	long long n = 12345;
	vector<int> result = solution(n);
	for (unsigned i = 0;i < result.size();i++) {
		cout << result[i] << " ";
	}
}