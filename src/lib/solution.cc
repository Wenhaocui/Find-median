#include "solution.h"
#include <iostream>
using namespace std;
double Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }

  int i,j,p;
  int n = inputs.size();
  for (i = 0; i < n; i++) 
  {
    for(j = i + 1; j < n; j++)
    if(inputs[i] > inputs[j])
    {
      p = inputs[i];
      inputs[i] = inputs[j];
      inputs[j]=p;
    }
  }

  if(n % 2 == 1)
  {
    return inputs[(n-1)/2];
  }else{ 
    double result = (double(inputs[n/2])+double(inputs[(n/2)-1]))/2;
    return result;
  }

}
