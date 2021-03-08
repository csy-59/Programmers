#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2;i <= n / 2;i++) {
		if (n%i == 0)
			return false;
	}
	return true;
}

int solution(vector<int> nums) {
	int answer = 0;

	for (unsigned i = 0;i < nums.size() - 2;i++) {
		for (unsigned j = i + 1;j < nums.size() - 1;j++) {
			for (unsigned x = j + 1;x < nums.size();x++) {
				if (isPrime(nums[i] + nums[j] + nums[x]))
					answer++;
			}
		}
	}

	return answer;
}

int main() {
	vector<int> num;
	num.push_back(1);
	num.push_back(2);
	num.push_back(7);
	num.push_back(6);
	num.push_back(4);
	cout << solution(num) << endl;
	return 0;
}