#include <iostream>
#include <vector>


//sortirovka vyborom




int main()
{

    std::vector<int> vec = {7, 1, 5, 6, 4, 3, 20, -7, 50, 4, 5, 105, 2};

        for (int i = vec.size() - 1; i >= 0; i--)
        {
            int maxInd = 0;

            for (int j = 0; j <=i; j++)
                if (vec[j] > vec[maxInd])
                {
                    maxInd = j;
                }

                int temp = vec[i];
                vec[i] = vec[maxInd];
                vec[maxInd] = temp;

                
        }
for (int i = 0; i < vec.size(); i++)
{
    std::cout << vec[i] << " ";
}

}