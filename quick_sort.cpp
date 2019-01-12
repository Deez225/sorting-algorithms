#include <iostream>
#include <vector>


void swap(int &a, int &b){
	 T temp = a;
          a = b;
          b = temp;
}


int partition(std::vector<int> &arr, int left, int right)
{

    int j = left--;
    while(j < right)
    {
         if(arr[j] <= arr[right])
            swap(arr[++left], arr[j]);
         j++;
    }

    swap(arr[++left], arr[right]);
    return left;
}


void quicksort(std::vector<int> &arr, int left, int right)
{
    if(left < right)
    {
        int pivot_index = partition(arr, left, right);
        quicksort(arr, left, pivot_index - 1);
        quicksort(arr, pivot_index + 1, right);
    }
}


int main()
{
    std::vector<int> v = {4, 16, 3, 9, 5, 25, 1};

    quicksort(v, 0, 7);

    for(auto x : v)
        std::cout << x << ' ';
    std::cout << '\n';
}
