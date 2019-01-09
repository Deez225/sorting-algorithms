#include <iostream>
#include <vector>

typedef unsigned int uint;
template <typename T>
void _swap(T &a, T &b){
   T temp = a;
        a = b;
        b = temp;
}

template<typename T>
void selection_sort(std::vector<T> &arr, uint left, uint right){
	 
     for(uint i = left; i <= right; i++){
         T minT = arr[i];
         uint minTIndex = i;
        for(uint j = i + 1; j <= right; j++){
			if(arr[j] < minT)
			   minTIndex = j;
		}
		_swap(arr[i],arr[minTIndex]);
     }
}

template <typename T>
void ccontent_of(std::vector<T> arr){
	 for(T x : arr)
         std::cout << x << " ";
     std::cout << "\n";
}

int main()
{
	std::vector<int> arr{9,8,7,6,5,4,3,2,1,0};
    std::cout << "Begin\n";
	ccontent_of(arr);
    std::cout << "Selection sort: \n";
    selection_sort(arr,0,9);
    ccontent_of(arr);
    std::cout << "End!";
	return 0;
}
