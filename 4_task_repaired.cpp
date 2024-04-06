#include <iostream>
#include <vector>

int main()
{
int positive = 0;
int negative = 0;
  
std::vector<int> vec = {-100, -50, -5, 1, 10, 15};
  for (int i = 0; i < vec.size(); i++)
    {
      if(vec[i] > 0)
      {
        positive = i;
        break;
      }
      
    }
  for (int j = vec.size() - 1; j >= 0; j--)
    {
      if(vec[j] < 0)
      {
        negative = j;
        break;
      }
      
    }
  std::cout << negative << " " << positive << "\n";
  
   for (int i = 0; i < vec.size(); )
     {
       if(abs(vec[negative]) < vec[positive])
         
         {
           std::cout << vec[negative] << " ";
           negative--;
         }
       else
       {
         std::cout << vec[positive] << " ";
         positive++;
       }
       i++;
     }

  std::cout << "---Nu, YoPRST, zarabotalo! Spasibo za podskazku! \n";
  }
