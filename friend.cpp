#include <iostream>
using namespace std;
class CRectangle{
	int width, height;
	public:
		void setvalues(int, int);
		int area(){return(width * height);}
		friend CRectangle duplicate (CRectangle);
};
void CRectangle::setvalues(int a, int b){
	width = a;
	height = b;
}
CRectangle duplicate(CRectangle rectparam){
	CRectangle recters;
	recters.width = rectparam.width*2;
	recters.height = rectparam.height * 2;
	return recters;
}
int main(){
	CRectangle rect, rectb;
	rect.setvalues(2, 3);
	rectb = duplicate(rect);
	cout<<rectb.area();
	return 0;
}
