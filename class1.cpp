//class exapmle
#include <iostream>
using namespace std;
class CRectangle{
	int x, y;
	public:
		void setvalues(int, int);
		int area () {return(x * y);
		}
};
void CRectangle::setvalues(int a, int b){
	x = a;
	y = b;
}

int main(){
	CRectangle rect;
	rect.setvalues(3, 4);
	cout<<"area: "<<rect.area();
	return 0;
}
