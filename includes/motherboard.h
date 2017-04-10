//
// Created by thauvi_a on 2/27/17.
//

#ifndef TRADE_MOTHERBOARD_H
#define TRADE_MOTHERBOARD_H

#include <iostream>
#include <list>
//#include "compute.h"

class		motherboard{
 public:
  	void 			refresh();
  	void 			fill_avg();
  	void 			fill__avg();
  	void 			setDays(int);
  	void 			setAction(int);
  	void 			setCurrent_Days();
  	void 			choice();
  	void 			sell();
  	void 			buy();
  	std::list<int>		getAvg();
  	int 			getCurrentAction();
  	int 			getCurrentAvg();
  	std::list<int>		getAction();
  	unsigned long 			getDollars();
  	int 			getCurrent_Days();
  	virtual bool		check_avg();
  	motherboard(int, int);
  	~motherboard(){};
 protected:
  	motherboard() {};
  	std::list<int>		action;
  	std::list<int>		avg;
  	std::list<int>		_avg;
  	int 			days;
  	int 			current_days;
  	unsigned long 			dollars;
};

#endif //TRADE_MOTHERBOARD_H
