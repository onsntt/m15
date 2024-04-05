#include <iostream>
#include <vector>

int main() {

std::vector<int> vec = {7,1,5,6,4,3,20,-7,50,4,5,105};
std::vector<int> res(vec.size(), 0);

int min = vec[0];

for (int i = 0; i < vec.size(); i++)
{
    if (vec[i] < min)
    {
        min = vec[i];
    }
}
std::cout << min << "\n";
for (int i = vec.size()-1; i >= 0; i--)
{
    int maxInd = 0;

    for (int j = 0; j < vec.size(); j++)
    {
        if (vec[j] > vec[maxInd])
        {
            maxInd = j;
        }
    }

    res[i] = vec[maxInd];
    vec[maxInd] = min;
} 
for (int i = 0; i < vec.size(); i++ )
{
    std::cout << res[i] << " ";
    //std::cout << "\n ";
    //std::cout << vec[i] << " ";
}
std::cout << "\n ";
for (int i = 0; i < vec.size(); i++)
{
    //std::cout << res[i] << " ";
    // 
     std::cout << vec[i] << " ";
}
}