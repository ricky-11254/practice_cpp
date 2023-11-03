//example:: class constructor
#include <iostream>
using namespace std;
class CRectangle {
	int width, height;
	public:
		void setvalues(int, int);
		int area () {return(width * height);}
};
CRectangle::CRectangle (int a, int b) {
	width = a;
	height = b;
}

int main(){
	CRectangle rect(3,4);
	CRectangle rectb(5, 6);
	cout<<"area: "<<react.area();
	cout<<"area: "<<reactb.area();
	return 0;
}

