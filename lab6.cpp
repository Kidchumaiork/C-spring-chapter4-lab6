#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char package;
    double gigabytes;

    cout << "Please enter your package selection (A, B, or C):" << "\n";
    cin >> package;
    if (package == 'A' || package == 'B' || package == 'C')
    {
        cout << "Please enter gigabytes of data used:" << "\n";
        cin >> gigabytes;
        if (gigabytes > 0 && gigabytes < 5000)
        {
            double AdGigabytesA = (gigabytes - 4) * 10 + 39.99;
            double AdGigabytesB = (gigabytes - 8) * 5 + 59.99;
            switch (package)
            {
            case 'A':
                if (gigabytes <= 4)
                {
                    cout << "Total charges are: $39.99" << "\n";
                }
                else if (gigabytes >= 8)
                {
                    double SaveB = AdGigabytesA - AdGigabytesB;
                    double SaveC = AdGigabytesA - 69.99;
                    cout << "Total charges are: $" << AdGigabytesA << "\n";
                    cout << "You could've saved $" << fixed << setprecision(2) << SaveB << ", if you had chosen package B." << "\n";
                    cout << "You could've saved $" << fixed << setprecision(2) << SaveC << ", if you had chosen package C." << "\n";
                }
                else if (gigabytes > 4 && gigabytes <= 7)
                {
                    double SaveB = AdGigabytesA - 59.99;
                    double SaveC = AdGigabytesA - 69.99;
                    cout << "Total charges are: $" << AdGigabytesA << "\n";
                    cout << "You could've saved $" << fixed << setprecision(2) << SaveB << ", if you had chosen package B." << "\n";
                }
                else
                {
                    double SaveB = AdGigabytesA - 59.99;
                    double SaveC = AdGigabytesA - 69.99;
                    cout << "Total charges are: $" << AdGigabytesA << "\n";
                    cout << "You could've saved $" << fixed << setprecision(2) << SaveB << ", if you had chosen package B." << "\n";
                    cout << "You could've saved $" << fixed << setprecision(2) << SaveC << ", if you had chosen package C." << "\n";
                }
                
                break;
            case 'B':
                if (gigabytes <= 8)
                {
                    cout << "Total charges are: $59.99" << "\n";
                }
                else
                {
                    double SaveC = AdGigabytesB - 69.99;
                    cout << "Total charges are: $" << AdGigabytesB << "\n";
                    cout << "You could've saved $" << fixed << setprecision(2) << SaveC << ", if you had chosen package C." << "\n";
                }
                break;
            case 'C':
                cout << "Total charges are: $69.99" << "\n";
                break;
            
            default:
                break;
            }
        }
        else
        {
            cout << "Invalid number of gigabytes." << "\n";
        }
        
        
    }
    else
    {
        cout << "Invalid package selection." << "\n";
    }
    
    return 0;
}
