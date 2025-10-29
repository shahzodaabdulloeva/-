#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL, "russian");
   int n, m;
   cin>>m>>n;
   switch(m)
   {
    case 1: 
           switch(n)
           {
            case 6: cout<<"шестерка пики"; break;
            case 7: cout<<"семерка пики"; break;
            case 8: cout<<"восьмерка пики"; break;
            case 9: cout<<"девятка пики"; break;
            case 10: cout<<"десятка пики"; break;
            case 11: cout<<"валет пики"; break;
            case 12: cout<<"дама пики"; break;
            case 13: cout<<"король пики"; break;
            case 14: cout<<"туз пики"; break;
           }
           break;
    case 2: 
           switch(n)
           {
            case 6: cout<<"шестерка трефы"; break;
            case 7: cout<<"семерка трефы"; break;
            case 8: cout<<"восьмерка трефы"; break;
            case 9: cout<<"девятка трефы"; break;
            case 10: cout<<"десятка трефы"; break;
            case 11: cout<<"валет трефы"; break;
            case 12: cout<<"дама трефы"; break;
            case 13: cout<<"король трефы"; break;
            case 14: cout<<"туз трефы"; break;
           }
           break;case 3: 
           switch(n)
           {
            case 6: cout<<"шестерка бубны"; break;
            case 7: cout<<"семерка бубны"; break;
            case 8: cout<<"восьмерка бубны"; break;
            case 9: cout<<"девятка бубны"; break;
            case 10: cout<<"десятка бубны"; break;
            case 11: cout<<"валет бубны"; break;
            case 12: cout<<"дама бубны"; break;
            case 13: cout<<"король бубны"; break;
            case 14: cout<<"туз бубны"; break;
           }
           break;case 4: 
           switch(n)
           {
            case 6: cout<<"шестерка червы"; break;
            case 7: cout<<"семерка червы"; break;
            case 8: cout<<"восьмерка червы"; break;
            case 9: cout<<"девятка червы"; break;
            case 10: cout<<"десятка червы"; break;
            case 11: cout<<"валет червы"; break;
            case 12: cout<<"дама червы"; break;
            case 13: cout<<"король червы"; break;
            case 14: cout<<"туз червы"; break;
           }
           break;
   }
}