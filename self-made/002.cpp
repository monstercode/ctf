
#include <iostream>
#include <string>
using namespace std;

// password =  DASECRET
// flag = You_GoT_tHe_PokeFlAaAaAg_CharMeLion

string fxor(string a)
{
	string zero = "0";
	for (int i = 0; i < a.length(); ++i)
	{
		a[i] = a[i] ^ zero[0];
	}

	return a;
}

void fsecret()
{
	cout << "\n\nCongrats!\n";
	cout << fxor("i_Eow_doDxUo`_[Uv\\qQqQqWosXQB}U|Y_^");
}


int main ()
{
	string password;
	string xored;

	cout << "Password? ";
	getline (cin, password);

	if (fxor(password) == "tqcusbud")
	{
		fsecret();
	} else {
		cout << "WRONG!! Bye!";
	}

	return 0;
}

