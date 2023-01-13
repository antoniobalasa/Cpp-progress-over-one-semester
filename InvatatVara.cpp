#include<iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<cmath>
using namespace std;

/* Uncomment this part to make sum of numbers

//int main()
//{
//	int a, b;
//	cout << "Care este primul numar ?";
//	cin >> a;
//	cout << "Care este cel de-al doilea numar ?";
//	cin >> b;
//	cout << "Suma dinte " << a << " si " << b << " este " << a + b << endl;
//}

*/

/* Uncomment this part for a mad lib story
//int main()
//{
//	
//	string nume, culoare, perosna, obiect ,locatie, timp, mancare;
//	cout << "Da un nume ";
//	cin >> nume;
//	cout << "Da o culoare ";
//	cin >> culoare;
//	cout << "Spune un alt nume ";
//	cin >> perosna;
//	cout << "Spune un obiect ";
//	cin >> obiect;
//	cout << "Spune o locatie ";
//	cin >> locatie;
//	cout << "Spune un timp ";
//	cin >> timp;
//	cout << "Spune o mancare ";
//	cin >> mancare;
//	cout << nume << " care poarta niste haine de culoare " << culoare << " este impreuna cu " << perosna << " pe o stanca si amandoi au in mana o/un " << obiect << " cu are se bateu unul pe altul in timp ce mergeau spre " << locatie << " pe la ora " << timp << " in timp ce mancau " << mancare << endl;
//
//
//}
*/

/*Uncomment this part for different responses based on age using if.
//int main()
//{
//	int a;
//	cout << "Care este varsta perosanei ?";
//	cin >> a;
//	
//	if (a <= 12)
//	{
//		cout << "Poftim scutece boracule ";
//	}
//
//	else if (a >= 13 && a < 17)
//	{
//		cout << "Poftim doua caiete si doua palme ";
//	}
//
//	else if (a >= 17 && a<65)
//	{
//		cout << "Pofrim depresie bafta in viata ";
//
//	}
//	else 
//	{
//		cout << "Pofrim un cupon de reducere pentru pompe funerare ";
//
//	}
//
//}
*/


/*Exercise for taking a price and giving different discounts for new clients.
//Exercitiul 2: Intreaba cat costa produsul. Intreaba daca este un client nou. Daca este un client nou,
//da o reducere de 20% si spune pretul nou. Daca nu este un client nou, spune ca nu califica pentru o reducere si spune pretul neschimbat.

//int main()
//{
//	int pret;
//	string client;
//
//	cout << "Care este pretul produsului ? ";
//	cin >> pret;
//	cout << "Suntei client nou ? Da sau Nu ";
//	cin >> client;
//
//	if (client == "D" || client == "d")
//	{
//		pret = pret - (pret * 0.20);
//		cout << "Pretul este " << pret ;
//	}
//	else
//	{
//		cout << "Pretul este " << pret;
//	}
//
//}
*/

/*Another if exercise
//Exercitiul 2.1: Intreaba daca utilizatorul are profil uman sau real. 
//Daca este profil uman, spune ca este inscris pentru romana, istorie si geografie.
//Daca este profilul real, spune ca este inscris pentru romana, matematica si biologie.

//int main()
//{
//	int a;
//	cout << "Tasteaza 1 pentru profilul unam sau 2 pentru profilul real. ";
//	cin >> a;
//
//	if (a == 1)
//	{
//		cout << "Suntei inscris/a pentru Romana, Istorie si Geografie.";
//	}
//	else
//	{
//		cout << "Suntei inscris/a pentru Romana, Matematica si Biologie.";
//	}
//}
*/

/*Calculate grade based on grade, participation, absences.
//Cere nota de baza. Intreaba daca a facut sesiune de comunicare.
//Daca da, adauga un punct la nota de baza.
//Intreaba cate absente a avut la seminar.
//Daca a avut mai putin decat 5 absente, adauga un punct la nota de baza.
// La sfarsit, spune nota finala.

//int main()
//{
//	int notabaza, abesnte, notafinala;
//	string sesiune;
//
//	cout << "Care este nota de baza? ";
//	cin >> notabaza;
//	cout << "Ai Participat la sesiune de comunicare ? D/N ";
//	cin >> sesiune;
//	cout << "Cate absente ai la seminar ? ";
//	cin >> abesnte;
//
//	if (sesiune == "D" || sesiune == "d")
//	{
//		if (notabaza < 10)
//		{
//			notafinala = notabaza + 1;
//		}
//	}
//	else
//	{
//		notafinala = notabaza;
//	}
//	if (abesnte < 5)
//	{
//		if (notafinala < 10)
//		{
//			notafinala = notafinala + 1;
//		}
//	}
//	else
//	{
//		notafinala = notafinala;
//	}
//	cout << "Nota finala este " << notafinala;
//
//}
*/


/*Riddle/password, if it is correct, it gives a response.
//Creeaza un joc in care personajul trebuie sa spuna o parola.
//Daca parola este corecta, monstrul spune secretul.
//Daca parola este gresita, monstrul da o pedeapsa.

//int main()
//{
//	string parola;
//	cout << "Castor, Argint, Cocos, Aur, care este parola? ";
//	cin >> parola;
//	if (parola == "CACA")
//	{
//		cout << "Monstrul tia dat ca premiu doua palme pentru ca ai stiut parola ";
//	}
//	else
//	{
//		cout << "Monstrul tea pedepsit asezanduse pe tine pentru ca nu ai stiut parola ";
//	}
//}
*/

/*Guess the number (only once) 
//Creeaza in joc pentru doi jucatori.
//Instruieste primul jucator sa tasteze un numar si jucatorul 2 sa nu se uita.
//Dupa aceea, intreaba pe jucatorul 2 sa ghiceasca un numar.
//Daca a ghicit un numar prea mare, spune ca a fost prea mare. 
//Daca a fost un numar prea mic, spune ca a fost prea mic.
//Daca a ghicit corect, spune felicitari.

//int main()
//{
//	int a, b;
//	cout << "Primul jucator sa scrie numarul ";
//	cin >> a;
//	cout << "Al doilea jucator sa scrie numarul ";
//	cin >> b;
//	if (a < b)
//	{
//		cout << "Numarul este prea mare";
//	}
//	else if (a > b)
//	{
//		cout << "Numarul este prea mic";
//	}
//	else
//	{
//		cout << "Numarul este corect felicitari";
//	}
//}
*/

/*Odd, even numbers.
//Ia doua numere.
//Daca ambele sunt impare, spune ca numerele sunt 2 impare.
//Daca ambele sun pare, spune ca ambele sunt pare.
//Daca doar unul dintre ele sunt pare, atunci spune asa.

//int main()
//{
//	int a, b;
//
//	cout << "Care este primul numar ? ";
//	cin >> a;
//	cout << "Care este aldoilea numar ? ";
//	cin >> b;
//
//	if (a % 2 == 0 && b % 2 == 0)
//	{
//		cout << "Ambele numere sunt pare ";
//	}
//	else if (a % 2 == 0 && b % 2 != 0)
//	{
//		cout << "Primul numar este par iar cel de al doilea este impar";
//	}
//	else if (a % 2 != 0 && b % 2 == 0)
//	{
//		cout << "Primul numar este impar iar cel de al doilea este par";
//	}
//	else if (a % 2 != 0 && b % 2 != 0)
//	{
//		cout << "Ambele numere sunt impare ";
//	}
//}
*/

/* Days of the week, different response based on day of week
//Ia o zi de saptamana
//Daca este sambata sau duminica, ureaza un weekend fericit
//Daca este o zi de munca, spune altceva.

//int main()
//{
//    string zi;
//
//    cout << "In ce si a saptamanii suntem ? ";
//    cin >> zi;
//
//    if (zi == "sambata" || zi == "duminica")
//    {
//        cout << "Weekend placut";
//    }
//    else if (zi == "luni" || zi == "marti" || zi == "miercuri" || zi == "joi" || zi == "vineri")
//    {
//        cout << "La munca nu la frecat menta";
//    }
//    else
//    {
//        cout << zi << " nu este o zi a saptamanii ";
//    }
//}
*/

/*Simple quiz, calculate grade.
//Intreaba trei exercitii aritmetice.
//Calculeaza nota dupa procentaj de exercitii corecte.
//Daca nota este de trecere, spune asa.
//Daca nu a trecut, spune ca nu a trecut.

//int main()
//{
//	int a,b,c,corecte=0;
//
//	cout << "Cat face 5+10*2? ";
//	cin >> a;
//	cout << "Cat face 2+8*2? ";
//	cin >> b;
//	cout << "Cat face 2+0*2? ";
//	cin >> c;
//
//	if (a==25)
//	{
//		corecte = 1;
//	}
//	if (b==18)
//	{
//		corecte = corecte + 1;
//	}
//	if (c==2)
//	{
//		corecte = corecte + 1;
//	}
//
//	if (corecte == 0)
//	{
//		cout << "Nota nu este de trecere aveti " << corecte << " raspunsuri corecte nota 1 ";
//	}
//	else if (corecte == 1)
//	{
//		cout << "Nota nu este de trecere aveti " << corecte << " raspunsuri corecte nota 4 ";
//	}
//	else if (corecte == 2)
//	{
//		cout << "Nota este de trecere aveti " << corecte << " raspunsuri corecte nota 7 ";
//	}
//	else
//	{
//		cout << "Nota este de trecere aveti " << corecte << " raspunsuri corecte nota 10 ";
//	}
//
//}
*/

/*Player 1 and Player 2 choose to betray or not. If both betray, both lose. If one betrays, other loses. If none betray, both win.
//Jocul prizonierului.
//Fiecare jucatorul, la randul lui, tasteaza secret daca ar trada sau nu.
//Daca nimeni nu tradeaza, spune ca a scapat.
//Daca doar unul tradeaza, spune ca cel care a tradat a scapat și celălalt a ajuns în închisoare.
//Dacă ambii au tradat, spune ca toti au ajuns la închisoare.

//int main()
//
//{
//	int a, b;
//
//	cout << "Jucatorul 1 tasteaza 1 daca tratezi sau 0 daca nu: ";
//	cin >> a;
//	cout << "Jucatorul 2 tasteaza 1 daca tratezi sau 0 daca nu: ";
//	cin >> b;
//
//	if(a==0 && b==0)
//	{
//		cout << "Ambi jucatori au scapat ";
//	}
//	else if (a==1 && b==0 )
//	{
//		cout << "Jucatorul 1 a tradat jucaorul 2 ajunge la inchisoare";
//	}
//	else if (a == 0 && b == 1)
//	{
//		cout << "Jucatorul 2 a tradat jucaorul 1 ajunge la inchisoare";
//	}
//	else if (a == 1 && b == 1)
//	{
//		cout << "Ambii jucatori ajung la inchsoare";
//	}	
//	else if (b != 1 && b != 0 && a != 1 && a != 0)
//	{
//		cout << "Jucaorul 1  si Jucaorul 2  nu au tastat bine ";
//	}
//	else if (a != 1 && a != 0)
//	{
//		cout << "Jucaorul 1 nu a tasta bine ";
//	}
//	else if (b != 1 && b != 0)
//	{
//		cout << "Jucaorul 2 nu a tasta bine ";
//	}
//}
*/

/*Leap year
//An bisect. 
//Preia un an. 
//Răspunde daca este un an bisect sau nu.

//int main()
//{
//	int an;
//
//	cout << "Dati un an ";
//	cin >> an;
//
//	if (an%4==0 && an%100!=0)
//	{
//		cout << "Anul este bisect";
//	}
//	else
//	{
//		cout << "Anul nu este bisect";
//	}
//}
*/


/*Check divizibility.
//Codează o aplicație care preia un număr și determină dacă este divizibil cu un alt număr preluat.

//int main()
//{
//	int a, b;
//	cout << "Care este numarul 1? ";
//	cin >> a;
//	cout << "Care este numarul 2? ";
//	cin >> b;
//
//	if (a%b==0)
//	{
//		cout << "Numerele sunt divizibile ";
//	}
//	else
//	{
//		cout << "Numerele nu sunt divizibile ";
//	}
//}
*/


/*Order 3 numbers in increasing order. All combinations way.
//Preia 3 numere. 
//Scrie-le in ordine crescatoare.

//int main()
//{
//	int a, b, c;
//	int max, min, med;
//	cout << "Dati scrie numarul 1 ";
//	cin >> a;
//	cout << "Dati scrie numarul 2 ";
//	cin >> b;
//	cout << "Dati scrie numarul 3 ";
//	cin >> c;
//
//	if (a<b && b<c)
//	{
//		max = c;
//		min = a;
//		med = b;
//	}
//	else if (a<b && a<c)
//	{
//		max = b;
//		min = a;
//		med = c;
//	}
//	else if (a<b && a > c)
//	{
//		max = b;
//		min = c;
//		med = a;
//	}
//	else if (a>b && b>c)
//	{
//		max = a;
//		min = c;
//		med = b;
//	}
//	else if (a>b && b<c)
//	{
//		max = a;
//		min = b;
//		med = c;
//	}
//
//	cout << min <<"," << med <<"," << max;
//
//
//}
*/

/*Order numbers in increasing order. Better algorithm.
//int main()
//{
//	int a, b, c;
//	cout << "Scrie numarul 1: ";
//	cin >> a;
//	cout << "Scrie numarul 2: ";
//	cin >> b;
//	cout << "Scrie numarul 3: ";
//	cin >> c;
//	if (a < b)
//	{
//		if (b < c)
//		{
//			cout << a << ", " << b << ", " << c;
//		}
//		else  // c < b
//		{
//			if (a < c)
//			{
//			cout << a << ", " << c << ", " << b;
//			}
//			else // c < a
//			{
//				cout << c << ", " << a << ", " << b;
//			}
//		}
//	}
//	else // a > b
//	{
//		if (b > c)
//		{
//			cout << c << ", " << b << ", " << a;
//		}
//		else // c > b
//		{
//			if (a > c)
//			{
//				cout << b << ", " << c << ", " << a;
//			}
//			else // c > a
//			{
//				cout << b << ", " << a << ", " << c;
//			}
//		}
//	}
//}

/*mirror mirror on the wall, while loop
// Intreaba “Oglinda oglinjoara, sunt eu cel mai frumos om din lume?” 
// Daca raspunde “nu”, spune “raspuns gresit” si repeta intrebarea. 
// Continua sa repete si doar lasa jucatorul in pace daca spune “da”.

//int main()
//{
//	string a;
//	cout << "Oglinda oglinjoara, arat eu ca o cioara? ";
//	cin >> a;
//	while (a!="da")
//	{
//		cout << "Hai ca minti ";
//		cin >> a;
//	}
//}
*/

/*Calculate the sum.
//Calcuează sumă de toate numerele într-un interval.

//int main()
//{
//	int a, b, suma=0;
//	cout << "De la ce numar vrei sa incepi? ";
//	cin >> a;
//	cout << "Pana la ce numar? ";
//	cin >> b;
//
//	while (a<=b)
//	{
//		suma = suma + a;
//		a++;
//	}
//	cout << suma;
//}
*/

/*Add numbers until negative input

//Preia numerele pana cand utilizatorul da un numar negativ.
//Afiseaza suma tuturor numerelor (afara de numarul negativ).

//int main()
//{
//	int a = 0, suma = 0;
//	while (a>=0)
//	{
//		suma = suma + a;
//		cout << "Numero boss ";
//		cin >> a;
//	}
//	cout << "Tote numreo boss " << suma;
//}
*/

/*Add all integers in interval.
//Calcuează sumă de toate numerele într-un interval.

//int main()
//{
//	int a, b,suma=0;
//	cout << "De la ce numar ? ";
//	cin >> a;
//	cout << "Pana la ce numar ? ";
//	cin >> b;
//
//	while (a<=b)
//	{
//		suma = suma + a;
//		a++;
//	}
//	cout << suma;
//}
*/


/*Keep posting numbers until negative input.
//Preia numerele pana cand utilizatorul da un numar negativ.

//int main()
//{
//	int a = 0, numa = 0;
//	cout << "Scrie numarul ";
//	cin >> a;
//	while (a >= 0)
//	{
//		numa = a + 5;
//		cout << numa << endl;
//		cout << "Scrie numarul ";
//		cin >> a;
//	}
//}
*/

/*Times table for a number.
//Preia un numar.
// Afiseaza tabla inmultirii pentru numarul acesta.
// De exemplu, daca a preluat 5, o sa scrie:
//5 x 1 = 5
//5 x 2 = 10
//5 x 3 = 15
//Afiseaza suma tuturor numerelor (afara de numarul negativ)

//int main()
//{
//	int sum=0,a,adun=0;
//	cout << "Da un numar ";
//	cin >> a;
//
//	while (adun <= a)
//	{
//		cout << a << " x " << adun << " = " << a * adun << endl;
//		sum = sum + (a * adun);
//		adun++;
//	}
//  cout << "Suma total este " << sum;
//}
*/

/*Check if prime.
//Determina daca un numar dat este prim.

//int main()
//{
//	int a,b=2;
//	bool prim =true;
//	cout << "Da un numar ";
//	cin >> a;
//	
//	while (b < a-1) //mai bine a/2
//	{
//		if (a % b == 0)
//		{
//			prim = false;
//			break;
//		}
//		b++;
//	}
//	if (prim == true)
//	{
//		cout << "Numarul este prim";
//	}
//	else
//	{
//		cout << "NUmarul nu este prim";
//	}
//}
*/

/* a^b
//Preia un numar A si un alt numar B care reprezinta exponentul. 
//Calculeaza A la puterea B si afiseaza rezultatul.

//int main()
//{
//	int a, b, i=1, sum=1;
//
//	cout << "Numaurl 1? ";
//	cin >> a;
//	cout << "Numaurl 2? ";
//	cin >> b;
//
//	while (i<=b)
//	{
//		sum = sum * a;
//		i++;
//	}
//	cout << sum;
//}
*/

/* Calculate n!
//Preia un numar n si determina n! (adica, n factorial).

//int main()
//{
//	int a, i=1, sum=1,fac=1;
//	
//	cout << "Numar ";
//	cin >> a;
//	while (i<=a)
//	{
//		sum = sum * i;
//		i++;
//
//	}
//	cout << sum;
//}
*/

/*Count from a to b. If b is smaller, count backwards.
//Fă un program care întreabă de la ce număr A până la ce număr B să socotească.
//Socotește de la numărul A până la B.
//Daca numarul A este mai mare decat B, atunci socoteste invers… De exemplu, 10, 9, 8, 7, 6…

//int main()
//{
//	int a, b, i;
//
//	cout << "care este primul numar? ";
//	cin >> a;
//	cout << "Care este al doilea numar? ";
//	cin >> b;
//	if (a<b)
//	{
//		i = a;
//
//		while (i <= b)
//		{
//			cout << i << endl;
//			i++;
//		}
//	}
//	else if(a>b)
//	{
//		i =	a;
//
//		while (i >= b)
//		{
//			cout << i << endl;
//			i--;
//		}
//	}
//
//}
*/

/*Guessing game, 3 chances
//Fa un joc in care jucatorul 1 pune un numar intre 1 si 10. 
//Jucatorul 2 incearca sa ghiceasca numarul, si are 3 sanse.
//Daca raspunsul este corect, spune ca jucatorul 2 a castigat. 
//Daca a raspuns gresit, 

//int main()
//{
//	int a, b, incercari=1, incercat=2;
//	cout << "Care este numarul dorit ? ";
//	cin >> a;
//
//	while (incercari <= 3)
//	{
//		cout << "Ghiceste numarul ";
//		cin >> b;
//		incercari++;
//		if (b==a)
//		{
//			cout << "raspunusl este corect felicitari";
//			break;
//		}
//		else
//		{
//			cout << "raspunul este gresit mai ai "<< incercat << " incercari " << endl ;
//		}
//		incercat--;
//	}
//}
*/

/*Begin at a and count in threes till b.

//Preia un numar sa inceapa socoteala, si un numar sa se opreasca socoteala. 
//Socoteste in 3 de la primul numar pana cand depaseste numar de oprire.

//int main()
//{
//	int a, b, i;
//
//	cout << " Care este numarul de inceput? ";
//	cin >> a;
//	cout << " Care este numarul de final? ";
//	cin >> b;
//	i = a;
//	while (i<=b)
//	{
//		cout << i << endl;
//		i = i + 3;
//	}
//}
*/


/*Same as above, but count from a to b in c.
//La fel ca exercitiul 4, incepe sa socoteasca de la un numar dat la un alt numar dat. 
//Dar in loc sa socoteasca din 3 in 3, socoteste in cat zice utilizatorul.
//De exemplu:Socoteste de la 5 la 100 in 7.

//int main()
//{
//	int a, b, c, i;
//
//	cout << "care este numarul de inceput ? ";
//	cin >> a;
//	cout << "care este numarul de final ? ";
//	cin >> b;
//	cout << "din cat in cat sa numaram ? ";
//	cin >> c;
//
//	i = a;
//
//	while (i<=b)
//	{
//		cout << i << endl;
//		i = i + c;
//	}
//}
*/

/*ATM. Gives option to deposit or withdraw. Error if withdraws too much. Asks for a new transaction until user says Nu.
//Inainte sa inceapa programul, da jucatorul o suma anume de bani in contul lui. 
//Cand incepe programul, spune “Bine ai venit la banca” si intreaba daca vrea sa scoata sau sa depuna bani. 
//Daca spune ca vrea sa depuna bani, intreaba cat sa depuna si adauga depunerea la cont.
//Daca spune ca vrea sa scoata bani, intreaba cat sa scoata. Scade aceasta suma din cont.
//Daca incearca sa scoata mai multi bani decat are in cont, da eroare. La sfarsit, intreaba daca mai vrea sa faca o tranzactie.
//In timp ce zice da, repeta procesul de la parte in care intreaba daca vrea sa depuna sau sa scoata bani. 
//Daca spune nu, termina programul. 

//int main()
//{
//	int sumastart = 2000, suma;
//	string a;
//	cout << "Bine ati venit la banca"<<endl;
//	cout << "Dorit sa scoateti sau sa depunei bani?" << endl;
//	cout << "dep = depunere / scot = scoatere ";
//	cin >> a;
//	while (a=="scot")
//	{
//
//		if (a == "scot")
//		{
//			cout << "tastati d pentru scoatere " << endl;
//			cin >> a;
//			while (a == "d")
//			{
//				cout << "Soldul contului este " << sumastart << endl;
//				cout << "Tastati suma dorita pentru retragere " << endl;
//				cin >> suma;
//				if (suma > sumastart)
//				{
//					cout << "Suma este mai mare decat soldul disponibil " << endl;
//					cout << "Dorit sa efectuati o alta tranzactie ? " << endl;
//					cout << "n = Nu / d = Da ";
//					cin >> a;
//					if (a=="d")
//					{
//						cout << "dep = depunere / scot = scoatere " << endl;
//						cin >> a;
//					}
//					else
//					{
//						break;
//					}
//									}
//				else
//				{
//					sumastart = sumastart - suma;
//					cout << "Dorit sa efectuati o alta tranzactie ? " << endl;
//					cout << "n = Nu / d = Da ";
//					cin >> a;
//					if (a == "d")
//					{
//						cout << "dep = depunere / scot = scoatere " << endl;
//						cin >> a;
//					}
//					else
//					{
//						break;
//					}
//				}
//			}
//		}
//	}
//	while (a=="dep")
//	{
//		if (a == "dep")
//		{
//			cout << "tastati d pentru depunere " << endl;
//			cin >> a;
//			while (a == "d")
//			{
//				cout << "Soldul contului este " << sumastart << endl;
//				cout << "Tastati suma dorita pentru depunere " << endl;
//				cin >> suma;
//				sumastart = sumastart + suma;
//				cout << "Dorit sa efectuati o alta tranzactie ? " << endl;
//				cout << "n = Nu / d = Da ";
//				cin >> a;
//				if (a=="d")
//				{
//					cout << "dep = depunere / scot = scoatere " << endl;
//					cin >> a;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//	}
//}

/*Game with 10 coins. Each player can take between 1-3 coins. Person to take last coin loses.
//Jocul lui Nim.
//Incepe cu 10 monezi.
//Intreaba pe jucatorul 1 cate monezi sa ia (1-3).
//Scade din 10 monezi cate au fost luate.
//Fiecare jucatorul are dreptul sa ia 1-3 monezi in randul lui.
//Jucatorul care ia ultima moneda pierde jocul.

//int main()
//{
//	int monezi=10, a,jucaotr=1;
//	cout << "Avem in total 10 monezi " << endl;
//
//	while (monezi>0)
//	{
//
//		cout << "cate bani vrea tu sa ia boss "<<jucaotr<< " ? " <<endl;
//		cin >> a;
//		
//		while (a > 3 || a <= 0)
//		{
//			cout << "nu mere boss mai incerca de la 1 pana la 3 "<< endl;
//			cin >> a;
//		} 
//
//		monezi = monezi - a;
//		cout << "mai avem " << monezi << " monezi " << endl ;
//		if (jucaotr == 1)
//		{
//			jucaotr = 2;
//		}
//		else
//		{
//			jucaotr = 1;
//		}
//
//	}
//
//	if (jucaotr==1)
//	{
//		cout << "Prostul 2 a piedut ";
//	}
//	else
//	{
//		cout << "Prostul 1 a pierdut ";
//	}
//
//}
*/

/*RPG game where player has 100 coins. Beggar asks for money until player is poor. 
//Programeaza un joc in care jucatorul are 100 monezi.
//In joc, un cersator vine si cere bani in continuare.
//Intreaba cati bani sa dea.
//Daca scrie 0, cersatorul il lasa in pace.
//Daca scrie o suma mai mare decat banii in inventar, spune ca nu are atatia bani.
//Daca scrie orice suma afara de 0, scade din 100 monezi si spune cati bani au ramas.
//Cersatorul continua sa ceara bani pana cand detecteaza ca jucatorul are mai putin decat 20 de monezi.
//Atunci cersatorul spune ca “acum esti sarac ca mine!” si nu mai cere bani.

//int main()
//{
//	int monezi=100,a;
//
//	while (monezi > 20 )
//	{
//		cout << "Ada boss da si mie niste monezi sa iau o potiune "<<endl;
//		cout << "Dai boss? "<<endl;
//		cin >> a;
//		if (a == 0)
//		{
//			break;
//		}
//		else
//		{
//			while (a > monezi)
//			{
//				cout << "nu avem decat " << monezi << " boss mai incerca " << endl;
//				cin >> a;
//			}
//
//		}
//		
//		monezi = monezi - a;
//		if (monezi <= 20)
//		{
//			cout << "Hai cate las boss ca acum esti mai sarac ca mine ";
//		}
//
//	}
//}
*/

/*Sum of all numbers in interval, but use for instead of while.
//Calcuează sumă de toate numerele într-un interval.
//Dar in loc de while, foloseste for.

//int main()
//{
//	int a,b,suma=0;
//
//	cout << "da un nuamr ";
//	cin >> a;
//	cout << "pana la ce nuamr ?";
//	cin >> b;
//
//	for (a; a <= b; a++)
//	{
//		suma = suma + a;
//	}
//	cout << suma;
//}
*/

/*Times table but using for.
//Preia un numar.
//Afiseaza tabla inmultirii pentru numarul acesta.
//(Dar in loc de while, foloseste for.)
//De exemplu, daca a preluat 5, o sa scrie:
//5 x 1 = 5
//5 x 2 = 10
//5 x 3 = 15…

//int main()
//{
//	int a;
//	cout << "Care este numarul? ";
//	cin >> a;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		cout << a << " X " << i << " = " << a * i << endl;
//	}
//}
*/

/*Count from a to b, but use for.
//Fă un program care întreabă de la ce număr A până la ce număr B să numere.
//Numără de la numărul A până la B.
//Daca numarul A este mai mare decat B, atunci numără invers…
//De exemplu, 10, 9, 8, 7, 6…

//int main()
//{
//	int a, b;
//	cout << "Care este primul numar ? ";
//	cin >> a;
//	cout << "Care este al doilea numar ? ";
//	cin >> b;
//
//	if (a < b)
//	{
//		for (int i = a; i <= b; i++)
//		{
//			cout << i << " ";
//		}
//	}
//	else if ( a > b)
//	{
//		for (int i = a; i >= b; i--)
//		{
//			cout << i << " ";
//		}
//	}
//}
*/

/*Calculate factorial but use for.
//Preia un numar n si determina n!
//(adica, n factorial).
//(dar foloseste for!)

//int main()
//{
//	int a, prod=1;
//
//	cout << "n! pentru ce numar? ";
//	cin >> a;
//
//	for (int i = a; i >= 1; i--)
//	{
//		prod = prod * i;
//	}
//	cout << "n! este egal cu " << prod;
//}
*/

/* Calculate a^b using for.
//Preia un numar A si un alt numar B care reprezinta exponentul.
//Calculeaza A la puterea B si afiseaza rezultatul.

//int main()
//{
//	int a, b, prod =1;
//	
//	cout << "Care este numarul? ";
//	cin >> a;
//	cout << "La ce exponent? ";
//	cin >> b;
//
//	for (int i = 1; i <= b; i++)
//	{
//		prod = prod * a;
//	}
//	cout << prod;
//}
*/

/*Check prime using for.
//Determina daca un numar dat este prim. (cu for)

//int main()
//{
//	int a;
//	bool prim=true;
//	cout << "Care este numar ? ";
//	cin >> a;
//
//	for (int i = 2; i < a-1; i++)
//	{
//
//		if (a%i==0)
//		{
//			prim = false;
//			cout << "Numarul nu este prim";
//			break;
//		}
//	}
//	if (prim== true)
//	{
//		cout << "e prem boss ";
//	}
//}
*/

/*Count in 3s using for.

//Preia un numar sa inceapa numerare, si un numar sa se opreasca numerare.
//Numera din 3 in 3 de la primul numar pana cand depaseste numar de oprire.

//int main()
//{
//	int a, b,sum;
//
//	cout << "Care este numarul de inceput ? ";
//	cin >> a;
//	cout << "Care este numarul de final ? ";
//	cin >> b;
//	sum = a;
//	for (int i = a; i <=b ; i+3)
//	{
//		cout << i << endl;
//	}
//}
*/

/*Count in whatever interval but using for.
//La fel ca exercitiul 7.
//Incepe sa numere de la un numar dat la un alt numar dat.
//Dar in loc sa numere din 3 in 3, numera in cat zice utilizatorul.
//De exemplu:
//Numara de la 5 la 100 in 7.

//int main()
//{
//	int a, b,c;
// 
//	cout << "Din cat in cat doriti sa numarati ? ";
//	cin >> c;
//	cout << "Care este numarul de inceput ? ";
//	cin >> a;
//	cout << "Care este numarul de final ? ";
//	cin >> b;
//
//	for (int i = a; i <= b; i=i+c )
//	{
//		cout << i << endl;
//	}
//}
*/

/*Add all numbers from a to b, using for.

//Aduna toate numerele de la A pana la B, si spune suma la sfarsit.

//int main()
//{
//	int a, b,sum=0;
//
//	cin >> a;
//	cin >> b;
//	
//	for (int i = a; i <=b ; i++)
//	{
//		sum = sum + i;
//	}
//	cout << sum << endl;
//}
*/

/*Add all odd numbers.
//Aduna toate numerele impare de la A pana la B, si spune suma la sfarsit.

//int main()
//{
//	int a, b, sum = 0;
//
//	cin >> a;
//	cin >> b;
//
//	for (int i = a; i <= b; i++)
//	{
//		if (i%2==1)
//		{
//			sum = sum + i;
//		}
//	}
//	cout << sum << endl;
//}
*/

/*Add every third number

//Aduna fiecare al treilea numar de la A pana la B, si spune suma la sfarsit.

//int main()
//{
//	int a, b,sum=0;
//	
//	cin >> a;
//	cin >> b;
//	
//	for (int i = a; i <=b; i=i+3)
//	{
//		sum = sum + i;
//	}
//	cout << sum << endl;
//}
*/

/* Declare an array with 10 numbers and populate it with shorts.
//Exercitiul 1> Declara un vector de 10 numere de tip short.
//Ia 10 numere si pune in vector.
//Afiseaza aceste numere.

//int main()
//{
//	short a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? " << endl;
//		cin >> a[i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i]<< endl;
//	}
//
//}
*/


/*Declare an array of shorts and get user's input to populate. Show the numbers in reverse order.
//Exercitiul 1> Declara un vector de 10 numere de tip short.
//Ia 10 numere si pune in vector.
//Afiseaza aceste numere invers.

//int main()
//{
//	short a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? " << endl;
//		cin >> a[i];
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		cout << a[i]<< endl;
//	}
//
//}
*/


/* Get an array of b numbers, post in increasing and decreasing order. 
//Declara un vector de 10 numere.
//Ia 10 numere si pune in vector.
//Afiseaza aceste numere in ordine normala si dupa aia in ordine inversa.

int main()
{
	short b;
	cin >> b;
	short* a = new short[b];
	for (int i = 0; i < b; i++)
	{
		cout << "Care este numarul " << i + 1 << " ? " << endl;
		cin >> a[i];
	}
	cout << "Numaratore normala " << endl;
	for (int i = 0; i < b; i++)
	{

		cout << a[i]<< endl;
	}
	cout << "Numaratoare inversa" << endl;
	for (int i = b-1; i >= 0; i--)
	{

		cout << a[i] << endl;
	}
	delete[] a;
}
*/

/*
//Make an array with m numbers, another array with n numbers, and put them together in one array.
//Ia un vector de m numere.
//Ia un alt vector de n numere.
//Pune-le impreuna intr-un singur vector, si afiseaza rezultatul.

//int main()
//{
//	int a, b;
//	cin >> a;
//	cin >> b;
//	int* v = new int[a];
//	int* c = new int[b];
//	int* f = new int[a + b];
//
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? " << endl;
//		cin >> v[i];
//	}
//	for (int i = 0; i < b; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? " << endl;
//		cin >> c[i];
//	}
//	int i = 0;
//	for (int j = 0; j < a; j++)
//	{
//		f[i] = v[j];
//		i++;
//	}
//	for (int j = 0; j < b; j++)
//	{
//		f[i] = c[j];
//		i++;
//	}
//	for (int k = 0; k < a+b; k++)
//	{
//		cout << f[k]<< endl;
//	}
//	delete[] v;
//	delete[] c;
//	delete[] f;
//}
*/

/*Make an array of strings. Display in order given and inverse order.
//Declara un vector de 10 string-uri.
//Ia 10 string-uri si pune in vector.
//Afiseaza aceste caratere in ordine normala si dupa aia in ordine inversa.

//int main()
//{
//
//	string* v = new string[10];
//	for (int i = 0; i <= 9; i++)
//	{
//		cout << "Care " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	cout << endl;
//	cout << "Ordine mormale aleale " << endl;
//	cout << endl;
//	for (int i = 0; i <= 9 ; i++)
//	{
//		cout << v[i]<< endl;
//	}
//	cout << endl;
//	cout << "Ordine amormale aleale " << endl;
//	cout << endl;
//	for (int i = 9; i >= 0; i--)
//	{
//		cout << v[i] << endl;
//	}
//	delete[] v;
//}
*/

/*Get numbers, calculate the arithmetic mean.

//Ia numere, si calculeaza media aritmetica

//int main()
//{
//	int a;
//	double suma = 0;
//	cout << "Cate boss? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i <a; i++)
//	{
//		cout << "Care este numero " << i + 1 << " ? ";
//		cin >> v[i];
//		suma = suma + v[i];
//	}
//	cout << " Media este " << suma / a;
//	delete[] v;
//}
*/

/*Make an array of shorts. Display each number except for the one specified.
//Declara un vector de un numar de short.
//Dupa aia, cere un numar sa scoata din lista.
//Dupa aceea, afiseaza tot vector dar fara numarul scos.

//int main()
//{
//	int a,b;
//	cout << "Cate numere are lista? ";
//	cin >> a;
//	short* v = new short[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numero " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	cout << "Ce numar doriti sa scoateri? ";
//	cin >> b;
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i] != b)
//		{
//			cout << v[i]<< endl;
//		}
//	}
//	delete[] v;
//}
*/

/*Find the largest and smallest number in an array.
//Determina cel mai mare numar intr-un vector si cel mai mic numar intr-un vector.

//int main()
//{
//	int a,max,min;
//	cout << "Cate numeor ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Ce numar este " << i + 1 << " ? ";
//		cin >> v[i];
//		if (i==0)
//		{
//			max = v[i];
//			min = v[i];
//		}
//		if (max < v[i])
//		{
//			max = v[i];
//		}
//		if (min > v[i])
//		{
//			min = v[i];
//		}
//	}
//	cout << "Numarul cel mai mare este " << max << endl;
//	cout << "Numarul cel mai mic este " << min;
//	delete[] v;
//}
*/

/*Get an array of numbers, an integer x. Find arithmetic mean of all numbers that are not x in array.
//Se citesc elemetele uniu vecotr numere intregei cu cel mult patru cifere si un numar intreg x 
//Sa se detremine media aritmetica a elementelor din vector diferjopo de x

//int main()
//{
//	int a,x,numrep=0;
//	double suma = 0;
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cin >> v[i];
//	}
//	cout << "dawdasd";
//	cin >> x;
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i] != x)
//		{
//			suma = suma + v[i];
//		}
//		else
//		{
//			numrep++;
//		}
//	}
//	cout << suma / (a-numrep)<<endl;
//	delete[] v;
//}
*/

/*Find smallest number in array and replace it with largest number in array.
//Afla cel mai mic numar din vector, si inlocuieste-l (inlocuieste-le daca sunt mai multe de cel mai mic numar) cu cel mai mare numar

//int main()
//{
//	int a, max, min;
//	cout << "Cate numere are vecorul? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//		if (i == 0)
//		{
//			max = v[i];
//			min = v[i];
//		}
//		if (max < v[i])
//		{
//			max = v[i];
//		}
//		if (min > v[i])
//		{
//			min = v[i];
//		}
//	}
//
//	cout << " Inanite " << endl;
//	for (int i = 0; i < a; i++)
//	{
//		cout << v[i]<<endl;
//	}
//	
//	for (int i = 0; i < a; i++)
//	{
//		if (min == v[i])
//		{
//			v[i] = max;
//		}
//	}
//	cout << " Dupa " << endl;
//	for (int i = 0; i < a; i++)
//	{
//		cout << v[i] << endl;
//	}
//	delete[] v;
//}
*/

/*Get an array. Check how many numbers are equal to the arithmetic mean of the numbers next to it.
//Ia un vector de numere intregi.
//Verifica cate elemente sunt egale cu media aritmetica vecinilor sai.
//Afiseaza de cate ori au fost egale cu media aritmetica.

//int main()
//{
//	int a,medieg=0;
//	cout << "Cate numere ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 1; i < a-1; i++)
//	{
//		if ((v[i-1]+v[i+1])/2==v[i])
//		{
//			medieg++;
//		}
//	}
//	cout << "Avem " << medieg<< " medie egale ";
// }
//	delete[] v;
*/

/*Say whether the array is made of even numbers, odd numbers, or a mix.
//Ia un vector de numere intregi. Determina daca este un amestec de numere pare si  impare in vector.
//Daca da, spune ca este un amestec, daca nu, spune ca toate sunt pare sau toate sunt impare.

//int main()
//{
//	int a,par=0,impar=0;
//	cout << "Cate numere avem? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i] % 2 == 0)
//		{
//			par++;
//		}
//		else if (v[i] % 2 != 0)
//		{
//			impar++;
//		}
//	}
//	if (par == a)
//	{
//		cout << "toate numerele sunt pare";
//	}
//	else if (impar == a)
//	{
//		cout << "toate numerele sunt impare";
//	}
//	else
//	{
//		cout << "Avem numere pare si impare amestecate ";
//	}
//	delete[] v;
//}
*/


/*Say whether an array has positive, negative, or a mix of integers.
//Ia un vector de numere intregi.
//Determina daca este un amestec de numere pozitive și negative in vector.
//Daca da, spune ca este un amestec, daca nu, spune ca toate sunt pozitive sau toate sunt negative

//int main()
//{
//	int a,neg=0,poz=0;
//	cout << "Cate numere avem? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i] < 0)
//		{
//			neg++;
//		}
//		else if (v[i] > 0)
//		{
//			poz++;
//		}
//	}
//	if (neg == a)
//	{
//		cout << "toate numerele sunt negative";
//	}
//	else if (poz == a)
//	{
//		cout << "toate numerele sunt pozitive";
//	}
//	else
//	{
//		cout << "Avem numere pozitive si negative amestecate ";
//	}
//	delete[] v;
//}
*/

/*Says in which place the first number of the array would be if it was in increasing order.
//Sa se detemeine ce pozitie este primul elelemt din tabel.
//In ordine crescatoare fara a schima tabelul 

//int main()
//{
//	int a,poz=1;
//	cout << "Cate numere ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		if (v[0]>v[i])
//		{
//			poz++;
//		}
//	}
//	cout << "Primul numar se poate muta pe pozitia " << poz << endl;
//	delete[] v;
//}
*/

/*Find largest value and how many times it appears.
//Sa se determine valaorea maxima si de cate ori apare acesta in vector

//int main()
//{
//	int a, max, repmax = 0;
//	cout << "Cate numere are vecorul? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//		if (i == 0)
//		{
//			max = v[i];
//
//		}
//		if (max < v[i])
//		{
//			max = v[i];
//			repmax = 0;
//		}
//		if (max == v[i])
//		{
//			repmax++;
//		}
//	}
//	cout << "mare " << max << " repeta " << repmax << " ori ";
//	delete[] v;
//}
*/

/*Determine largest and smallest number and how many times it appears in array.
//Sa se determine valaorea maxima si cea minima si de cate ori apare acesta in vector

//int main()
//{
//	int a, max,min,repmin=0, repmax = 0;
//	cout << "Cate numere are vecorul? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//		if (i == 0)
//		{
//			max = v[i];
//			min = v[i];
//		}
//		if (max < v[i])
//		{
//			max = v[i];
//			repmax = 0;
//		}
//		if (max == v[i])
//		{
//			repmax++;
//		}
//		if (min > v[i])
//		{
//			min = v[i];
//			repmin = 0;
//		}
//		if (min == v[i])
//		{
//			repmin++;
//		}
//	}
//	cout << "mare " << max << " repeta " << repmax << " ori "<< endl;
//	cout << "mic " << min << " repeta " << repmin << " ori ";
//	delete[] v;
//}
*/

/*Get an array, check if it is in increasing, decreasing, or mixed order.
//Ia un vector.
//Verifica daca este in ordine crescatoare, descrescatoare, sau amestecat aleatoriu.

//int main()
//{
//	int a, cresc = 0, descresc = 0;
//	cout << "Cate numere are vecorul? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a-1; i++)
//	{
//		if (v[i + 1] >= v[i])
//		{
//			cresc++;
//		}
//		if (v[i] >= v[i+1])
//		{
//			descresc++;
//		}
//
//	}
//	if (cresc == (a -1))
//	{
//		cout << "Toate numerele sunt crescatoare " << endl;
//	}
//	else if (descresc == (a - 1))
//	{
//		cout << "Toate numerele sunt descrescatoare " << endl;
//	}
//	else
//	{
//		cout << "Avem un amestec de numere crescatoare si descrscatoare "<< endl;
//	}
//	cout << " D " << descresc << endl;
//	cout << " C " << cresc << endl;
//	delete[] v;
//}
*/

/*Show only odd numbers larger than 15 from array.
//Ia un vector de numere intregi.
//Sa se caute ultimul element impar mai mare decat 15.
//Afiseaza-l.

//int main()
//{
//	int a,impar=0;
//	cout << "Cate numere are gigel? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " al lui GIGIEL? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i] % 2 != 0 && v[i] > 15 )
//		{
//			impar = v[i];
//		}
//	}
//	cout << impar ;
//	delete[] v;
//}
*/

/*Calculate the sum of odd numbers. Calculate the sum of even numbers.
//Ia un vector de numere short.
//Determina suma numerelor aflate pe pozitii impare.
//Afiseaza-o.
//Determina suma numerelor aflate pe pozitii pare.

//int main()
//{
//	int a, sumaimp=0,sumapar=0;
//	cout << "Cate numere are gigel? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " al lui GIGIEL? ";
//		cin >> v[i];
//		if (v[i]%2!=0)
//		{
//			sumaimp = sumaimp + v[i];
//		}
//		else
//		{
//			sumapar = sumapar + v[i];
//		}
//	}
//	cout << "Suma numerelor impare este " << sumaimp<< endl;
//	cout << "Suma numerelor pare este " << sumapar << endl;
//	delete[] v;
//}
*/

/*Say in which positions in an array there are even numbers.
//Ia un vector de numere unsigned short.
//Afiseaza toate numerele pare si la ce pozitia au fost gasite.
//De exemplu, daca lista a fost {2, 1, 5, 7, 8, 6}, afiseaza “numere pare au fost 2 din pozitia 1, 8 din pozitia 5, 6 din pozitia 6.”

//int main()
//{
//	unsigned short a;
//	cout << "Cate numere avem ? ";
//	cin >> a;
//	unsigned short* v = new unsigned short[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << " Cate este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//
//	}
//	cout << "numere pare sunt; "<< endl;
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i] % 2 == 0)
//		{
//			cout << v[i] << " din pozitia " << i + 1 << endl;
//		}
//	}
//	delete[] v;
//}
*/

/*Check divisibility by number "div" for all numbers in array.
//Se da un sir de numere naturale.
//Cere un numar “div”.
//Determina cate dintre numere din sir sunt divizibile cu “div”.

//int main()
//{
//	int a, div,numdiv=0;
//	cout << "Cate numere avem ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Ce este numarul " << i + 1 << " ? "<< endl;
//		cin >> v[i];
//	}
//	cout << "Care este numarul cu care vreti sa divideti ? ";
//	cin >> div;
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i]%div==0)
//		{
//			numdiv++;
//		}
//	}
//	cout << "Din sirul de numere " << numdiv << " sunt divizibile cu "<< div;
//	delete[] v;
//}
*/

/*Get a number and say how many numerals it has.
//Ia un numar de mai multe cifre.
//Dupa aceea, spune cate cifre sunt.

//int main()
//{
//	string a;
//	cout << "Da un sir de numere ";
//	cin >> a;
//	cout << a.length();
//}
*/


/*Say the 5th numeral in a number.
//Ia un numar de mai multe cifre.
//Dupa aceea, spune ce este a 5-a cifra, daca exista.
//Daca nu exista, spune ca nu sunt 5 cifre.

//int main()
//{
//	string a;
//	cout << "Da un sir de numere ";
//	cin >> a;
//	if (a.length()>=5)
//	{
//		cout << " Al ciuciulea elemet este " << a[4];
//	}
//}
*/

/*Show the bth numeral in a number. If there are not that many numerals in a number, say so.
//Ia un numar de mai multe cifre.
//Dupa aceea, intreaba a carei cifra vrei sa caut?
//Spune ce este aceasta cifra, daca exista.
//Daca nu exista, spune ca nu sunt atatea cifre.

//int main()
//{
//	string a;
//	int b;
//	cout << "Da un sir de numere ";
//	cin >> a;
//	cout << "A cata cifra doriti sa fie batuta ? ";
//	cin >> b;
//	if (a.length()>=b)
//	{
//		cout << " Al "<< b << " elemet este " << a[b-1];
//	}
//	if (a.length() < b)
//	{
//		cout << " Nu e atatea numere boss ";
//	}
//}
*/

/*Find the century that a year A.D. is in.
//Ia un an dupa Hristos.
//Si dupa aceea, spune in ce secol este.
//De exemplu, daca scriu 1936, secolul al 20-lea

//int main()
//{
//	string a;
//	cout << "Da un an dupa Isus ";
//	cin >> a;
//	int b = stoi(a)/100;
//	cout << "Suntem in secolul " << b + 1;
//}
*/

/*Determine the sum of the numerals in a number.
////Ia un numar.
////Determina suma cifrelor.
////De exemplu, daca numarul este 4821, suma este 15 (adica, 4+8+2+1 = 15)

//int main()
//{
//	string a;
//	int sum=0; 
//	string caca;
//	cout << "Care este numarul dorit ? ";
//	cin >> a;
//	for (int i = 0; i < a.length(); i++)
//	{
//		sum = sum + a[i]-48;
//	}
//	cout << "Suma numerele din " << a << " este " << sum << endl;
//}
*/

/*Find the largest numeral in a number.
//Determina cea mai mare cifra intr-un numar

//int main()
//{
//	string a; 
//	int car = 48;
//	int max, min;
//	cout << "Da un sir de numere ";
//	cin >> a;
//	max = a[0] - car;
//	min = a[0] - car;
//	for (int i = 1; i < a.length(); i++)
//	{
//		if (max < (a[i]-car))
//		{
//			max = a[i] - car;
//		}
//		else if (min > (a[i] - car))
//		{
//			min = a[i] - car;
//		}
//	}
//	cout << "Cel mai mare numar este " << max << endl;
//	cout << "Cel mai mic numar este " << min << endl;
//}
*/

/*Check if a number is a palindrome.
//Determina daca numarul introdus este un palindrom.
//(Adica, este la fel in orice directie. Exemple, 12321, 525, 77988977

//int main()
//{
//	string a;
//	int car = 48;
//	int pal = 0;
//	int st, fin;
//	cout << "Da un sir de numere ";
//	cin >> a;
//	for (int i = 0; i < a.length(); i++)
//	{
//		st = a[i] - car;
//		fin = a[a.length()-1 - i] - car;
//		if (st == fin)
//		{
//			pal++;
//		}
//	}
//	if (pal == a.length())
//	{
//		cout << " numerele sunt Palmiere ";
//	}
//	else
//	{
//		cout << " numerele nu sunt Palmiere ";
//	}
//}
*/


/*Check if number is perfect.
//Determina daca un numar este perfect.
//(Daca suma divizorilor afara de numarul insusi este egala cu numarul insusi. De exemplu 6 = 1+2+3)

//int main()
//{
//	int a,sum=0;
//	cout << " Care este numarul ? ";
//	cin >> a;
//
//	for (int i = 1; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			sum = sum + i ;
//        }
//	}
//	if (sum == a)
//	{
//		cout << "Numarul " << a << " este un numar perfect ";
//	}
//	else
//	{
//		cout << "Numarul "<<a<<" nu este perfect ";
//	}
//}
*/

/*Determine how many perfect numbers are between 2 and 10000.
//Determina cate numere perfecte sunt de la 2 pana la 10000.

//int main()
//{
//	int a=2,sum=0,numper=0;
//
//	while (a !=10000)
//	{
//		sum = 0;
//		cout << a << endl;
//		for (int i = 1; i < a; i++)
//		{
//			if (a % i == 0)
//			{
//				sum = sum + i;
//			}
//		}
//		if (sum == a)
//		{
//			numper = numper + 1;
//		}
//		a++;
//	}
//	cout << "Avem " << numper << " numere perfecte";
//}
*/

/*Find the largest prime number smaller than the number given.
//Preia un număr.
//Afișează cel mai mare număr prim care este mai mic decât numărul preluat.

//int main()
//{
//	int a, b;
//	bool prim=true;
//	int celmaimareprim;
//	cout << "Care este numar ? ";
//	cin >> b;
//
//	for (int j = 2; j <= b; j++)
//	{
//		prim = true;
//		a = j;
//		for (int i = 2; i < a - 1; i++)
//		{
//
//			if (a % i == 0)
//			{
//				prim = false;
//				break;
//			}
//		}
//		if (prim == true)
//		{
//			celmaimareprim = a;
//		}
//		cout << "Numar " << a << endl;
//		cout << "Prim " << celmaimareprim << endl;
//	}
//	cout << "Cel mai mare prim " << celmaimareprim;
//}
*/

/*Change string to lowercase. Show an error message if there are nonletters.
//Preia un string 
//Afiseaza acelasi string ca litere mici 
//Daca exista vrun simbol sau cifra apare da eroare;

//int main()
//{
//	string a,tot;
//	cout << "Scrie ceva cu majuscile ";
//	cin >> a;
//	for (int i = 0; i < a.length(); i++)
//	{
//		char poz = a[i];
//		if (poz >= 33 && poz < 65)
//		{
//			cout << "Scrie ceva fara simboliuri (ex:*&^^&#@!)";
//			break;
//		}
//		else
//		{
//			char b = poz + 32;
//			tot = tot + b;
//		}
//	}
//	if (tot.length() == a.length())
//	{
//		cout << " Cu litere mici: " << tot;
//	}
//}
*/

/*Turn lowercase to uppercase and uppercase to lowercase. For other characters, give an error message.
//Preia un string 
//Afiseaza acelasi string ca litere mici in loc de litere mari si invers 
//Daca exista vrun simbol sau cifra apare da eroare;

//int main()
//{
//	string a, tot;
//	int f;
//	cout << "Scrie ceva cu majuscile ";
//	cin >> a;
//	for (int i = 0; i < a.length(); i++)
//	{
//		char poz = a[i];
//		if (poz >=33 && poz<65)
//		{
//			cout << "Scrie ceva fara simboliuri (ex:*&^^&#@!)";
//			break;
//		}
//		else if (poz >= 65 && poz < 97 )
//		{
//			char b = poz + 32;
//			tot = tot + b;
//		}
//		else if (poz >= 97)
//		{
//			char b = poz - 32;
//			tot = tot + b;
//		}
//	}
//	if (tot.length()==a.length())
//	{
//		cout << " Litere mari in loc de litere mici si invers: " << tot;
//	}
//}
*/


// Tema Luni 15.08.2022
/* Try using getline to get strings with spaces. Get inputs of last name and first name. Generate an ID of firstname2022. 
//int main()
//{
//	string a,id;
//	cout << "Scrie Numele si Prenumele: ";
//	getline(cin, a);
//	for (int i = 0; i < a.length(); i++)
//	{
//		char poz = a[i];
//		if (poz == 32 )
//		{
//			id.clear();
//		}
//		else
//		{
//			char b = poz;
//			id = id + b;
//		}
//	}
//	cout << "ID-ul pentu " << a << " este " << id << "2022" << endl;
//}
*/

// Tema Marti 15.08.2022
/*Get a string of numbersand replace any appearance of 22 with 20.
int main()
{
	string a,num;
	cout << "Scire un sir de numere  ";
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if(a[i] == '2' && a[i + 1] == '2')
		{
			num = num + "20";
			i++;
		}
		else
		{
			num = num + a[i];
		}
	}
	cout << "Noul sir: " << num << endl;
}
*/

//tema pentru miercuri: 
//sa vezi daca iti reamintesti cum sa faci sortare prin insertie...
//faci un program care sorteaza numere in ordine crescatoare

/*insertion sort

//int main()
//{
//	int a;
//	cout << "Cate numere avem ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Ce numar este pe pozitia " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a;i++)
//	{
//		int min = v[i];
//		int poz=i;
//		for (int j = i+1; j < a; j++)
//		{
//
//			if (v[j] < min)
//			{
//				min = v[j];
//				poz = j;
//			}
//		}
//		v[poz] = v[i];
//		v[i] = min;
//	}
//	for (int i = 0; i < a; i++)
//	{
//		cout << v[i] << endl;
//	}
//	delete[] v;
//}
*/


/* Sort in alphabetical order the letters in a string
//tema pentru joi:
//faci un program care sorteaza string in ordine alfabetica

//int main()
//{
//	string a,tot;
//	cout << "Scrie ceva ";
//	cin >> a;
//	for (int i = 0; i < a.length(); i++)
//	{
//		char min = a[i];
//		int poz = i;
//		for (int j = i+1; j < a.length(); j++)
//		{
//			char min2 = a[j];
//			if (min2 < min)
//			{
//				min = a[j];
//				poz = j;
//			}
//		}
//		a[poz] = a[i];
//		a[i] = min;
//	}
//	for (int i = 0; i < a.length(); i++)
//	{
//		cout << a[i] << ",";
//	}
//}
*/

// sortare nume;

/*sort names in alphabetical order
//int main()
//{
//	int a;
//	cout << "Cate nume avem ? ";
//	cin >> a;
//	string* v = new string[a];
//	
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Numele persoanei " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		string min = v[i];
//		int poz = i;
//		for (int  j = i+1; j < a; j++)
//		{
//			string min2 = v[j];
//			if (min2 < min)
//			{
//				min = v[j];
//				poz = j;
//			}
//		}
//		v[poz] = v[i];
//		v[i] = min;
//	}
//	cout << "Numele in ordine alfabatica sunt: "<< endl;
//	for (int i = 0; i < a ; i++)
//	{
//		cout << v[i]<< endl;
//	}
//	delete[] v;
//}
*/

// Matrice

/*Multidimensional arrays (matrices) ... Get values and show them*/
int main()
{
	int a, b;
	cout << "Cate lini avem ? ";
	cin >> a;
	cout << "Cate coloane avem ? ";
	cin >> b;
	//creare
	int** v = new int* [a];
	for (int i = 0; i < a; i++)
	{
		v[i] = new int[b];
	}
	//populare
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "Care este numarul in linia " << i + 1 << " coloana " << j + 1 << " ? ";
			cin >> v[i][j];
		}
	}
		//afisare
	cout << "matricea este "<< endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout <<  v[i][j] << "\t";

		}
		cout << endl;
	}
 for (int i = 0; i < a; i++)
	{
		delete[] v[i];
	}
	delete[] v;
}


/* Populate a matrix with strings. Respond with what string is in a particular line and column as given by user. If user searches for a string, respond with line and column where it it's stored.
// MAtrice cu nume

//int main()
//{
//	int a, b,gasit=0;
//	string num;
//	cout << "Cate lini sunt ? ";
//	cin >> a;
//	cout << "Cate coloane sunt ? ";
//	cin >> b;
//	string** v = new string* [a];
//	for (int i = 0; i < a; i++)
//	{
//		v[i] = new string[b];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "Care este numele in linia" << i + 1 <<" ? " << " coloana " << j + 1 << " ? ";
//			cin >> v[i][j];   
//		}
//	}
//	cout << "Ce nume doriti sa vedeti daca se afla in matrice ? ";
//	cin >> num;
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			if (num == v[i][j])
//			{
//				cout << num << " se afla in linia  " << i + 1 << " colona " << j + 1;
//				gasit++;
//			}
//		}
//	}
//	if (gasit == 0)
//	{
//		cout << " Numele nu se afla in lista ";
//	}
// for (int i = 0; i < a; i++)
//	{
//		delete[] v[i];
//	}
//	delete[] v;
//
//}
*/

/* Matrix with number of days in a week a store chain is open and the number of stores in the chain.
* In each cell, say how much profit a store made on a day of the week.
* Give the option to organize by day or by store. (0 or 1)
* Show results by day or by store.
// Matrice cu magazine

//int main()
//{
//	int a, b,c;
//	cout << " Cate zile din saptamna este deschis ? ";
//	cin >> a;
//	cout << " Cate magazine avem ? ";
//	cin >> b;
//	int** v = new int* [a];
//	for (int  i = 0; i < a; i++)
//	{
//		v[i] = new int[b];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "Ce profit avem in ziua  " << i + 1 << " la magazinul " << j + 1 << " ? ";
//			cin >> v[i][j];
//		}
//	}
//	cout << "Tasteaza 1 daca vrei sa afisam pe zile sau 0 daca vrei pe magazine ";
//	cin >> c;
//	if (c==1)
//	{
//		// rezultate organizate pe zi
//		for (int i = 0; i < a; i++)
//		{
//			cout << "in ziua " << i + 1 << " a facut acest profit: " << endl;
//			for (int j = 0; j < b; j++)
//			{
//				cout << " magazinul  " << j + 1 << ": " << v[i][j] << "\n";
//			}
//			cout << endl;
//		}
//	}
//	else
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "la magazinul " << j + 1 << " a facut acest profit: " << endl;
//			for (int i = 0; i < a; i++)
//			{
//				cout << " in ziua  " << i + 1 << ": " << v[i][j] << "\n";
//			}
//			cout << endl;
//		}
//	}
// for (int i = 0; i < a; i++)
//	{
//		delete[] v[i];
//	}
//	delete[] v;
//
//}
*/

/*Same problem as above but calculate in which store on which day there was the biggest profit, and for which there was the lowest profit.
//Parcurge matricea încă o dată și să spui în ce zi pentru ce magazin a fost profit cel mai mare
//Și pentru ce zi la ce magazin a fost profit cel mai mic

//int main()
//{
//	int a, b,c;
//	cout << " Cate zile din saptamna este deschis ? ";
//	cin >> a;
//	cout << " Cate magazine avem ? ";
//	cin >> b;
//	int** v = new int* [a];
//	for (int  i = 0; i < a; i++)
//	{
//		v[i] = new int[b];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "Ce profit avem in ziua  " << i + 1 << " la magazinul " << j + 1 << " ? ";
//			cin >> v[i][j];
//		}
//	}
//	cout << "Tasteaza 1 daca vrei sa afisam pe zile sau 0 daca vrei pe magazine ";
//	cin >> c;
//	if (c==1)
//	{
//		// rezultate organizate pe zi
//		for (int i = 0; i < a; i++)
//		{
//			cout << "in ziua " << i + 1 << " a facut acest profit: " << endl;
//			for (int j = 0; j < b; j++)
//			{
//				cout << " magazinul  " << j + 1 << ": " << v[i][j] << "\n";
//			}
//			cout << endl;
//		}
//	}
//	else
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "la magazinul " << j + 1 << " a facut acest profit: " << endl;
//			for (int i = 0; i < a; i++)
//			{
//				cout << " in ziua  " << i + 1 << ": " << v[i][j] << "\n";
//			}
//			cout << endl;
//		}
//	}
//	int max, min,maxi = 0,maxj = 0,mini = 0,minj = 0;
//	max = v[0][0];
//	min = v[0][0];
//	for (int i = 0; i < a; i++)
//	{
//		for (int  j = 0; j < b; j++)
//		{
//			if (max < v[i][j])
//			{
//				max = v[i][j];
//				maxi = i;
//				maxj = j;
//			}
//			else if (min > v[i][j])
//			{
//				min= v[i][j];
//				mini = i;
//				minj = j;
//			}
//		}
//	}
//	cout << "Magazinul " << maxj+1 << " In ziua " << maxi+1 << " a avut cel mai mare profit " << max << endl;
//	cout << "Magazinul " << minj+1 << " In ziua " << mini+1 << " a avut cel mai mic profit " << min << endl;
//
//	 for (int i = 0; i < a; i++)
//		{
//			delete[] v[i];
//		}
//		delete[] v;
//
//}
*/

/*Get data for a museums and b days. Input number of visitors in each museum on each day for the cells. Ask for which day and museum you want to find number of visitors. Show the right number.
//Scrie un program care intreaba pentru cate zile si pentru cate muzee luam datele
//Dupa aceea, preia numar de vizitatori pentru fiecare zi pentru fiecare muzeu
//si la sfarsit, intreaba pentru ce zi si pentru ce muzeu sa afiseze numarul de vizitatori, si afiseaza acest numar
//spune suma tuturor vizitatorilor pentru toate muzeele

//int main()
//{
//	int a, b, suma=0,zi,muz;
//	cout << "Cate Muzee avem ? ";
//	cin >> a;
//	cout << "Cate zile din saptamana este deschis ? ";
//	cin >> b;
//	int** v = new int* [a];
//	for (int i = 0; i < a; i++)
//	{
//		v[i] = new int[b];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "Cati vizitatori avem la muzeul " << i + 1 << " in ziua " << j + 1 << " ? ";
//			cin >> v[i][j];
//		}
//	}
//	cout << " Pentru ce muzeu doriti sa afisati ? " << endl;
//	cin >> muz;
//	cout << " Pentru ce zi doriti sa afisati ? " << endl;
//	cin >> zi;
//	cout << v[muz - 1][zi - 1]<< endl;
//
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			suma = suma + v[i][j];
//		}
//	}
//	cout << " In total la toate muzele am avut " << suma << " vizitatori " << endl;
//	 for (int i = 0; i < a; i++)
//		{
//			delete[] v[i];
//		}
//		delete[] v;
//
//}
*/


/*Store grades for x students and y courses. Show the whole matrix. Ask whether user wants to find average grade for a student or for a course. Ask for which student or which course.
* Show mean for that student or for that course.
//Codeaza o matrice sa stocheze notele pentru x studenti si y materii.
//Dupa ce preiei notele, afiseaza toata matricea.
//Dupa aceea, intreaba daca vrea sa afle media pentru vreun student sau o materie.
//Daca spune ca vrea medie pentru un student, intreaba pentru ce student, si afiseaza media notelor pentru acest student.
//De exemplu "Studentul 5 a avut media nota 7."daca spune ca vrea medie pentru o materie,
//intreaba pentru ce materie, si afiseaza media notelor pentru toti studentii pentru media asta.De exemplu, "In cursul 3, media a fost nota 6."

//int main()
//{
//	//Codeaza o matrice sa stocheze notele pentru x studenti si y materii.
//	int a, b,c,stu,mat;
//	double medstud = 0, medmater = 0;
//	cout << "Cati studenti avem ? ";
//	cin >> a;	
//	cout << "Cate materi avem ? ";
//	cin >> b;
//	int** v = new int* [a];
//	for (int i = 0; i < a; i++)
//	{
//		v[i] = new int[b];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "Ce nota are studentul " << i + 1 << " la materia " << j + 1 << " ? ";
//			cin >> v[i][j];
//		}
//	}
//	cout << endl;
//	//Dupa ce preiei notele, afiseaza toata matricea.
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << v[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	//Dupa aceea, intreaba daca vrea sa afle media pentru vreun student sau o materie.
//	cout << "Doriti sa afisat media pentru un student sau pentru o materie ? "<<endl;
//	cout << "Tasteaza 1 pentru student sau 0 pentru Matrice ";
//	cin >> c;
//	if (c==1)
//	{
//		cout << "Pentru ce Care student doriti media ? ";
//		cin >> stu;
//
//		for (int j = 0; j < a; j++)
//		{
//
//			medstud = medstud + v[stu - 1][j];
//
//		}
//		cout << "Media studentului "<< stu << " este "<< medstud/b;
//	}
//	else if(c==0)
//	{
//		cout << "Pentru ce Care materie doriti media ? ";
//		cin >> mat;
//		for (int i = 0; i < a; i++)
//		{
//				{
//					medmater = medmater + v[i][mat-1];
//				}
//		}
//		cout << "Media Materiei" << mat << " este " << medmater / a;
//	}
//	 for (int i = 0; i < a; i++)
//		{
//			delete[] v[i];
//		}
//		delete[] v;
//
//}
*/

/*Populate an array. Show all numbers up to a particular position in an array.
//int main()
//{
//	int a,b;
//	cout << "Cate numere doriti? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ";
//		cin >> v[i];
//	}
//	cout << "Pana la ce poziti doriti ? ";
//	cin >> b;
//	cout << "numerele pana la pozitia "<<b <<" sunt: ";
//	for (int i = 0; i < b; i++)
//	{
//		cout << v[i] << " ";
//	}
//	delete[] v;
//}
*/


/* Take a number and display the number of zeros the number ends with.
//Initializeaza un numar x. Determina cu cate zerouri se termina numarul

//int main()
//{
//	string x;
//	int num=0;
//	cout << "Da un numar; ";
//	cin >> x;
//	for (int i = x.length()-1; i >=0; i--)
//	{
//		char b = x[i];
//		if (b==48)
//		{
//			num++;
//		}
//		else if (b!=48)
//		{
//			break;
//		}
//	}
//	cout << x << " se termina cu " << num << " zerouri ";
//}
*/


/* Input of n natural numbers. How many zeros does their product end with? Don't convert to string.
//Dându-se n numere naturale să se determine cu câte zerouri se termină produsul lor.

//int main()
//{
//	int n,sum=1,a;
//	int zero=0;
//	cout << "Cate numere avem? ";
//	cin >> n;
//	int* v = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << " Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum * v[i];
//	}
//	do
//	{
//		zero++;
//		a = pow(10, zero);
//
//	} while (sum%a==0);
//	cout << sum << endl;
//	cout << "Suma numerelor se termina in " << zero-1 << " zerouri";
//	delete[] v;
//}
*/

/*Find all the numbers in an array that are divisible by a number b and get the sum.
//Să se numere şi să se însumeze elementele divizibile cu o valoare dată dintr-un şir de numere.

//int main()
//{
//	int a,b,sum=0,cate=0;
//	cout << "cate numere avem ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	cout << "Cu ce numar vreti sa dividem ? ";
//	cin >> b;
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i]%b==0)
//		{
//			sum = sum + v[i];
//			cate++;
//		}
//	}
//	cout << "avem " << cate << " elemente divizibile cu " << b << " si suma acestorea este " << sum;
//	delete[] v;
//}
*/

/*Verify if the numbers in an array are in decreasing order.
//Sa se verifice daca numere intr-un sir sunt ordonate descrescator

//int main()
//{
//	int a,cres=1;
//	cout << "Cate numere avem ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1<< " ? ";
//		cin >> v[i];
//	}
//	for (int i = 0; i < a-1; i++)
//	{
//
//		if (v[i] < v[i+1])
//		{
//			cres++;
//		}
//		else
//		{
//			cres--;
//		}
//	}
//	if (cres == a)
//	{
//		cout << "Sunt in ordine crescatoare";
//	}
//	else
//	{
//		cout << "sunt in ordine descrescatore";
//	}
// delete[] v;
//}
*/


/* Get n real numbers. See if the list of n numbers is in increasing order up till position k and in decreasing order after that.
//Se dau 2 numere n şi k şi apoi n numere reale. Să se verifice dacă cele n numere sunt ordonate crescător până la pozitia k şi descrescător până la sfârşit.

//int main()
//{
//	int a, b, cres = 1, des=1;
//	cout << "Cate numre avem ? ";
//	cin >> a;
//	int* v = new int[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numarul " << i + 1 << " ? ";
//		cin >> v[i];
//	}
//	cout << "Pana la ce pozitie vrei sa verifieci daca e cescator ? ";
//	cin >> b;
//	for (int i = 0; i < b - 1; i++)
//	{
//		if (v[i] < v[i + 1])
//		{
//			cres++;
//		}
//		else
//		{
//			cres--;
//		}
//	}
//	cout << "Pana la pozitia " << b << endl;
//	if (cres == b)
//	{
//		cout << "Sunt in ordine crescatoare " << endl;
//	}
//	else
//	{
//		cout << "Nu sunt in ordine crescatoare " << endl;
//	}
//
//	for (int i = b; i < a - 1; i++)
//	{
//		if (v[i] > v[i + 1])
//		{
//			des++;
//		}
//		else
//		{
//			des--;
//		}
//	}
//	cout << "de la pozitia " << b << " pana la final " << endl;
//	if (des == (a-b))
//	{
//		cout << "Sunt in ordine descrescatoare " << endl;
//	}
//	else
//	{
//		cout << "Nu sunt in ordine descrescatoare " << endl;
//	}
//	delete[] v;
//}
*/

/*Get numbers until user enters 0. Show sum of even numbers, sum of odd numbers.
//Preia numere pana cand cineva tasteaza 0. Afiseaza suma numerelor.
//int main()
//{
//	int a,sumpar=0,sumimpar=0;
//	bool par = false;
//
//	do
//	{
//		cout << "Ce numar doriti ? ";
//		cin >> a;
//		if (par==true)
//		{
//			sumpar = sumpar + a;
//		}
//		else
//		{
//			sumimpar = sumimpar + a;
//		}
//		par = !par;
//	} while (a!=0);
//	cout << "Suma numerelor este pare este  " << sumpar  << endl;
//	cout << "Suma numerelor este impare este  " << sumimpar << endl;
//	delete[] v;
//}

/*Make a struct of students and their names and departments. Populate an array of students. Ask the user for which department to show the number of students.
//Spune cati studenti sunt.
//Dupa intreaba pentru ce facultate vrei sa vezi numarul de studenti inscrisi.

//struct student
//{
//	string nume,facultate;
//};
//
//int main()
//{
//	int a,ins=0;
//	string num;
//	cout << "Cati studenti avem ? ";
//	cin >> a;
//	student* v = new student[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numele studentului " << i + 1 << " ? ";
//		cin >> v[i].nume;
//		cout << "La ce facultate este studentul " << i + 1 << " ? ";
//		cin >> v[i].facultate;
//	}
//	cout << "Pentru ce facultate vrei sa sa vezi numarul de studenti inscrisi ? ";
//	cin >> num;
//	for (int i = 0; i < a; i++)
//	{
//		if (num == v[i].facultate)
//		{
//			ins++;
//		}
//	}
//	cout << "Avem " << ins << " studenti la facultatea " << num << endl;
//	cout << "Acestia sunt; " << endl;
//	for (int i = 0; i < a; i++)
//	{
//		if (num == v[i].facultate)
//		{
//			cout << v[i].nume << endl;
//		}
//	}
//	delete[] v;
//}
*/

/*Store data about tourist attractions, county where it is located, and number of visitors in a year. Det
//Faci o baza de date cu obiective turistice, in ce judet este, si cati vizitatori sunt in fiecare an.
//La sfarsit, spune ce obiectiv a avut cei mai multi vizitatori.
//Provocare: In ce judet sunt cei mai multi vizitatori.

//struct obieciv
//{
//	string nume, judet;
//	int vizitatori;
//};
//
//int main()
//{
//	int a,sum=0;
//	string obi,jud;
//	cout << "Cate obiective turistice avem ? ";
//	cin >> a;
//	obieciv* v = new obieciv[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Cum se numeste obiectivul " << i+1 << " ? ";
//		cin>> v[i].nume;
//		cout << "In ce judet se afla "  << v[i].nume << " ? " << " ";
//		cin >> v[i].judet;
//		cout << "Cati vizitatori au fost la " << v[i].nume << " in judetul " <<v[i].judet<<" ? ";
//		cin >> v[i].vizitatori;
//	}
//	obieciv max = v[0];
//	for (int i = 0; i < a; i++)
//	{
//		if (max.vizitatori < v[i].vizitatori)
//		{
//			max = v[i];
//			obi = v[i].nume;
//		}
//	}
//	cout << "obiectivul cu cei mai mult vizitarori a fost " << obi << " cu " << max.vizitatori;
//	delete[] v;
//}
*/

/* 5 stores in 4 days of promotion. Get records of how much profit each store made in each day. Show results as a table.
//magazine  
//int main()
//{
//	int** v = new int* [5];
//	for (int i = 0; i < 5; i++)
//	{
//		v[i] = new int[4];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << "Cat a vandut magazinul " << i + 1 << " in ziua " << j + 1 << " ? ";
//			cin >> v[i][j];
//		}
//	}
//	cout << endl;
//
//	cout << "Magazinele si Profit pe Zi" << endl;
//	for (int j = 0; j < 4; j++)
//		cout << "\t" << j + 1;
//
//	cout << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << i + 1 << "\t";
//		for (int j = 0; j < 4; j++)
//		{
//			cout << v[i][j]<< "\t";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		delete[] v[i];
//	}
//	delete[] v;
//}
*/

/*Keep data for channels of youtube, name of channel, year of creation, number of subscribers. Populate data. Show oldest channel. Show most popular channel.
// youtube

//struct youtube
//{
//	string nume;
//	int an, abon;
//};
//
//int main()
////{
//	int a,afi;
//	cout << "Cate canale de youtube avem ? ";
//	cin >> a;
//	youtube* v = new youtube[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numele canalului de youtube "<<i+1<<" ? " << endl;
//		cin >> v[i].nume;
//		cout << "Cand a fost creat canalul de youtube  " << v[i].nume << " ? " << endl;
//		cin >> v[i].an;
//		cout << "Cati abonati are canalul de youtube " << v[i].nume << " ? "<< endl;
//		cin >> v[i].abon;
//	}
//	cout << "Tasteaza 1 pentru afisa cananlul cel mai vechi sau 2 pentru canalul cel mai popular " << endl;
//	cin >> afi;
//	youtube vech = v[0];
//	youtube popu = v[0];
//	if (afi==1)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			if (vech.an > v[i].an)
//			{
//				vech = v[i];
//			}
//		}
//		cout << "Canalul cel mai veci este " << vech.nume << " din anul " << vech.an;
//	}
//	else if (afi == 2)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			if (popu.abon < v[i].abon)
//			{
//				popu = v[i];
//			}
//		}
//		cout << "Canalul cel mai popular este " << popu.nume << " cu " << popu.abon<<" abonati";
//	}
//	delete[] v;
//}
*/

/* Keep track of scholarship candidates by name of student, social security number, grade. Sort array by grade. Show top 3 students.
//burse 
//struct bursa
//{
//	string nume;
//	long cnp;
//	double nota;
//	bool scot = false;
//};
//
//int main()
//{
//	int a;
//	cout << "Cati studenti avem ? ";
//	cin >> a;
//	bursa* v = new bursa[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numele studentului " << i + 1 << " ? ";
//		cin >> v[i].nume;
//		cout << "Care este CNP-lui " << v[i].nume << " ? ";
//		cin >> v[i].cnp;
//		cout << "Ce nota are studentul " << v[i].nume << " cu CNP-ul " << v[i].cnp << " ? ";
//		cin >> v[i].nota;
//	}
//	int poz;
//	for (int i = 0; i < a; i++)
//	{	
//		bursa max = v[i];
//		int poz = i;
//		for (int j = i+1; j < a; j++)
//		{
//			if (max.nota < v[j].nota)
//			{
//				max = v[j];
//				poz = j;
//			}
//		}
//		v[poz] = v[i] ;
//		v[i] = max;
//	}
//	cout << "Cei 3 studenti cu bursa sunt "<< endl;
//	for (int  i = 0; i < 3; i++)
//	{
//		cout << v[i].nume << " cu nota " << v[i].nota<< endl;
//	}
//	delete[] v;
//}
*/

/*Same as above, but show all students with grades 8 or higher. 
// nota peste 8 afisare;

//struct bursa
//{
//	string nume;
//	long cnp;
//	double nota;
//	bool scot = false;
//};
//
//int main()
//{
//	int a;
//	cout << "cati studenti avem ? ";
//	cin >> a;
//	bursa* v = new bursa[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "care este numele studentului " << i + 1 << " ? ";
//		cin >> v[i].nume;
//		cout << "care este cnp-lui " << v[i].nume << " ? ";
//		cin >> v[i].cnp;
//		cout << "ce nota are studentul " << v[i].nume << " cu cnp-ul " << v[i].cnp << " ? ";
//		cin >> v[i].nota;
//	}
//	cout << "Cei cu note peste 8 sunt: " << endl;
//	for (int i = 0; i < a; i++)
//	{
//		if (v[i].nota >= 8)
//		{
//			cout << v[i].nume << " cu nota " << v[i].nota << endl;
//		}
//	}
//	delete[] v;
//}
*/


/*Put in a matrix rows of students, column of tests, cells of grades on tests. Show as a table. Ask for which student and test to find grade.
// matrice cu notele studentului si nota acestuia.
// intreaba pentru care student si pentru care teste vrea sa afisezi nota 
//int main()
//{
//	int a, b, stud, mat;
//	cout << "Cati studenti avem ? ";
//	cin >> a;
//	cout << "Cate teste avem ? ";
//	cin >> b;
//	int** v = new int* [a];
//	for (int i = 0; i < a; i++)
//	{
//		v[i] = new int[b];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "Ce nota are studentul " << i + 1 << " la matria " << j + 1 << " ? ";
//			cin >> v[i][j];
//		}
//	}
//	cout << endl;
//	cout << "Srudenti si Materi: " << endl;
//	for (int j = 0; j < b; j++)
//	{
//		cout << "\t" << "M:" << j + 1;
//	}
//	cout << endl;
//
//	for (int i = 0; i < a; i++)
//	{
//		cout << "S:" << i + 1 << "\t";
//
//		for (int j = 0; j < b; j++)
//		{
//			cout << v[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "Pentru care student vreti sa cautati nota ? ";
//	cin >> stud;
//	cout << "Pentru care Materie ? ";
//	cin >> mat;
//	cout << endl;
//	cout << "Nota studentului " << stud << " la materia " << mat << " este : " << v[stud - 1][mat - 1];
//	for (int i = 0; i < a; i++)
//	{
//		delete[] v[i];
//	}
//	delete[] v;
//} 
*/

/*Same as above. But make separate functions for creating the matrix, getting inputs, showing the table, finding the grade for a particular student on particular test. Sort students based on grade. Post students with grades over 8.
//Să faci o matrice în care stochezi notele pentru x studenți și y teste.
//Fa funcții separate pentru crearea matricii, preluarea datelor, afișarea datelor într-o formă de tabel.
//Căutarea și afișarea notei dacă utilizatorul cere un student și un test anume.
//(De exemplu, student 3 la test 4 are nota 10.)
// După aceea creează o funcție în care afișează fiecare test in care nota a fost mai mare sau egal cu 8.

//void preluare(int a,int b,int**v)
//{
//
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "Ce nota are studentul " << i + 1 << " la testul " << j + 1 << " ";
//			cin >> v[i][j];
//		}
//	}
//}
//void afis(int a, int b, int** v)
//{
//	cout << endl;
//	cout << "Studenti si teste : " << endl;
//	for (int j = 0; j < b; j++)
//	{
//		cout << "\t" << "|" << "T" << j + 1 << "|";
//	}
//	cout << endl;
//	for (int i = 0; i < a; i++)
//	{
//		cout << "S:" << i + 1 << "\t";
//		for (int j = 0; j < b; j++)
//		{
//			cout << "|" << v[i][j] << "|" << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//void cutare(int**v)
//{
//	int c, stud, test;
//	cout << "Doriti sa cautati o nota a vrunui student ? " << endl;
//	cout << "La final vom afisa o lista cu cei care au nota mai mare de 8" << endl;
//	cout << "Tastati 1 pentru da sau 0 pentru nu ";
//	cin >> c;
//	if (c == 1)
//	{
//		cout << "Pentru care student doriti nota  ? ";
//		cin >> stud;
//		cout << "Pentru care Teste doriti nota ? ";
//		cin >> test;
//		cout << "Studentul " << stud << " la testul " << test << " are nota " << v[stud - 1][test - 1];
//		cout << endl;
//	}
//	else if (c == 0)
//	{
//		cout << "La revedere ";
//	}
//	cout << endl;
//}
//void filtrare( int a, int b, int** v)
//{
//
//	cout << "Studenti cu notele peste 8 sunt : ";
//	cout << endl;
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			if (v[i][j] >= 8)
//			{
//				cout << "Studentul " << i + 1 << " cu nota " << v[i][j] << " la testul " << j + 1 << endl;
//			}
//		}
//	}
//	cout << endl;
//}
//void sortare(int a, int b, int** v)
//{
//	int sort, rep;
//	bool da = true;
//	while (da == true)
//	{
//		cout << "Dupa ce test doriti sa sortam in ordine descrescatoare ? ";
//		cin >> sort;
//		cout << endl;
//		cout << "Rezult dupa sortare descrescatore: " << endl;
//		for (int i = 0; i < a; i++)
//		{
//			int* max = v[i];
//			int pozmax = i;
//			for (int j = i + 1; j < a; j++)
//			{
//				if (max[sort - 1] < v[j][sort - 1])
//				{
//					max = v[j];
//					pozmax = j;
//				}
//			}
//			v[pozmax] = v[i];
//			v[i] = max;
//		}
//		cout << endl;
//		cout << "Studenti si teste : " << endl;
//		for (int j = 0; j < b; j++)
//		{
//			cout << "\t" << "|" << "T" << j + 1 << "|";
//		}
//		cout << endl;
//		for (int i = 0; i < a; i++)
//		{
//			cout << "S:" << i + 1 << "\t";
//			for (int j = 0; j < b; j++)
//			{
//				cout << "|" << v[i][j] << "|" << "\t";
//			}
//			cout << endl;
//		}
//		cout << "doriti sa cautati pentru alt test ? " << endl;
//		cout << "1 pentru DA sau 0 pentru NU  ";
//		cin >> rep;
//		if (rep == 1)
//		{
//			da = true;
//		}
//		else
//		{
//			da = false;
//		}
//	}
//}
//
//int main()
//{
//	int a, b;
//	cout << "Cati studenti avem ? ";
//	cin >> a;
//	cout << "Cate teste avem ? ";
//	cin >> b;
//	int** v = new int* [a];
//	for (int i = 0; i < a; i++)
//	{
//		v[i] = new int[b];
//	}
//	
//	preluare(a, b, v);
//	afis(a, b, v);
//	cutare(v);
//	filtrare(a, b, v);
//	sortare(a, b, v);
//	for (int i = 0; i < a; i++)
//	{
//		delete[] v[i];
//	}
//	delete[] v;
//}
*/

/*Sort employees in decreasing order of seniority, separate out parts in functions
//ordoarea angajatilor descrescator in functie de vechime 

//struct angajati
//{
//	string nume;
//	int vechime;
//};
//
//void afis(int a, angajati* v)
//{
//	cout << endl;
//	for (int i = 0; i < a; i++)
//	{
//		cout << v[i].nume << " are vechime " << v[i].vechime << " ani " << endl;
//	}
//	cout << endl;
//}
//void med(int a, angajati* v)
//{
//	double sum = 0;
//	for (int i = 0; i < a; i++)
//	{
//		sum = sum + v[i].vechime;
//	}
//	cout << "Media vechimi angajatilor este " << sum / a << endl;
//}
//void sortare(int a, angajati* v)
//{
//	for (int i = 0; i < a; i++)
//	{
//		angajati max = v[i];
//		int pozmax = i;
//		for (int j = i + 1; j < a; j++)
//		{
//			if (max.vechime < v[j].vechime)
//			{
//				max = v[j];
//				pozmax = j;
//			}
//		}
//		v[pozmax] = v[i];
//		v[i] = max;
//	}
//	cout << "Dupa sortare descrescatoare in functie de vechime" << endl;
//	for (int i = 0; i < a; i++)
//	{
//		cout << v[i].nume << " are " << v[i].vechime << " ani vechime " << endl;
//	}
//}
//
//int main()
//{
//	int a;
//	cout << "Cati angajati avem ? ";
//	cin >> a;
//	angajati* v = new angajati[a];
//	for (int i = 0; i < a; i++)
//	{
//		cout << "Care este numele angajatului " << i + 1 << " ? ";
//		cin >> v[i].nume;
//		cout << "Ce vechime are " << v[i].nume << " ? ";
//		cin >> v[i].vechime;
//	}
//	afis(a, v);
//	med(a, v);
//	sortare(a, v);
//	delete[] v;
//}
*/

/*Use recursive function to add x y times.
//tema pentru maine:
//Preia un numar x, si preia un numar y care spune de cate ori sa - l adune.Prin recursivitate, aduna x atatea ori, si afiseaza rezultatul la final.
//De exemplu :
//x = 3
//y = 4
//3 + 3 + 3 + 3
//afiseaza 12
//int adun(int a, int b)
//{
//	if (b==1)
//	{
//	return a;
//	}
//	else 
//	{
//		return a*adun(a,b-1);
//	}
//	
//}
//
//int main()
//{
//	int a, b;
//	cout << "Care este numarul ?  ";
//	cin >> a; 
//	cout << "De cate ori adunam ?  ";
//	cin >> b;
//	cout << adun(a,b);
//}
*/

/*Use recursive function to multiply a 3 times.
//int imul3(int x, int sum)
//{
//	if (x==1)
//	{
//		return sum;
//	}
//	else
//	{
//		return imul3(x - 1,sum)*sum;
//	}
//}
//
//int main()
//{
//	int a,sum=3;
//	cout << "De cate ori imultim 3 ? ";
//	cin >> a;
//	imul3(a, sum);
//	cout << " Nnumrul este " << endl;
//	cout << imul3(a, sum);
//}
//
*/

/*Use recursive function to multiply 3 a times.
//int i3(int a)
//{
//	if (a == 1)
//	{
//		return 3;
//	}
//	else
//	{
//		return i3(a - 1) * 3;
//	}
//}
//
//int main()
//{
//	int a, sum = 3;
//	cout << "De cate ori imultim 3 ? ";
//	cin >> a;
//	i3(a);
//	cout << " Nnumrul este " << endl;
//	cout << i3(a);
//}
*/

/*Sum of all integers from 1 till a using recursive function.
//int adun(int a)
//{
//	if (a==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return a+adun(a-1);
//	}
//}
//
//int main()
//{
//	int a;
//	cout << "Care este numarul ? ";
//	cin >> a;
//	adun(a);
//	cout << "numerul este ";
//	cout << adun(a);
//}
*/

/*Find factorial using recursive function.
//int fact(int a)
//{
//	if (a==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return a * fact(a - 1);
//	}
//}
//
//
//int main()
//{
//	int a;
//	cout << "Care este numarul factorial ? ";
//	cin >> a;
//	cout << "Numarul final este: ";
//	cout << fact(a);
//
//}
*/

/*Reverse a string using recursive function.
//string invers(string a)
//{
//	if (a.length()==1)
//	{
//		return a;
//	}
//	else
//	{
//		return invers(a.substr(1, a.length() - 1)) + a[0];
//	}
//}
//
//int main()
//{
//	string a;
//	cout << "Care este numele ? ";
//	cin >> a;
//	cout << invers(a);
//}
*/

/*Post a string using recursive functions.
//string afis(string a)
//{
//	if (a.length() == 1)
//	{
//		if (a[0] != 'x')
//		{
//		 return a.substr(0, 1);
//		}
//		else
//		{
//			//string gol = "";
//			return "";
//		}
//	}
//	else
//	{
//		if (a[0]!='x')
//		{
//			return a[0] + afis(a.substr(1, a.length() - 1));
//		}
//		else
//		{
//			return afis(a.substr(1, a.length() - 1));
//		}
//	}
//}
//
//int main()
//{
//	string a;
//	cout << "Da un nume ";
//	cin >> a;
//	cout << afis(a);
//}
*/

/*Eliminate all odd numbers from a string of numbers using recursive function.
// facem un program care sa scoata toate numerele impare 
// netermiant (de facut)

//string socteimp(string a)
//{
//	
//
//	if (a.length()==1)
//	{
//		if (a[0]%2==0)
//		{
//		return a.substr(0,1);
//		}
//		else
//		{
//			return "";
//		}
//	}
//	else
//	{
//
//		if (a[0]%2==0)
//		{
//			return a[0] + socteimp(a.substr(1, a.length() - 1));
//		}
//		else
//		{
//			return socteimp(a.substr(1, a.length() - 1));
//		}
//	}
//}
//
//int main()
//{
//	string a;
//	cout << "Cate numere avem ? ";
//	cin >> a;
//	cout << socteimp(a);
//}
*/

/*Eliminate 0 from string of numerals using recursive functions.
//string scot0(string a)
//{
//	if (a.length()==1)
//	{
//		if (a[a.length()-1] !='0')
//		{
//		 return a.substr(a.length()-1, 1);
//		}
//		else
//		{
//			//string gol = "";
//			return a;
//		}
//	}
//	else
//	{
//		if (a[a.length()-1] != '0')
//		{
//			return a;
//		}
//		else
//		{	
//			return scot0(a.substr(0,a.length()-1));
//		}
//	}
//	}
//
//int main()
//{
//	string a;
//	cout << "Da numarul dorit ? ";
//	cin >> a;
//	cout << scot0(a);
//}
*/

/*Check if a number is a palindrome using recursive functions.
//bool pal(string a)
//{
//	if (a.length()==1)
//	{
//		return true;
//	}
//	else if(a.length()==2)
//	{
//		if (a[0]==a[1])
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		if (a[0] == a[a.length() - 1])
//		{
//			return pal(a.substr(1, a.length() - 2));
//		}
//		else
//		{
//			return false;
//		}
//	}
//}
//
//
//int main()
//{
//	string a;
//	cout << "Tasteaza un numar ";
//	cin >> a;
//	if (pal(a))
//	{
//		cout << "Este plaingdrom ";
//	}
//	else
//	{
//		cout << "nu este paligdrom ";
//	}
//}
//
//bool numepal(string a)
//{
//	if (a.length()==1)
//	{
//		return true;
//	}
//	else if(a.length()==2)
//	{
//		if (a[0]<97)
//		{
//			a[0] = a[0] + 32;
//		}
//		if (a[1] < 97)
//		{
//			a[1] = a[1] + 32;
//		}
//		if (a[0]==a[1])
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		if (a[0]<97)
//		{
//			a[0] = a[0] + 32;
//		}
//		if (a[a.length()-1] < 97)
//		{
//			a[a.length()-1] = a[a.length() - 1] + 32;
//		}
//		if (a[0]==a[a.length()-1])
//		{
//			return numepal(a.substr(1, a.length() - 2));
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//}
//
//int main()
//{
//	string a;
//	cout << "Da un nume ";
//	cin >> a;
//	if (numepal(a))
//	{
//		cout << "Este palindrogm ";
//	}
//	else
//	{
//		cout << "Nu este palindrogm ";
//	}
//}
*/