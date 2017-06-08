#ifndef TRADE_H
#define TRADE_H

# include <vector>
# include <string>
# include <iostream>

class	Trade
{
 public:
  Trade();
  ~Trade();
  void			setMoney();
  void			setAction();
  void			setTotalDays();
  int			getPrevDay() const;
  int			getDay() const;
  std::string		getAction() const;
  void			nextDay();
  void			addDayValue(std::string);
  bool			Sell();
  bool			Buy();
  int			getHistoryLength() const;
  void			do_Action();

 protected:
  int			_money;
  std::string		_nbActions;
  unsigned int		_totaldays;
  std::vector<int>	_log;
  int			_buy;
  int			_sell;
  int			_action;
};

#endif //TRADE_H
