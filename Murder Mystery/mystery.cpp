#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//A Murder Mystery
int main(){
  string name, suspect1, suspect2, culprit, innocent1;
  char choice1, choice2, choice3;

  cout << "What is your name?\n";
  cin >> name;
  cout << "\n\n";

  cout << "Welcome to Jack's Murder Mystery!\n Jack was a rich,friendly 40 year old male who lived in Creek Ville. Jack's wife said she came home from a business trip and found gim stabbed to death in their bed." << name << ", you are the lead detective on the case. Use clues to determine who the killer is.\n";

  cout << " (o) (o)\n";
  cout << "   ___   \n";

  cout << "Ready for adventure!\n";

  cout <<"The three suspect are Jack's wife, Hayley, their cook and their next door neighbor,Janet.\nThey all gave alibis as to where they allegedly were. Their statements were as follow:\nHayley: \"I was on a business trip, I last spoke to my husband last night before I turned my phone off and caught a plane this morning.\" \nThe cook(James): \"I was making lunch when I heard Miss Hayley scream this afternoon.\" \nJanet: \"I went over early this morning before breakfast to say hi to Jack, his cook let me in. He was fine when I saw him.\n ";

  cout <<"With the previous statements heard, who do you think is most liekly to be innocent?\n";
  cout << "a) Hayley\n";
  cout << "b) James\n";
  cout << "c) Janet\n";

  cin >> choice1;
  int n = 1;
  while(n>0){
    if(choice1 == 'a'){
      innocent1 = "Hayley";
      suspect1 = "James";
      suspect2 = "Janet";
     n= n-1;
    }else if(choice1 =='b'){
      suspect1 = "Hayley";
      suspect2 = "Janet";
      innocent1 = "James";
      n=n-1;
    }else if(choice1 == 'c'){
      suspect1= "Hayley";
      suspect2 = "James";
      innocent1 = "Janet";
      n=n-1;
    }else {
      cout <<"Wrong input, please select again.\n";
      //continue;
      n=n;
      cin>>choice1;
    }
    //cin>>choice1;
  }
  cout <<name <<": " << innocent1  << " you are free to go." << suspect1 << " and " << suspect2 << " please remain with me.\n";
  cout << name << ": Your stories are still a little too vague, you both need to go in more depth.\nExplain yourselves!\n\n";
  
  if(suspect1 =="Hayley" && suspect2 == "James"){
      cout << suspect1 <<": After I found my husband I screamed and the cook brought the phone to me and I called the police straight away.\n";
      cout << suspect2 << ": After hearing the Mrs. scream I ran upstairs with the phone and the Mrs. called the police.\n";
  }else if(suspect1 == "Hayley"&& suspect2 == "Janet"){
       cout << suspect1 <<": After I found my husband I screamed and the cook brought the phone to me and I called the police straight away.\n";
       cout << suspect2 <<": I was in the bathroom downstairs, after I heard the scream, I ran upstairs to see Hayley over the body.\n";
  }else {
      cout <<"James: After hearing the Mrs. scream I ran upstairs with the phone and the Mrs. called the police.\n"; 
      cout <<"Janet: I was in the bathroom downstairs, after I heard the scream, I ran upstairs to see Hayley over the body.\n";
  }
  
  cout << "After hearing the final statements, who do you think is telling the truth?\n";
  cout <<"a)" << suspect1 <<endl;
  cout <<"b)" << suspect2 << endl;
  
  cin >> choice2;
  int k = 1;
  
  while(k >0){
      if(choice2 == 'a'){
          culprit = suspect2;
          k=k-1;
      }else if(choice2 == 'b'){
          culprit = suspect1;
          k=k-1;
      }else{
          cout <<"That person is not a suspect, try again";
          k = k;
          cin >> choice2; 
      }
      
      cout <<"You have the killer to now be " << culprit <<". Do you wish to keep your answer or do you want to change your mind?\nIf yes select y/Y if no select n/N.\n";
      cin >> choice3;
      
      if(choice3 =='y' || choice3 =='Y'){
          k = 1;
          cout <<"Choose again, a or b";
          cin >> choice2;
      }else if(choice3 =='n' || choice3== 'N'){
          cout <<"Your final answer is that " << culprit << " is the killer.\n";
          k=k-1;
      }
  }
  
  if (culprit == "Hayley"){
      cout << "Hayley was not the killer, you have been sued and has lost your job!\n";
  }else if(culprit == "Janet"){
      cout <<"Janet was not the killer, the killer got away and is now on the loose. You have lost your job.\n";
  }else{
      cout <<"Congratulations! James is the killer, he heard Hayley scream, how did he know to just bring a phone to her if he didn't already know that a dead body was in the room? You have been promoted.\n";
  }
  
  cout << "THANKS FOR PLAYING!";

  
}
