// Program kalkulator obliczajacy jedna z 4 operacji na liczbach
#include <iostream>

using namespace std;

int main() {
	//deklaracje zmiennych (typ int, )
	int liczba_pierwsza, liczba_druga, wybrane_działanie;
	
	//Nazwa programu wyswietlana na ekranie komputera
	cout << "Kalkulator wykonujacy operacje na liczbach calkowitych" << endl;
	// Mozliwosc wyboru operacji matematycznych
	cout << "Wybierz jedna z operacji" << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4.Dzielenie" << endl;

	// wprowadzenie danych przez użytkownika
	
	cin >> wybrane_działanie;

	// Fragment programu do wykonywania obliczeń przy uzyciu instrukcji switch
	switch (wybrane_działanie)
	{
	case 1 :
		cout << "Podaj pierwsza liczbe : ";
		cin >> liczba_pierwsza;
		cout << "Podaj druga liczbe : ";
		cin >> liczba_druga;
		// Operacja dodawania
		cout << "Wynik dodawania" <<"="<<" "<< liczba_pierwsza + liczba_druga<<endl;
			break;
	case 2: 
		cout << "Podaj pierwsza liczbe: ";
		cin >> liczba_pierwsza;
		cout << "Podaj druga liczbe :";
		cin >> liczba_druga;
		// Operacja odejmowania
		cout << "Wynik odejmowania"<< "=" <<" "<< liczba_pierwsza - liczba_druga<<endl;
		break;

	
	case 3: 
		cout << "Podaj pierwsza liczbe : ";
		cin >> liczba_pierwsza;
		cout << "Podaj druga liczbe : ";
		cin >> liczba_druga;
		// Operacja mnożenia
		cout << "Wynik mnozenia "<<"= "<<" " << liczba_pierwsza * liczba_druga<<endl;
		break;


	case 4:
		cout << "Podaj pierwsza liczbe  : "; 
		cin >> liczba_pierwsza;
		cout << "Podaj druga liczbe : ";
		cin >> liczba_druga;
		//warunek dotyczący dzielenia przez 0
		if (liczba_druga == 0) {
			cout << "Nie dzielimy przez 0" << endl;

		}
		else {
			// operacja dzielenia prawidlowa czyli liczba_druga != 0 
			cout << "Wynik dzielenia "<<"=" <<" "<< liczba_pierwsza / liczba_druga<<endl;
		}
		break;

	//informacja o wyborze niepoprawnego numeru dzialania
	default :
			cout << "Wybrales niepoprawny rodzaj dzialania , wybiesz porawny numer dzialania";
		

	}


	return 0;

	
	
	
	

}