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
uint _partition(std::vector<T> &arr, int left, int right){
	 
	 int j = left - 1;
     uint  pivot = right;
     for(int i = left; i < right; i++){
		 if(arr[i] <= arr[pivot]){
		 	j = j + 1;
            _swap(arr[i], arr[j]);
		 }	
     }
	 _swap(arr[j + 1], arr[pivot]);
     return j + 1;
}


template <typename T>
void quick_sort(std::vector<T> &arr, int left, int right){
	 if(left < right){
		int q = _partition(arr, left, right);// From begin to end.
        quick_sort(arr, left, q - 1);  // From begin to pivot.
        quick_sort(arr, q + 1, right); // From pivot to end.
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
	std::vector<int> arr{0,4,6,3,2,10,9};
	std::cout << "Begin\n";
    ccontent_of(arr);
    std::cout << "Quicksort\n";
    quick_sort(arr,0,6); 
    ccontent_of(arr);
	std::cout << "End!\n";
	return 0;
}
