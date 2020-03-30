#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <algorithm>
clock_t start_time, end_time;
double excution_time;

using namespace std;

bool myfunction (int i,int j) { 
	return ( i < j ); 
}

int main(void) {
	std::vector<int> vec;
//	std::vector<int>::iterator itr;
	start_time = clock();
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(40);
	vec.push_back(30);
	vec.push_back(5);
	sort(vec.begin(), vec.end());
	for(auto itr = vec.begin(); itr != vec.end(); ++itr) {
		std::cout << *itr << " ";
	}
	cout << '\n';
//	size explain the number of elements this vector has
	cout << (int) vec.size() << std::endl;
//	capacity explain how much memory space this vector is allocated 
	cout << (int) vec.capacity() << std::endl;
	end_time = clock();
	excution_time = (double)(end_time - start_time);
	printf("수행 시간 : %lf\n", excution_time);
	return 0;
}







