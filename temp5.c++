#include<iostream>
#include<array>
#include<cassert>
#include<vector>
int main()
{
  std::vector<int> v {1,2,3,4,5,6,7,8,9,10};
  std::vector<int>::iterator it = v.begin();
  while(it != v.end())
  {
    if (*it % 2 == 0)
       it = v.erase(it);
    else
      ++it;
  }
for(auto i:v)
 std::cout<<i<<std::endl;

assert(v.size() == 5);
}
