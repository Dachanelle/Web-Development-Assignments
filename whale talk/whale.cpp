#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

  //Whale, whale, whale
  //What have we got here?
  string whale = "turpentine and turtles";
  vector<char> vowels;
  vector<char> results;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  for(int i=0; i<whale.size(); i++){
    for(int k=0; k<vowels.size(); k++){
      if (whale[i]==vowels[k]){
        results.push_back(whale[i]);
        if(whale[i] == 'e' || whale[i]=='u'){
          results.push_back(whale[i]);
        }
      }
    }
  }
    
  
  for(int j = 0; j<results.size(); j++){
    cout << results[j];
  }

}
