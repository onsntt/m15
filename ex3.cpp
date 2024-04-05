#include <iostream>
#include <vector>

int main()
{
std::vector<int> vec = {7,1,5,4,6,3};
int maxProfit = 0;
int minPrice = vec[0];
for (int i = 0; i < vec.size(); i++)
    {
      if (vec[i] < minPrice)
      
        minPrice = vec[i];
      
    
        if (maxProfit < vec[i] - minPrice)
           
            maxProfit = vec[i] - minPrice;
           



    }

    std::cout << maxProfit << "\n";

}