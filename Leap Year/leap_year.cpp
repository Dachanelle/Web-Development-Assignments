#include <iostream>
using namespace std;

int main() {
  int year, year1, year2;
  //Input year from user
  cout << "Input the year \n";
  cin >> year;
  year1 = year;
  year2 = year;

  if (year >= 1000 && year <= 9999){
  
    //Tests divisibility
    year= year/4;
    year1 = year1/100;
    year2 = year2/400;

    //Determines if the years are evenly divisible 
    year= year%2;
    year2 = year2%2;
    year1 = year1%2;

    //Tests if the year is a leapyear and outputs the result 
    if(year ==0 || (year1==0 && year2 ==0) || year2 ==0){
      cout << " Is a leap year.";
    }else {
      cout << "Is not a leap year";
    }

  }else {
    cout << "Invalid year!";
  }
  
  
}
