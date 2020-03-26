#include <iostream>
#include <vector>
#include <string>

int main() {
  //String input
  std::string input= "hi, human\n";
  //Tested vowels without "y"
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  //Vector with vowels found in input
  std::vector<char> result = {};
  
  //For loop to traverse input by each char
  for (int i = 0; i < input.size(); i++) {
    //For loop to run each char from input, tot see if it matches vowels
    for (int j = 0; j < vowels.size(); j++) {
      //If char is a vowel, then its added to result
      if (input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
    }
    //e and u should be doubled, so it checks if the char is e or u
    if (input[i] == 'e' || input[i] == 'u') {
    result.push_back(input[i]);
    }
  }
  
  for (int x = 0; x < result.size(); x++) {
    std::cout << result[x];
  }  
}