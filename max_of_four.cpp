#include <bits/stdc++.h>  
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) 
{  
    int x = max(a, max(b, max(c, d)));  
    if (x == a)  
        printf("%d", a);
    if (x == b)  
        printf("%d", b);
    if (x == c)  
        printf("%d", c);  
    if (x == d)  
        printf("%d", d);  
} 
  
int main()  
{ 
	int a, b, c, d; 
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    cout << "\n";  
    max_of_four(a, b, c, d);  
    return 0;  
}

