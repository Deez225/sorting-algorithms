

#include <iostream>
#include <vector>


template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}



void maxipify(std::vector<T> &arr, const int root, const int length)
{

    int leftChild = root * 2 + 1;
    int rightChild = root * 2 + 2;


    int max_index = root;
    if(leftChild < length && arr[leftChild] > arr[max_index])
        max_index = leftChild;
    if(rightChild < length && arr[rightChild] > arr[max_index])
        max_index = rightChild;
    if(root != max_index)
    {
        swap(arr[root], arr[max_index]);
        maxipify(arr, max_index, length);
    }
}

template <typename T>
void heapsort(std::vector<int> &v, const int root, const int length)
{
    for(int i = (length / 2); i >= root; i--) //in scripting language use floor fonction because c++ auto cast length / 2
        maxipify(v, i, length);

}

int main()
{
  
  std::vector<int> v = {4, 16, 3, 9, 5, 25, 1};

    heapsort(v, 2, 6);

    for(auto x : v)
        std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
