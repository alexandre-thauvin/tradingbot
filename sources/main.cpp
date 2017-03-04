//
// Created by thauvi_a on 2/27/17.
//

#include <iostream>
#include <istream>
#include <string>
#include "motherboard.h"

int 	main()
{
  int dollars;
  int nb_days;
  std::string	action;

  std::cin >> dollars;
  std::cin >> nb_days;

  motherboard	tr(dollars, nb_days);
  std::cin >> action;
  while (action != "--end--" && tr.getCurrent_Days() < nb_days){
	tr.setAction(stoi(action));
    	tr.choice();
    	tr.setCurrent_Days();
	std::cin >> action;
  }
  return (0);
}
