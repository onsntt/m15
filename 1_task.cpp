#include <iostream>
#include <vector>

int main()
{

    std::vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4,-10};
    int maxSum = vec[0];
    int curSum = vec[0];
    int startIndex = 0;
    int endIndex = 0;
    int startIndexCurrent = 0;

    for (int i = 1; i < vec.size(); ++i)
    {
        if (curSum < 0)
        {
            curSum = vec[i];
            startIndexCurrent = i;
        }
        else
        {
            curSum += vec[i];
        }
        if (curSum > maxSum)
        {
            maxSum = curSum;
            startIndex = startIndexCurrent;
            endIndex = i;
        }
    }
    std::cout << "Max sum: " << maxSum << "\n";
    std::cout << "Start index: " << startIndex << "\n";
    std::cout << "End index: " << endIndex << "\n";
}