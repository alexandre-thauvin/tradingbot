//
// Created by thauvi_a on 2/27/17.
//

#include <iostream>
#include <istream>
#include <string>
#include "motherboard.h"

int 	main()
{
  unsigned long dollars;
  int nb_days;
  std::string	action;

  std::cin >> dollars;
  std::cin >> nb_days;

  motherboard	tr(dollars, nb_days);
  std::cin >> action;
  while ((action != "--end--" || action != "--END--") && tr.getCurrent_Days() < nb_days)
  {
	tr.setAction(stoi(action));
    	tr.choice();
    	tr.setCurrent_Days();
	std::cin >> action;
  }
  if (tr.getCurrent_Days() + 2 == tr.getTotal_Days())
    tr.sell_all();
  return (0);
}
