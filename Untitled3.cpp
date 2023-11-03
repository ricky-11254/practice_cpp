#include <iostream>
using namespace std;
class CRectangle{
	int width, height;
	public:
		void setvalues(int, int);
		int area () {return(width * height);
		}
		friend CRectangle duplicate (CRectangle);
};
void CRectangle::setvalues(int a, int b){
	width = a;
	height = b;
}
CRectangle duplicate(CRectangle rectparam){
	CRectangle rectres;
	rectres.width = rectparam.width * 2;
	rectres.height = rectparam.height * 2;
	return (rectres);
}
int main(){
	CRectangle rect, rectb;
	rectb = duplicate(rect);
	rect.setvalues(2, 3);
	cout<<rectb.area();
	return 0;
}
