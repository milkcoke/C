
#include <array>
#include <iostream>

// template default parameter setting	
template <typename T, int num = 5>
T add_num(const T& param) {
	return param + num;
}
void print_array(const std::array<int, 5>& arr){
	for(auto& i : arr) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}
int main(){
//	std::array<int, 5> arr= {1, 2, 3, 4, 5};
//	
//	for(auto& i : arr) {
//		std::cout << i << " ";
//	}
//	std::cout << "arr is empty? " << (arr.empty() ? "yes" : "no") << std::endl;
//	print_array(arr);
//	std::cout << std::endl;
	std::cout<< add_num('d') << std::endl;
	return 0;
}
