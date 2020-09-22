#include <stdio.h>
#include <ctype.h>

#include "base64.h"

using namespace std;

int main() {
 	string msg = "Everything is just for fun, don't be so serious...";
 	cout << "Message: " << msg << endl;
 	string encrypted_msg = base64_encode(msg);
 	cout << "Encrypted: " << encrypted_msg << endl;
 	cout << "Decrypt encrypted: " << base64_decode(encrypted_msg) << endl;
    return 0;
};

