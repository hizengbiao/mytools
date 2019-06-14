//去除代码中每行的第一个行标
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main1(){
  char *p1 = "a.txt";
  char *p2 = "b.txt";
  string line;
  fstream f(p1);
  fstream f2(p2);
  int a;
  while (!f.eof()){
    f >> a;
    getline(f, line);
    cout << line << endl;
    f2 << line << endl;
  }
  return 0;
}