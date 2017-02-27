//
// Created by thauvi_a on 2/27/17.
//

#ifndef TRADE_MOTHERBOARD_H
#define TRADE_MOTHERBOARD_H

#include <list>

class		motherboard{
 public:
  	void 			refresh();
  	void 			fill_avg();
  	void 			fill_value();
  	void 			fill__avg();
  	virtual bool		check_avg() = 0;
 protected:
  	std::list<int>		value;
  	std::list<int>		avg;
  	std::list<int>		_avg;
  	int 			day;

};

#endif //TRADE_MOTHERBOARD_H
