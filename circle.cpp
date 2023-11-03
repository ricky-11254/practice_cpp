#include <iostream>
using namespace std;

class A
{
	float r, area;
	public:
		int circle()
		{
			cout<<"Enter radius of circle";
			cin>>r;
			area = 3.14*r*r
			cout<<"Area of circle"<<endl;
		}
};
int main()
{
	A obj;
	obj.circle();
	getch();
}
