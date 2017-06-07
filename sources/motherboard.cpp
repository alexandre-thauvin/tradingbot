//
// Created by thauvi_a on 2/27/17.
//

#include "motherboard.h"

void motherboard::refresh(){
  fill_avg();
}

void motherboard::fill_avg() {
  int	i;
  int	avg = 0;
  int	u = this->current_days - 6;
  std::list<int>::const_iterator	it = this->action.begin();
  for (i = 0 ; i < this->current_days - 1 ; i++)
    it++;
  for (i = this->current_days ; i > u ; i--){
    avg += *it;
    it--;
  }
  this->avg.push_back(avg / 5);
}

motherboard::motherboard(int dollars, int days) {
  this->dollars = dollars;
  this->days = days;
  this->current_days = 1;
}

void motherboard::setAction(int action) {
  this->action.push_back(action);
}

int motherboard::getCurrent_Days() {
  return (this->current_days);
}

bool motherboard::check_avg()
{
  static int 	i = 0;

  std::list<int>::const_iterator	it = this->avg.begin();
  std::list<int>::const_iterator	ite = this->action.begin();
  for(int u = 0 ; u < this->current_days - 1 ; u++) {
    ite++;
  }
  for(int u = 0 ; u < i ; u++) {
    it++;
  }
  if (*it > *ite)
    return true;
  i++;
  return false;
}

void motherboard::sell_all()
{
  this->dollars -= dollars;
  std::cout << "sell " << dollars << std::endl;
}

void motherboard::setCurrent_Days() {
  this->current_days++;
}

void motherboard::choice() {
  std::list<int>::const_iterator	it = this->action.begin();

  this->refresh();
  for (int i = 0; i < this->current_days - 1; i++) {
    it++;
  }
  if (this->current_days < 10)
  {
    std::cout << "wait" << std::endl;
    return ;
  }
  else
  {
    if (action.back() > avg.back())
      sell();
    else
      buy();
  }
}

int motherboard::getTotal_Days()
{
  return (days);
}

void motherboard::sell()
{
  if (this->dollars - (0.15 * 100 * this->dollars) <= this->avg.back())
  {
    this->dollars -= (this->action.back() - (0.0015 * this->action.back()));
    std::cout << "sell " << current_days << std::endl;
  }
  else
    std::cout << "wait" << std::endl;
}

void motherboard::buy()
{
  if (this->dollars - (0.15 * 100 * this->dollars) >= this->avg.back())
  {
    this->dollars += (this->action.back() - (0.0015 * this->action.back()));
    std::cout << "buy " << current_days << std::endl;
  }
  else
    std::cout << "wait" << std::endl;
}
