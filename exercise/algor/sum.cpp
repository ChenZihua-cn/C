#include <iostream>
#include <vector>
#include <algorithm>

struct StatsFn{
	int cnt = 0;
	int sum = 0;
	void operator()(int v){
		cnt ++;
		sum += v;
	}
};
int main(){
	std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	StatsFn result = std::for_each(data.begin(), data.end(), StatsFn{});

	std::cout << "Count: " << result.cnt << std::endl;
	std::cout << "Summary: " << result.sum << std::endl;
	std::cout << "Average: " << (double)result.sum / result.cnt << std::endl;

	return 0;
}
