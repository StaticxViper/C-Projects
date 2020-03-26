/*
Rock, Paper, Scissors
*/
#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  
  int computer = rand() % 3 + 1;
  int user = 0;
  
  
  //Game
  std::cout << "------------------------\n";
  std::cout << " Rock, Paper, Scissors! \n";
  std::cout << "------------------------\n";
  
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  
  std::cout << "shoot! ";
  std::cin >> user;
  
  //Game Logic
  if (user == 1 && computer == 3) {
    std::cout << "User won! Rock beats Scissors!\n";
  }
  else if (user == 1 && computer == 2) {
    std::cout << "Computer won! Paper beats Rock!\n";
  }
  else if (user == 2 && computer == 3) {
    std::cout << "Computer won! Scissors beats Paper!\n";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "User won! Paper beats Rock!\n";
  }
  else if (user == 3 && computer == 2) {
    std::cout << "User won! Scissors beats paper!\n";
  }
  else if (user == 3 && computer == 1) {
    std::cout << "Computer won! Rock beats Scissors!\n";
  }
  else if (user == computer) {
    std::cout << "It's a tie! Play again!\n";
  }
  else {
    std::cout << "Error, try again.\n";
  }
}