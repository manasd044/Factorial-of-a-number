#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==0)
    {
        return(1);
    }
    else
    {
        return(n*fact(n-1));
    }
}

int main()
{
    int a,num;
    cout<<"Enter a number = ";
    cin>>a;
    num = fact(a);
    cout<<"Your factorial output is = "<<num;
}

