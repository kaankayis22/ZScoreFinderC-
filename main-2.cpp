#include <iostream>
using namespace std;

int main() {
double mean = 0;
double zscore = 0;
double value = 0;
double sd;
int option=0;
double answer=0;

cout << "Would you like to find Z-Score, or find X? \nEnter 1 for Z-Score\nEnter 2 for X: " << endl;
cin>>option;

if(option==1){
  cout<<"What is the X value: ";
  cin>>value;
  cout << "\n\n";
  cout << "What is the mean: ";
  cin>>mean;
  cout << "\n\n";
  cout << "What is the Standard Deviation: ";
  cin>>sd;
  cout << "\n\n";

answer = (value-mean)/sd;

cout << "The answer is " << answer << "!";

}
if(option==2){
cout<<"What is the Z value: ";
  cin>>value;
  cout << "\n\n";
  cout << "What is the mean: ";
  cin>>mean;
  cout << "\n\n";
  cout << "What is the Standard Deviation: ";
  cin>>sd;
  cout << "\n\n";

  answer = mean+(value*sd);

cout << "The answer is " << answer << "!";
}



}