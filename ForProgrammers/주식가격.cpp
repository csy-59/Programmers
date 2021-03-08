#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	int count=0;
	for (unsigned i = 0;i < prices.size();i++) {
		count = 0;
		for (unsigned j = i + 1;j < prices.size();j++) {
			count++;
			if (prices[i] > prices[j]) 
				break;
		}
		answer.push_back(count);
	}

	return answer;
}

int main() {
	vector<int> prices;
	prices.push_back(1);
	prices.push_back(2);
	prices.push_back(3);
	prices.push_back(2);
	prices.push_back(3);
	vector<int> result = solution(prices);
	for (unsigned i = 0;i < result.size();i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}