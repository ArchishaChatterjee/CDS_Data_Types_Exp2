//FINDING SIZE OF DIFFERENT DATA TYPES (Exp 2) 
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout << "Enter any integer : ";
	cin >> a;
	cout << "Integer =" <<a<<" and size is "<< sizeof(a)<< "bytes"<< endl;
    
	float b;
	cout << "Enter any float : ";
	cin >> b;
	cout << "Float" <<b<<" and size is "<< sizeof(b)<< "bytes"<< endl;
    
	string c;
	cout << "Enter any string :";
	cin >> c;
	cout << "String =" <<c<<" and size is "<< sizeof(c)<< "bytes"<< endl;
    
	double d;
	cout << "Enter any double :";
	cin >> d;
	cout << "Double =" <<d<<" and size is "<< sizeof(d)<< "bytes"<< endl;
    
	char e;
	cout << "Enter any char :";
	cin >> e;
	cout << "Char =" <<e<<" and size is "<< sizeof(e)<< "bytes"<< endl;
    
	bool f;
	cout << "Enter any boolean :";
	cin >> f;
	cout << "Boolean =" <<f<<" and size is "<< sizeof(f)<< "bytes"<< endl;
    
    

	return 0;
}
