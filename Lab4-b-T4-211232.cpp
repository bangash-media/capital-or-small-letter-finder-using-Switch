#include <iostream>

using namespace std;
/*program that reads an alphabet from user and then find if it is capital letter or small
letter.*/
int main() 
{
	char alphabet; //variable declaration
	cout<<"\n\n\t\tUPPERCASE AND LOWERCASE ALPHABETS RECOGNIZER"<<endl<<endl;
	cout<<"****************************************************************";
	cout<<"\n\n\t\tEnter The Alphabet: "; cin>>alphabet; //input from user
	switch (alphabet)
	{
		case 'A'...'Z': //statement for upper case letteres
			cout<<"\n\n\t\t\""<<alphabet<<"\""<<" is a uppercase letter";
		break;
		case 'a'...'z': //statement for lower case letter 
			cout<<"\n\n\t\t\""<<alphabet<<"\""<<" is a lowercase letter";
		break;
		default:  //if other than alphabtes ,anything is entered 
			cout<<"\n\n\t\tInvalid Entery";
	}
	
	return 0;
}
