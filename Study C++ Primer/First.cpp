#include "iostream"
using namespace std;

int read_write()
{
	int reader;
	cout << "Enter the number" << endl;
	cin >> reader;
	cout << "Number entered " << reader << endl;
	cerr << "This is an error" << endl;
	clog << "What is this Where am i get printed" << endl;
	return 0;
}


