#include<iostream>
using namespace std;
int main()
{
  double A, B, C;
  cin>>A>>B>>C;
  cout<<abs(C-A)<<endl;
  cout<<abs(B-C)<<endl;
  cout<<abs(C-A)*abs(B-C);
}