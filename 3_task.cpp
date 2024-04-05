#include <iostream>
#include <vector>

std::vector<int> sort(std::vector<int> vec)
{
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        int maxInd = 0;

        for (int j = 0; j <= i; j++)
            if (vec[j] > vec[maxInd])
            {
                maxInd = j;
            }

        int temp = vec[i];
        vec[i] = vec[maxInd];
        vec[maxInd] = temp;
    }
    return vec;
}
void print(std::vector<int> vec)
{
    std::cout << "Actual range of first five values is:\n";
    for (int i = 0; i< 5; i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}

int main()
{

    std::vector<int> vec(5);
    int max = 0;
    int number = 0;
    int val;
    std::cin >> val;


    while (val != -2)
    {
        if (val == -1)
        {
            if(number < 4)
            {
                std::cout << "You must enter at least 5 elements!\n";
                break;
            }
            else
            {
              std::cout << vec[4] << " is fifth value from " << number << " entered values\n";
              print(vec);
              
            }
           
        }
        else
        {
            if (number < 4)
            {
                vec[number] = val;
                
            }
            else if (number == 4)
            {
                vec[number] = val;
                vec = sort(vec);
            }
            else
            {
                
                if (val < vec[4] )
                {
                    vec[4] = val;
                    vec = sort(vec);
                }
                
                
            }

        number++;    
        }
        std::cin >> val;
    }
}