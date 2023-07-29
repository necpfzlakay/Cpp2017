#include<iostream>
using namespace std;
main(){
	
	int x,y,z;
	
	cout << "bir sayi giriniz\t";
	cin >> x;
	
	cout << "ikinci bir sayiyi giriniz\t";
	cin >> y;
	
	   if(x>y) {
	   	
	   	while (x>y){
		   
			cout << "sayilar esit degil...\t" << x << endl;
	   	 	x--;
					   	
	   	}
	   	
	   	cout << "sayilar esitlendi" << x;
	   	
	   }
	   
	   else {
	   			while (y>x){	
	   				cout << "sayilar esit degil...\t"<< y << endl;
	   				y--;
	   			}
	   		cout << "sayilar esitlendi" << y;
	   	
	   	
	   }
	

}
