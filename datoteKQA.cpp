#include <iostream>
#include<cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int a;
cout<<"Upisi cjeli broj razlicit od 0:";
cin>>a;
if (a<0)
{cout<<"Broj "<<a<<" je negativan. \ Njegova apsolutna vrijednost je "<<-a<<endl;
}
else
{
	cout<<"Broj "<<a<<" je pozitivan. \ Njegova apsolutna vrijednost je "<<a<<endl;
	 }
	return 0;
}
