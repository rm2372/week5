#include<iostream>
using namespace std;
class swapping
{
public:
    int swap(int a,int b);
    double swap(double f1,double f2);
};
int swapping ::swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
double swapping ::swap(double f1,double f2)
{
    double temp;
    temp=f1;
    f1=f2;
    f2=temp;
}
int main()
{
    int a,b;
    double f1,f2;
    cout<<"enter the integer numbers"<<endl;
    cin>>a>>b;
    cout<<"enter the float numbers"<<endl;
    cin>>f1>>f2;
    swap(a,b);
    swap(f1,f2);
    cout<<"the numbers after swappping are:"<<endl;
    cout<<a<<" "<< b<<endl;
    cout<<f1<<" "<<f2<<endl;
    return 0;
