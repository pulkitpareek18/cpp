# include <iostream>
using namespace std;

int password;
int secret_key;
int encrypted;

void encrypt(){
	cout << "Please Enter a Password: ";
	cin >> password;
	cout << "Please Enter a Secret Key: ";
	cin >> secret_key;
	encrypted = password^secret_key;
	cout << "Encrypted password is: " << encrypted << endl;
}

void decrypt(){
	cout << "Please Enter Encrypted Password: ";
	cin >> encrypted;
	cout << "Please Enter a Secret Key: ";
	cin >> secret_key;
	password = encrypted^secret_key;
	cout << "Decrypted password is: " << password << endl;
}

int main(){
	int choice=1;
	while(choice != 0){
		cout << "Enter 1 for Encryption, 2 for Decryption, 0 to Exit: ";
		cin >> choice;
		switch(choice){
			case 1:
				encrypt();
				break;
			case 2:
				decrypt();
				break;
			case 0:
				cout << "Exiting Program" << endl;
				break;
			default:
				cout << "Please Select a Valid Option";
				break;
		}
	}
}

// Output
// Enter 1 for Encryption, 2 for Decryption, 0 to Exit: 1
// Please Enter a Password: 363630
// Please Enter a Secret Key: 030305
// Encrypted password is: 391695
// Enter 1 for Encryption, 2 for Decryption, 0 to Exit: 2
// Please Enter Encrypted Password: 391695
// Please Enter a Secret Key: 030305
// Decrypted password is: 363630
// Enter 1 for Encryption, 2 for Decryption, 0 to Exit: 0
// Exiting Program