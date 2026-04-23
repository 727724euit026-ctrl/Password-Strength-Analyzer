#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    int length = password.length();
    bool hasLower=false, hasUpper=false, hasDigit=false, hasSpecial=false;

    for(char c : password) {
        if(islower(c)) hasLower = true;
        else if(isupper(c)) hasUpper = true;
        else if(isdigit(c)) hasDigit = true;
        else hasSpecial = true;
    }

    int score = hasLower + hasUpper + hasDigit + hasSpecial;

    cout << "\nPassword Length: " << length << endl;

    if(length < 6 || score <= 2)
        cout << "Strength: Weak ❌\n";
    else if(score == 3)
        cout << "Strength: Medium ⚠️\n";
    else
        cout << "Strength: Strong ✅\n";

    cout << "\nSuggestions:\n";
    if(!hasUpper) cout << "- Add uppercase letters\n";
    if(!hasLower) cout << "- Add lowercase letters\n";
    if(!hasDigit) cout << "- Add numbers\n";
    if(!hasSpecial) cout << "- Add special characters\n";
    if(length < 10) cout << "- Increase length\n";

    return 0;
}