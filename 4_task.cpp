#include <iostream>
#include <vector>
int main()
{
    std::vector<int> vec = {1,-100, -50, -5, 1, 10, 15, -16, 2};
    for (int i = 0; i < vec.size(); i++)
        //kazhdoe po poryadku
    {
        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (abs(vec[j]) > abs(vec[j + 1]))
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
}