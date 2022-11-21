#include <memory>
#include <functional>
#include <iostream>
#include <algorithm>
using namespace std::placeholders;
int add(int first, int second)
{
    return first + second;
}
bool divisible(int num , int den)
{
    if(num % den == 0)
        return true;
    return false;
}
int approach_1()
{
    int arr[10] = {1,20,13,4,5,6,10,28,19,15};
    int count = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        if(divisible(arr[i], 5))
            count++;
    }
    return count;
}
int approach_2()
{
    int arr[10] = {1,20,13,4,5,6,10,28,19,15};
    return std::count_if(arr, arr + sizeof(arr)/sizeof(int) , std::bind(&divisible, _1, 5));
}
int main()
{
    int x = add(4,5);
    // Will return 9
    // What if we want to fix the first argument
    auto new_add_func = std::bind(&add, 12, _1);
    x = new_add_func(5);
    // Will return 17
    std::cout<<x<<std::endl;
    auto mod_add_func = std::bind(&add, _2, _1);
    x = mod_add_func(12, 15);
    // Will return 27
    std::cout<<x<<std::endl;
    std::function<int (int) > mod_add_funcObj = std::bind(&add, 20, _1);
    x = mod_add_funcObj(15);
    // Will return 35
    std::cout<<x<<std::endl;
    std::cout<<approach_1()<<std::endl;
    std::cout<<approach_2()<<std::endl;
    return 0;
}
