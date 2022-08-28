#include <iostream>
using namespace std;

int main() {
	int a[50], i, pos , num, size;
	cout<<"Enter the size of the array :";
	cin>>size;
	for(i = 0; i<size; i++){
		cin>>a[i];
	}
	cout<<"Ente the index you want to insert in array : \n";
	cin>>pos;
	
	if(pos>= size ){
		cout<<"This is out of the array";
	}
	else{
		cout<<"Enter the element you want to add : \n";
	cin>>num;
	
	//insertion logic
	
	for (i = size-1; i>= pos; i--){
		a[i+1] = a[i];
	}
	
	a[pos] = num;
	
	cout<<"New array : \n";
	
	for(i=0; i<=size; i++){
		cout<<a[i]<<endl;
	}
	}
	
	return 0;
}
