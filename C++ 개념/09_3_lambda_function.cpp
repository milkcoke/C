#include <iostream>
#define SWAP(a,b) do {\
	int temp = a; \
	a = b; \
	b = temp; \
} while(0)
using namespace std;

struct UP {
	bool operator() (int a, int b) const{
		return a > b;
	}
};
struct DOWN {
	bool operator() (int a, int b) const{
		return a < b;
	}
};
template <typename T>
void bubble_sort(int arr[], int size, const T& cmp_func){
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (cmp_func(arr[i], arr[j])) {
				SWAP(arr[i], arr[j]);	
			}
		}
	}
}

void print_arr(int arr[],const int size) {
	for (auto i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
}

int main(void) {
	UP up;
	DOWN down;
	int arr[10] = {5, 7, 2, 4, 6, 9, 1, 8, 10, 3};
	const int arr_size = sizeof(arr) / sizeof(int);
	bubble_sort(arr, arr_size, up);
	print_arr(arr, arr_size);
	bubble_sort(arr, arr_size, down);
	print_arr(arr, arr_size);
	bubble_sort(arr, arr_size, [](const int x,const int y)->bool {return (x > y);});
	print_arr(arr, arr_size);
	bubble_sort(arr, arr_size, [](const int x,const int y)->bool {return (x < y);});
	print_arr(arr, arr_size);	
	return 0;
}
