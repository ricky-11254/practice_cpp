// example: one calss, two objects
#include <iostream>
using namespace std;
class CRectangle{
	int x, y;
	public:
		void setvalues(int, int);
		int area() {return(x * y);
		}
};
void CRectangle::setvalues(int a, int b)
{
	x = a;
	y = b;
}
int main(){
	CRectangle recta, rectb;
	recta.setvalues(3, 4);
	rectb.setvalues(5, 6);
	cout<<"area: "<<recta.area();
	cout<<"\narea: "<<rectb.area();
	return 0;
}
