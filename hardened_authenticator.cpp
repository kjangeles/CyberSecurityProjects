//FIXME: Keren Angeles
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

bool authenticate(char *pass)
{
    bool valid = false;
    char passBuffer[12];
    strncpy(passBuffer, pass, 12);
    if (strcmp(passBuffer, "1234567") == 0)
        valid = true;
    return valid;
}

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        cout << "Invalid option:\n" << endl;
        cout << "Usage in Linux: ./authenticator [password]" << endl;
        cout << "Usage in Windows: authenticator.exe [password]" << endl;
        return 1;
    }

    bool valid=authenticate(argv[1]);
    if(valid)
        cout << "Welcome, you have access to top secret part of the program!" << endl;
        //call some priviledged functions
    else
        cout << "Invalid password. Try again!" << endl;

    return 0;
}
