#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//Main function
int main(){

      //Allows users to use different random numbers 
      srand(time(NULL));
      int a = rand()% 10;
  

      while(a >= 0){
            string question;
            char choice;
            
            cout << "What is your question?" << endl;
            cin >> question;
           
            cout << "Magic 8-Ball says :\n";
        
            if(a==0){
              cout << "It is certain.\n";
            }else if(a==1){
              cout <<"It is decidedly so.\n";
        
            }else if(a==2){
              cout <<"Yes - definitely. \n";
              
            }else if(a==3){
              cout <<"As I see it, yes. \n";
              
            }else if(a==4){
              cout <<"You may rely on it. \n";
              
            }else if(a==5){
              cout <<"Ask again later. \n";
              
            }else if(a==6){
              cout <<"Concentrate and ask again. \n";
              
            }else if(a==7){
              cout <<"Don't count on it \n";
              
            }else if(a==8){
              cout <<"My sources say no. \n";
              
            }else if(a==9){
              cout << "Very doubtful. \n";
            }
            
            cout << "Would you like to ask again? Y/y for Yes, and N/n for no." << endl;
            //cin >> choice;
            cin >> choice;
           // a= a-(a+1);
           // cout << choice;
            if (choice =='Y' || choice == 'y'){
              a = rand()%10;
              //continue;
            }else if (choice == 'N' || choice =='n'){
              a= a-(a+1);
              cout << "Thank you for using the 8-ball. \n";
            }
        }
      

    }
