#include <iostream>

int main() {
  
  double pesos, raeis, soles, dollars;
  
  std::cout << "Enter the number of Columbian Pesos: \n";
  std::cin >> pesos;
  
  std::cout << "Enter the number of Brazilian Raeis: \n";
  std::cin >> raeis;
  
  std::cout << "Enter the number of Peruvian Soles: \n";
  std::cin >> soles;
  
  //conversion rates: pesos 0.054, raeis 0.23, soles 0.3
  double pesos_conversion = 0.054;
  double raeis_conversion = 0.23;
  double soles_conversion = 0.3;
  
  dollars = (pesos_conversion * pesos) + (raeis_conversion * raeis) + (soles_conversion * soles);
  
  std::cout << "US Dollars = $" << dollars << ".\n";
  
}