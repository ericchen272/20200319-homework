#include <iostream>
using namespace std;
int main() {
  int chinesesum = 0;
  int englishsum = 0;
  int mathsum = 0;
  int historysum = 0;
  int sciencesum = 0;

  cout<<"請輸入多少人考試";
  
  int people = 0;
  cin >> people;
  int x[5][people];
  for(int i = 0;i < people;i++){
  cout<<"輸入國文成績";
  cin>>x[0][i];
  int chiScore =x[0][i];
  chinesesum += x[0][i];

  cout << "輸入英文成績";
  cin >> x[1][i];
  int engScore = x[1][i];
  englishsum += x[1][i];

  cout << "輸入數學成績";
  cin >> x[2][i];
  int mathScore = x[2][i];
  mathsum += x[2][i];

  cout << "輸入社會成績";
  cin >> x[3][i];
  int historyScore = x[3][i];
  historysum += x[3][i];

  cout << "輸入自然成績";
  cin >> x[4][i];
  int sciScore = x[4][i];
  sciencesum += x[4][i];

  int average = 0;
  average = (x[0][i]+x[1][i]+x[2][i]+x[3][i]+x[4][i])/5;
  cout << "student" << i+1 << "平均為"<< average << endl;
  }


  cout << "國文總平均為" << chinesesum/people << endl;
  cout << "英文總平均為" << englishsum/people << endl;
  cout << "數學總平均為" << mathsum/people << endl;
  cout << "社會總平均為" << historysum/people << endl;
  cout << "自然總平均為" << sciencesum/people << endl;
}