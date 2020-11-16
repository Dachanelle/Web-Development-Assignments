#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/*
Rock paper scissors lizard spock is a gama designed to be bit more complex than the original game rock paper scissors. Rock beats scissors and lizard, Paper beats rock and spock, Lizard beats spock and paper, Spock beats scissors and rock and Scissors beat paper and lizard. 
*/

int main(){
  int choice;
  int rock =1;
  int paper =2;
  int scissors =3;
  int lizard =4;
  int spock = 5;

  srand(time(NULL));
  int computer = rand()%5 +1;

  cout << "Input your choice \n1 for Rock\n2 for Paper\n3 for Scissors\n4 for Lizard\n5 for Spock\n";
  
  cin >> choice;

  if(choice != computer){
    if((choice == 1 && computer ==3) || (choice==1 && computer == 4)){
      cout << "You Win!\n";
    }else if((choice == 2 && computer ==1) || (choice==2 && computer == 5)){
      cout << "You Win!\n";
    }else if((choice == 3 && computer ==2) || (choice==3 && computer == 4)){
      cout << "You Win!\n";
    }else if((choice == 4 && computer ==5) || (choice==4 && computer == 2)){
      cout << "You Win!\n";
    }else if((choice == 5 && computer ==3) || (choice==5 && computer == 1)){
      cout << "You Win!\n";
    }else{
      cout <<"Computer Wins!\n";
    }
  }else {
    cout <<"Its a Tie! \n";
  }
    //Debug process
   //cout << choice <<"\n" << computer;

}
