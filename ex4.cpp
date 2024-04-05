#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {7, 1, 5, 4, 6, 3};
 int profit = 0;

 for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] - vec[i -1] > 0)
        {
            profit += vec[i] - vec[i - 1];
        }
    }

std::cout << profit;


}