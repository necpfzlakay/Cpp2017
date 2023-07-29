#include<iostream>
using namespace std;


main() {
	
	int x,toplam,sayi;
	
	toplam=10;
	
	cout << "bir sayi giriniz (1 ilA 5 atasinda...) \t";
	cin >> sayi;
	
	while (sayi<5){
				toplam=toplam+sayi;
				sayi=sayi+1;		
		
		
	}
	
	cout << "sayilarin toplami..:\t" << toplam;
	
	
	cin >> x;
}
