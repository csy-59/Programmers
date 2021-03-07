#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int n) {
	long long num = n;
	int count = 0;
	while (true) {
		if (count > 500)
			return -1;

		if (num == 1)
			return count;

		if (num % 2 == 0) {
			num /= 2;
			count++;
		}
		else if(num%2 == 1) {
			num = num * 3 + 1;
			count++;
		}
	}
}

int main() {
	int num = 626331;
	cout << solution(num) << endl;
	return 0;
}