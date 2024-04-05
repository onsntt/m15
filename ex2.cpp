#include <iostream>
#include <vector>

int main()
{

    std::vector<int> vec = {1,2,2,3,3,3,4,4,4,4,3,3,3, 5};
    std::vector<int> temp(vec.size(), 0);

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != -1)
        {
            for (int j = i + 1; j < vec.size(); j++)
                {
                        if (vec[j] == vec[i])
                        {
                            vec[j] = -1;
                            temp[i] += 1;
                            //std::cout << vec[j] << " ";
                        }
                }
                
        }
    }
    
    int maxInd = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] > temp[maxInd])
          {
            maxInd = i;
          }
    }
    std::cout << vec[maxInd] << "\n";
}