//
// Created by thauvi_a on 3/1/17.
//

#ifndef TRADE_WORK_OUT_H
#define TRADE_WORK_OUT_H

#include "motherboard.h"

class 		compute{
 public:
  compute(){};
  ~compute(){};
  int		perc_avg();
  int 		perc__avg();
  bool 		variance();

 private:
  motherboard	*mit;
};

#endif //TRADE_WORK_OUT_H
