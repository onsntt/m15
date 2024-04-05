#include <iostream>
#include <vector>

int main()
{

    std::vector<int> vec = {2, 7, 11, 15};
    int wanted = 9;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == wanted)
            {
                std::cout << vec[i] << " + " << vec[j] << " = " << wanted << "\n";
                return 0;
            }
        }
    }
    std::cout << "Oh, you want so much!\n";
}