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
  	virtual bool		check_avg();
  	void			sell_all();
  	motherboard(int, int);
  	~motherboard(){};
 protected:
  	motherboard() {};
  	std::list<int>		action;
  	std::list<int>		avg; //Moyenne
  	int 			days;
  	int 			current_days;
  	unsigned long 			dollars;
};

#endif //TRADE_MOTHERBOARD_H
