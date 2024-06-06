#include <iostream>

using namespace std;

int main()
{
    int SeventeenHundred, ZeroSixHundred, Subtraction;
    double knots, metresPerSecond;
    char again;

    int sub(int a, int b) 
        {
            int result = a - b;
            return result;
        };

        do
        {
            ///Iputing our data, the second readings of the cup anemometer from the register
                cout << "Enter your second cup for 17:00" << endl;
            cin >> SeventeenHundred;
                cout << "Enter your second cup for 06:00am";
            cin >> ZeroSixHundred;

            ///Subtraction of the data collected
            

            
            cin >> again;
        } while (again == 'y' || again == 'Y');
        

    return 0;
}
