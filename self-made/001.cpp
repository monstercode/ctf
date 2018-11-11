
#include <iostream>
#include <string>
using namespace std;


void fsecret()
{
	cout << "\n\nCongrats!\nYou_GoT_tHe_PokeFlAaAaAg_CharManDer";
}

int main ()
{
	string password;

	cout << "Password? ";
	getline (cin, password);

	if (password == "secret1")
	{
		fsecret();
	} else {
		cout << "WRONG!! Bye!";
	}

	return 0;
}

