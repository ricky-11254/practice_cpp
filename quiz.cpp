#include <iostream>
using namespace std;
float area(float lengthmtr, float widthmtr);
main()
{
    cout <<endl;
    return ;
}
float convert(int m, int f)
{
    float feetlength;
    float feetwidth;
    float lengthmtr;
    float widthmtr;
    cout<<"Enter the length in feet:";
    cin>>feetlength;
    cout<<"Enter the width in feet:";
    cin>>feetwidth;
    lengthmtr =  feetlength * 0.3;
    widthmtr = feetwidth * 0.3;
    cout<<"Area of the land = "<< lengthmtr * widthmtr;
}
