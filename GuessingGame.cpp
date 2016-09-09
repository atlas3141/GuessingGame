#include <iostream>

int main(int argc, char** argv){
  srand(time(NULL));
  int number = rand() %101;
  int guess = -1;
  int guessCount = 0;
  cout << "Im thinking of a number between 0 and 100" << endl;
  cout << "Try to guess it!" << endl;
}
