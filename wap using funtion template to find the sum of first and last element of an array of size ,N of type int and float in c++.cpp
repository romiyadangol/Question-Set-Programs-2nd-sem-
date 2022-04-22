//wap using funtion template to find the sum of first and last element of an array of size ,N of type int and float in c++
#include <iostream>
using namespace std;

template <typename T>
T sum_firstlast(T arr[], int n)
{
    T sum;
    sum = arr[0] + arr[n - 1];
    return sum;
}

int main()
{
    int i_arr[] = {1,2,3,4,5};

    float f_arr[] = {1.1,2.2,3.3};
  
    cout<<"Result of integer array = "<<sum_firstlast<int>(i_arr, 5)<<endl;
    cout<<"Result of float array = "<<sum_firstlast<float>(f_arr, 3)<<endl;
    return 0;
}

