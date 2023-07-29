#include<iostream>
using namespace std;


//    \n = satýr atlama      \t tab boyutu ileri götürme     \b    bir önceki karakteri silmek

//HESAP MAKÝNASI YAPIMI... 4 ÝÞLEM.


main(){
	
  	int x,y,z,a,b,c,s;
  	
	cout << "\t \t \t \t Merhabalar... Hesap makinama hosgeldin.\n \t \t \t \t lutfen bir sayi girerek baslayalim \n \n \t";
		cin>> x;
	
	cout << "\t \t \t \t Guzel basladik simdi de islemimizi secelim \n \t \t \t \t (1 ila 4 arasi secim yap)";
	cout << "\n \t \t  1. Toplama: \n \t \t  2. Cikartma: \n \t \t  3. Carpma: \n \t \t  4. Bolme: \n \n \t";
		cin >> s;
		
					
				switch(s) {
						case 1:	
							cout <<1;
							cout << "\t \t \t \t guzell simdi de diger sayiyi gir kardesim \n \n \t";
		        cin >> y;
							break;
						case 2:
							cout <<2;
							cout << "\t \t \t \t guzell simdi de diger sayiyi gir kardesim \n \n \t";
		        cin >> y;
							break;
						case 3:
							cout <<3;
							cout << "\t \t \t \t guzell simdi de diger sayiyi gir kardesim \n \n \t";
		        cin >> y;
							break;
						case 4:
							cout <<4;
							cout << "\t \t \t \t guzell simdi de diger sayiyi gir kardesim \n \n \t";
		        cin >> y;
							break;
						default:
							cout << "HATA. Gecersiz Islem \n \n";
							
						
						}
		
		
		
		
		
					
		
			switch(s) {
				
						case 1:	
						cout << "\n \n \t \t \t \t \t \t *-_-_-_-_CEVAP_-_-_-_-:\n \n \t \t \t \t \t \t \t";
							cout <<(x+y);
							break;
						case 2:
						cout << "\n \n \t \t \t \t \t \t *-_-_-_-_CEVAP_-_-_-_-:\n \n \t \t \t \t \t \t \t";
							cout <<(x-y);
							break;
						case 3:
						cout << "\n \n \t \t \t \t \t \t *-_-_-_-_CEVAP_-_-_-_-:\n \n \t \t \t \t \t \t \t";	
							cout <<(x*y);
							break;
						case 4:
						cout << "\n \n \t \t \t \t \t \t *-_-_-_-_CEVAP_-_-_-_-:\n \n \t \t \t \t \t \t \t";
							cout <<(x/y);
							break;
						default:
							cout << "HATA. Gecersiz Islem";
				
				}
		
		
	
	

	cin >> x;
	
}
	
 
 		
