#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, temp, j;
    cout<<"Number of elements of the array: ";
    cin>>N;
    int arr[N];
    for(int i =0; i<N;i++){
    	cout<<"Elements of the array: ";
        cin>>arr[i];
    }
     for ( int i = 0, j = N - 1; i < N/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }    
    for(int i =0; i<N ;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
