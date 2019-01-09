#include <iostream>
#include <algorithm>
#include <vector>



void ccontent_of(const std::vector<int> &v, std::string vname) {

    std::cout << vname << std::endl;
    for(auto x: v)
        std::cout << x << " ";
    std::cout << '\n';
}

void merge(std::vector<int> &arr, int p, int q, int r)
{
   
    std::vector<int> L;
    std::vector<int> R;

    std::copy(arr.begin() + p , arr.begin() + (q + 1), std::back_inserter(L));
    std::copy(arr.begin() + (q + 1), arr.begin() + (r + 1), std::back_inserter(R));

    L.push_back(std::numeric_limits<int>::max());
    R.push_back(std::numeric_limits<int>::max());

    int i = 0, j = 0;
    for(int k = p; k <= r; k++)
    {
        if(L.at(i) <= R.at(j))
        {
            arr.at(k) = L.at(i);
            i = i + 1;
        }
        else{
            arr.at(k) = R.at(j);
            j = j + 1;
        }
    }

}

void merge_sort(std::vector<int> &v, int p, int r)
{
    if(p < r){
        int middle = (p + r) / 2;
        merge_sort(v, p , middle);
        merge_sort(v, middle + 1, r);
        merge(v, p, middle, r);
    }
}
int main()
{

    std::vector<int> v {8,6,4,10,2,5,7,3,1,9};
    merge_sort(v, 0, 9);
    ccontent_of(v, "vector v: ");
    return 0;
}
