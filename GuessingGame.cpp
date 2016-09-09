#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv){
  srand(time(NULL));
  int number = rand() %101;
  int guess = -1;
  int guessCount = 1;
  cout << "Im thinking of a number between 0 and 100" << endl;
  cout << "Try to guess it!" << endl;
  while(guess != number){
    cin >> guess;
    if (guess < number){
      cout << "That number is lower than mine" << endl;
    }
    else if (guess > number){
      cout << "That number is higher than mine" << endl;
    }
    else{
      cout << "You got it" << endl;
      cout << "It took you  " << guessCount << " tries" << endl; 
    }
    guessCount++;
  }
}
