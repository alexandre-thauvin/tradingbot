//
// Created by thauvi_a on 2/27/17.
//

#ifndef TRADE_MOTHERBOARD_H
#define TRADE_MOTHERBOARD_H

#include <iostream>
#include <list>

class		motherboard{
 public:
  	void 			refresh();
  	void 			fill_avg();
  	void 			setAction(int);
  	void 			setCurrent_Days();
  	void 			choice();
  	void 			sell();
  	void 			buy();
  	int 			getCurrent_Days();
  	int 			getTotal_Days();
  	void			sell_all();
  	motherboard(unsigned long, int);
  	~motherboard(){};
 protected:
  	motherboard() {};
  	std::list<int>		action;
  	unsigned int		avg;//Moyenne
  	int 			days;
  	int 			current_days;
  	unsigned long 			dollars;
};

#endif //TRADE_MOTHERBOARD_H
