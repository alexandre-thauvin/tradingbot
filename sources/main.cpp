
#include <trade.h>

Trade::Trade()
{
  _totaldays = 0;
  _sell = 0;
  _buy = 0;
  _action = 0;
  this->setMoney();
  this->setTotalDays();
}

Trade::~Trade()
{
}

void		Trade::setMoney()
{
  std::cin >> _money;
}

void		Trade::setTotalDays()
{
  std::cin >> _totaldays;
}

void		Trade::setAction()
{
  std::cin >> _nbActions;
}

int		Trade::getDay() const
{
  return (this->_log.back());
}

int		Trade::getPrevDay() const
{
  return (this->_log[this->_log.size() - 2]);
}

int		Trade::getHistoryLength() const
{
  return (this->_log.size());
}

std::string	Trade::getAction() const
{
  return (this->_nbActions);
}

void		Trade::nextDay()
{
  this->_totaldays++;
}

void		Trade::addDayValue(std::string value)
{
  _log.push_back(std::stoi(value));
}

bool		Trade::Sell()
{
  if (getPrevDay() > getDay())
  {
    _buy= 0;
    _sell++;
  }
  if (this->_sell >= 3 && _action > 0)
  {
    _action--;
    _money += getDay();
    return (true);
  }
  return (false);
}

bool		Trade::Buy()
{
  if (getPrevDay() < getDay())
  {
    _sell = 0;
    _buy++;
  }
  if (this->_buy >= 5 && this->_money >= getDay())
  {
    _action++;
    _money -= getDay();
    return (true);
  }
  return (false);
}

void		Trade::do_Action()
{
  if (getHistoryLength() > 1 && Sell())
    std::cout << "sell " << 1 << std::endl;
  else if (getHistoryLength() > 1 && Buy())
    std::cout << "buy " << 1 << std::endl;
  else
    std::cout << "wait" << std::endl;
}

int             main()
{
  Trade		b;

  b.setAction();
  while (b.getAction() != "--end--")
  {
    b.addDayValue(b.getAction());
    b.do_Action();
    b.nextDay();
    b.setAction();
  }
  return (0);
}