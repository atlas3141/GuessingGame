#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main(){
  srand(time(NULL)); //sets the random seed
  int number = rand() %101; //creates the random number
  char input[2];
  int guess = -1;
  int guessCount = 1;
  bool playing = true;
  cout << "Im thinking of a number between 0 and 100" << endl;
  cout << "Try to guess it!" << endl;
  while(playing == true){ //main game loop
    cin >> guess; //asks for a number
    if (guess < number){
      cout << "That number is lower than mine" << endl;
    }
    else if (guess > number){
      cout << "That number is higher than mine" << endl;
    }
    else{
      cout << "You got it" << endl;
      cout << "It took you  " << guessCount << " tries" << endl;\
      cout << "Do you want to play again (y/n)" << endl;
      cin >> input;
      cout << input << endl;
      if(strcmp(input,"y")){ //ask if they want to play agian
	  playing = false;
      }
      else{
	cout << "Im thinking of a number between 0 and 100" << endl;
	cout << "Try to guess it!" << endl;
      }
    }
  guessCount++;
  }
}

