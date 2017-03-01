//
// Created by thauvi_a on 2/27/17.
//

#include <iostream>
#include "motherboard.h"

void motherboard::refresh(){
  fill_avg();
  if (this->avg.size() >= 2)
    fill__avg();
}

void motherboard::fill_avg() {
  int	i;
  int	avg = 0;
  int	u = this->current_days - 5;
  std::list<int>::const_iterator	it = this->action.begin();
  for (i = 0 ; i < this->current_days - 1 ; i++)
    it++;
  for (i = this->current_days ; i > u ; i--){
    avg = avg + *it;
    it--;
  }
  this->avg.push_back(avg / 5);

}

void motherboard::fill__avg() {
  static int	i = 1;
  int	avg = 0;
  std::list<int>::const_iterator	it = this->avg.begin();
  for(int u = 0 ; u < i ; u++)
    it++;
  avg = avg + *it;
  it--;
  avg = avg + *it;
  this->_avg.push_back(avg / 2);
  i++;
}

motherboard::motherboard(int dollars, int days) {
  this->dollars = dollars;
  this->days = days;
  this->current_days = 1;
}

void motherboard::setDays(int days) {
  this->days = days;
}

void motherboard::setAction(int action) {
  this->action.push_back(action);
}

int motherboard::getCurrent_Days() {
  return (this->current_days);
}

bool motherboard::check_avg() {
  static int 	i = 0;
  std::list<int>::const_iterator	it = this->_avg.begin();
  std::list<int>::const_iterator	ite = this->action.begin();
  for(int u = 0 ; u < this->current_days - 1 ; u++)
    ite++;
  for(int u = 0 ; u < i ; u++)
    it++;
  if (*it > *ite)
    return true; // _avg > action
  i++;
  return false;
}

void motherboard::setCurrent_Days() {
  this->current_days++;
}

void motherboard::choice() {
  int	i = 0;
  std::list<int>::const_iterator	it = this->action.begin();
  compute	calc();

  this->refresh();
  while (i < this->current_days - 1)
    it++;
  std::cout << "[" << *it << "] -> ";
  if (this->current_days < 5)
  {
    std::cout << "wait" << std::endl;
    return ;
  }
  else {
    if (this->check_avg())
      sell();
    else
      buy();
  }
}

void motherboard::sell() {

}

void motherboard::buy() {

}

int motherboard::getDollars() {
  return (this->dollars);

}
