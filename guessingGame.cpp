#include <iostream>
#include <stdio.h>    
#include <stdlib.h>   
#include <time.h> 
using namespace std;

int main(){
  srand(time(NULL));
  int number = rand() % 101;
  int guess = -1; 
  int guessCount = 0;
  cout << "Im thinking of a number between 0 and 100" << endl;
  cout << "Try to guess it!" << endl;
  while  (guess != number){
    cin >> guess;
    if (guess > number){
	cout << guess << " is higher than my number" << endl;
    }
    if (guess <number){
	cout << guess << " is lower than my number." << endl;
    }
    guessCount++;
  }
  cout << "You guessed my number, " << number << endl;
  cout << "It took you " << guessCount << " tries" << endl;
}
