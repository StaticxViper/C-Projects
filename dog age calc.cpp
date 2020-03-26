#include <iostream>

int main() {
  
  //Declares dog age
  int dog_age = 8;
  //Year variables, first 2 years of a dogs life = 21 human years
  int early_years = 21;
  int later_years = 0; 
  int human_years = 0;
  //Each following years counts as 4 human years
  //Takes dogs age, subtracts 2, and then multiplies it by 4, then stores the number in later_years
  later_years = (dog_age - 2) * 4;
  
  human_years = early_years + later_years;
  
  std::cout << "My name is Max! Ruff ruff, I am " << human_years << " years old in human years.";
  
  return 0;
}