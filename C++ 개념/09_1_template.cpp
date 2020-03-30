
#include <iostream>
#include <string>
// keyword 'template' 이후 <typename T>
 
template <typename T>
class Vector {
	T * data;
	int capacity;
	int length;
	
	public:
//		Constructor, 꼭 복습 
	Vector(int n = 1) : data(new T[n]), capacity(n), length(0){
	}
	
	void push_back(T s) {
		if (capacity <= length) {
			T * temp = new T[capacity * 2];
			for (int i = 0; i < length; i++) {
				temp[i] = data[i];
			}
//			기존에 있던 data array는 메모리 해제시킴  
			delete[] data;
//			크기가 커진 temp가 가리키는 주소를 data에게! 
			data = temp;
			capacity *= 2;
		}
		data[length++] = s;
		
	}
//	random access through index
	T operator[](int i) {
		return data[i];
	}
	void remove(int x) { // index 'x' element erased!
		for(int i = x; i < length - 1; i++) {
			data[x] = data[x+1];
		}
		length--;
	}
	
	int size() { return length; }
	~Vector() {
		if(data) {
			delete[] data;
		}
	}
};

template <typename T>
T getMAX(T& a, T& b) {
	return a >= b ? a : b;
}

template <typename T>
//왜 auto나 int가 아닌 T를 return type으로 받으면 에러가 날까? 
auto get_arr_max(const T& arr, unsigned int size) {
	int max_index = 0;
	for(int i = 0; i < size ; i++) {
		if(arr[max_index] < arr[i]) max_index = i;
	}
// 받은거는 short array pointer (시작주소) 받고 돌려주는건 short array 도 아니고 그냥 int값임 (type 추론 불가) 
	return arr[max_index];
}

int main(void){

	int a = 10, b = 20;
	std::cout << "getMAX Result: " << getMAX<int> (a, b) << std::endl;
	std::cout << "getMAX Result: " << getMAX(a, b) << std::endl;
	short arr[10] = {5, 2, 4, 1, 3, 7, 8, 9, 10, 4};
	std::string str_arr[3] = {"ads", "fdd", "hca"};
	std::cout << "arr_max(short) result : " << get_arr_max(arr, sizeof(arr) / sizeof(short)) << std::endl;
	std::cout << "str_arr (sizeof) : " << sizeof(str_arr) / sizeof(std::string) << std::endl;
	std::cout << "arr_max(string) result : " << get_arr_max(str_arr, sizeof(str_arr) / sizeof(std::string)) << std::endl;
	return 0;
}



