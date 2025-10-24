#include<iostream>
using namespace std;
int main()
{
   int a, b, c;
    cin>>a>>b>>c;
    cout<<boolalpha<<((a==-b or b==-c or c==-a or -a==b or -b==c or -c==a)); 
}