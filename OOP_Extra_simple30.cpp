#include <iostream>
using namespace std;

int main(){
    int month, date;
    cin >> month >> date;
    if (month == 1) {
        if (date <= 20) {
            cout << "Capricorn" << endl;
        }
        else {
            cout << "Aquarius" << endl;
        }
    }
    else if (month == 2) {
        if (date <= 18) {
            cout << "Aquarius" << endl;
        }
        else {
            cout << "Pisces" << endl;
        }
    }
    else if (month == 3) {
        if (date <= 20) {
            cout << "Pisces" << endl;
        }
        else {
            cout << "Aries" << endl;
        }
    }
    else if (month == 4) {
        if (date <= 20) {
            cout << "Aries" << endl;
        }
        else {
            cout << "Taurus" << endl;
        }
    }
    else if (month == 5) {
        if (date <= 21) {
            cout << "Taurus" << endl;
        }
        else {
            cout << "Gemini" << endl;
        }
    }
    else if (month == 6) {
        if (date <= 21) {
            cout << "Gemini" << endl;
        }
        else {
            cout << "Cancer" << endl;
        }
    }
    else if (month == 7) {
        if (date <= 22) {
            cout << "Cancer" << endl;
        }
        else {
            cout << "Leo" << endl;
        }
    }
    else if (month == 8) {
        if (date <= 23) {
            cout << "Leo" << endl;
        }
        else {
            cout << "Virgo" << endl;
        }
    }
    else if (month == 9) {
        if (date <= 23) {
            cout << "Virgo" << endl;
        }
        else {
            cout << "Libra" << endl;
        }
    }
    else if (month == 10) {
        if (date <= 23) {
            cout << "Libra" << endl;
        }
        else {
            cout << "Scorpio" << endl;
        }
    }
    else if (month == 11) {
        if (date <= 22) {
            cout << "Scorpio" << endl;
        }
        else {
            cout << "Sagittarius" << endl;
        }
    }
    else if (month == 12) {
        if (date <= 21) {
            cout << "Sagittarius" << endl;
        }
        else {
            cout << "Capricorn" << endl;
        }
    }
    return 0;
}
