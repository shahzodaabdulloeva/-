#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c, V, S;
    cout<<"¬ведите длина параллелепипеда а:" ;
    cin>>a;
    cout<<"¬ведите ширина параллелепипеда b:" ;
    cin>>b;
    cout<<"¬ведите высота параллелепипеда c:" ;
    cin>>c;
    V=a*b*c;
    S=2*(a*b+b*c+a*c);
    cout<<"ќбъем параллелепипеда равен :"<< V<<endl; 
    cout<<"ѕлощад параллелепипеда равен :"<< S<<endl;

}