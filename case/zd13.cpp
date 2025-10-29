#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k; cin>>k;
    double n; cin>>n;
    switch(k)
    {
        case 1: cout<<"a= "<<n<<" "<<"c="<<n*sqrt(2)<<" "<<"h="<<(n*sqrt(2))/2<<" "<<"s="<<pow(n, 2)/2; break;
        case 2: cout<<"a= "<<n/sqrt(2)<<" "<<"c="<<n<<" "<<"h="<<n/2<<" "<<"s="<<pow(n, 2)/4; break;
        case 3: cout<<"a= "<<2*n/sqrt(2)<<" "<<"c="<<2*n<<" "<<"h="<<n<<" "<<"s="<<pow(n, 2); break;
        case 4: cout<<"a= "<<(2*sqrt(n))/sqrt(2)<<" "<<"c="<<2*sqrt(n)<<" "<<"h="<<sqrt(n)<<" "<<"s="<<n; break;

    }
}