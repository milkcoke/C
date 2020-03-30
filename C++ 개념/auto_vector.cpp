#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

using namespace std;

int main(void) {
	std::vector<int> vec;
	std::vector<int>::iterator itr;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(40);
	vec.push_back(30);
	vec.push_back(5);
	sort(vec.begin(), vec.end());
	for(auto itr = vec.begin(); itr != vec.end(); ++itr) {
		std::cout << *itr << " ";
	}

	cout << endl;
	
	for(auto& ele : vec) {
		cout << ele << " ";
	}
	cout << endl;
	
		return 0;
}

//	for(auto& element : vec) {
//	if (element <= 10) {
//		element = 1;	
//		}
//	}
//	cout << '\n';








