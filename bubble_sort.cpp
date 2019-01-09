#include <iostream>
#include <vector>

typedef unsigned int uint;
template <typename T>
void _swap(T &a, T &b){
	T temp = a;
         a = b;
         b = temp;
}

template <typename T>
void bubble_sort(std::vector<T> &arr, uint left, uint right){
     
     for(uint i = left; i < right; i++){       
  	     for(uint j = left; j < right; j++){
			if (arr[j] > arr[j + 1])
				_swap(arr[j], arr[j + 1]);
        }
     }
}

template <typename T>
void ccontent_of(std::vector<T> arr){
	 for(auto x : arr)
         std::cout << x << " ";
     std::cout << "\n"; 
}
int main()
{
	std::vector<int> arr{9,8,7,6,5,4,3,2,1,0};
    std::cout << "Begin\n";
    ccontent_of(arr);
	std::cout << "Bubble sort" << std::endl;
	bubble_sort(arr,0,9);
    ccontent_of(arr);
    std::cout << "End!";
	return 0;
}
