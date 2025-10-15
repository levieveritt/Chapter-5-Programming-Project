#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Cookie Recipe Calculator" << endl;
    cout << "========================================" << endl;
    cout << "\nBase recipe (48 cookies):" << endl;
    cout << "  - 1.5 cups of sugar" << endl;
    cout << "  - 1 cup of butter" << endl;
    cout << "  - 2.75 cups of flour" << endl;
    cout << "========================================" << endl;
    
    const int base_cookies = 48;
    const double base_sugar = 1.5;
    const double base_butter = 1.0;
    const double base_flour = 2.75;
    
    double cookies_wanted;
    cout << "\nHow many cookies do you want to make? ";
    cin >> cookies_wanted;
    
    double ratio = cookies_wanted / base_cookies;
    
    double sugar_needed = base_sugar * ratio;
    double butter_needed = base_butter * ratio;
    double flour_needed = base_flour * ratio;
    
    cout << fixed << setprecision(2);
    cout << "\nTo make " << cookies_wanted << " cookies, you will need:" << endl;
    cout << "  - " << sugar_needed << " cups of sugar" << endl;
    cout << "  - " << butter_needed << " cups of butter" << endl;
    cout << "  - " << flour_needed << " cups of flour" << endl;
    
    return 0;
}
