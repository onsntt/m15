#include <iostream>
#include <vector>

int main() {

std::vector<int> vec = {1,1,1,2,3,5,5,5,1,5,6,4 };


for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] != -1)
    {
        for (int j = i + 1; j < vec.size(); j++)
          if (vec[j] != -1)
          {
          {
            if (vec[j] == vec[i])
            {
                vec[j] = -1;
                std::cout << vec[j] << " ";
            }
          }
          }

    }
  }
int res = 0;
for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] != -1)
    {
        res += 1;
    }
    
  }
std::cout << res << "\n";

}