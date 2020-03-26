#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));
  int answer = std::rand() % 10;
  
  //Your future is here
  std::cout << "MAGIC 8 BALL: \n";
  
  std::rand();
  std::rand();
  std::rand();
  
  if (answer == 0) {
    std::cout << "It is certain.";
  }
  else if (answer == 1) {
    std::cout << "Maybe...";
  }
  else if (answer == 2) {
    std::cout << "Naaaaah.";
  }
  else if (answer == 3) {
    std::cout << "What what did you say again?";
  }
  else if (answer == 4) {
    std::cout << "Yeah, sounds about right.";
  }
  else if (answer == 5) {
    std::cout << "YES!";
  }
  else if (answer == 6) {
    std::cout << "NO!";
  }
  else if (answer == 7) {
    std::cout << "No hablo inglés.";
  }
  else if (answer == 8) {
    std::cout << "I don't feel like answering.";
  }
  else {
    std::cout << "Very doubtful.";
  }
}