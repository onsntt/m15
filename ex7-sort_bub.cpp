#include <iostream>
#include <vector>

//sortirovka puzyrkom

int main()
{

    std::vector<int> vec = {7, 1, 5, 6, 4, 3, 20, -7, 50, 4, 5, 105,2};

for (int i = 0; i < vec.size(); i++)
// сколько циклов i прошло, столько самых больших чисел уже стоят на своих местах, а значит, их уже не надо трогать
//поэтому в следующей строке дополнительно вычитаем i из количества оставшихся элементов
 {
  for (int j = 0; j < vec.size() - 1 - i; j++)
  {
    if (vec[j]> vec[j + 1])
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
