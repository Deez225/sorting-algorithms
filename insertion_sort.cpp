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
void insertion_sort(std::vector<T> &arr, uint left, uint right){
	 for(uint j = left + 1; j <= right; j++){
		 T key = arr[j];
         int i = j - 1;
         
         while(i >= 0 && key < arr[i]){
			   _swap(arr[i + 1], arr[i]);
			   i = i - 1;
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
    std::cout << "Begin:\n";
    ccontent_of(arr);
    std::cout << "Insertion Sort\n";
    insertion_sort(arr,0,9);
    ccontent_of(arr);
    std::cout << "End!\n";
    return 0;
}
