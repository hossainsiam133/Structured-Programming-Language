#include <iostream>
using namespace std;
int factorial(int a)
{
    int f;
    if(a==0 || a==1) return 1;
    f=a*factorial(a-1);
    return f;
};
int main()
{
    int n;
    cin >> n;
    double fact = factorial(n);
    cout<<"Factorial of "<<n<<" is :"<<fact;
}
