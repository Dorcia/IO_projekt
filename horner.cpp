#include <iostream>

using namespace std;


int main() {
	
	int n=0,x=0;
 	cout<<"Podaj stopien wielomianu: "<<endl;
 	cin>>n;
 	cout<<"Podaj wartosc x: "<<endl;
 	cin>>x;
 	
 	int *a=new int[n+1];
 	int *b=new int[n+1];
 	
 	cout<<"Podaj wspolczynniki wielomianu: "<<endl;
 	for(int i=0;i<n+1;i++){
 		cout<<"a"<<i<<":";
 		cin>>a[i];
 	}
 
 	b[0]=a[n];
 	for(int i=1;i<n+1;i++){
 			b[i]=((b[i-1]*x)+a[n-i]);	
 	} 		
 			cout<<"KONIEC: WYNIK TO: "<<b[n];
	return 0;
}
