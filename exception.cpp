#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
//exception handling class.
class BadLengthException{
    public:
    int length;
    BadLengthException(int n){length=n; }//constructor to initialize length.
    int what(){
        return length;//function to return the length in case exception arises.
    }
};


bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);//throw a exception.
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {//block where exception may occur.
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) { // execute this code when exception arises.
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
