//
// Created by thauvi_a on 3/1/17.
//

#include <compute.h>

bool compute::variance() {
  // V = 1/ N (effectif total) [n1x1 + n2x2 ...] - (moyenne)2
  return false;
}

bool compute::up_act_with_avg(int i) {
  float	value;
  std::list<int>::const_iterator	it = this->mit->getAction().begin();

  for(int u = 0 ; u < i ; u++)
    it++;
  value = (float)(*it * 1.25);
  for(int u = 0 ; u < 15 ; u++)
    it--;
  if (value / 100 >= 1.25)
    return true;
  else{
    it = this->mit->getAvg().begin();
    for(int u = 0 ; u < i - 6 ; u++)
      it++;
    value = (float)(*it * 1.10);
    it--;
    if (value / 100 >= 1.10)
      return true;
  }
  return false;
}
