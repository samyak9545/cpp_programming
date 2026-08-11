#include<iostream>
using namespace std;

void comp_add(int r1, int i1,int r2,int i2 )
{
    cout<<"sum = "<<(r1+r2)<<"+"<<(i1+i2)<<"i"<<endl;
}

void comp_sub(int r1, int i1,int r2,int i2)
{
    cout<<"sub = "<<(r1-r2)<<"+"<<(i1 -i2)<<"i"<<endl;

}

int main()
{
    int r1,i1,r2,i2;
    cout<<"Enter the first complex number(real imag):";
    cin>>r1>>i1;

    cout<<"Enter the second complex nummber(real imag):";
    cin>>r2>>i2;

    comp_add(r1,i1,r2,i2);
    comp_sub(r1,i1,r2,i2);

    return 0;
}


