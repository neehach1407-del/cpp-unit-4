//function template
#include<iostream>
using namespace std;
template<typename T>
T findMax(T a,T b){
	return(a>b)? a:b;
}
int main(){
	cout<<"max of 10 and 20:"<<findMax(10,20)<<endl;
	return 0;
}
