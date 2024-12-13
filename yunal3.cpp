#include <iostream>
using namespace std;

int main()
{

    char choose = ('E', 'I', 'N', 'S', 'B', 'H');

    cout << "       YOU CHOOSE UDOM      " << endl;
    cout << "\nSelect the colledge:" << endl;
    cout << "enter 'E' for COLLEDGE OF EARTH SCIENCES" << endl;
    cout << "enter 'I' for COLLEDGE OF INFORMATICS AND VIRTUAL EDUCATION" << endl;
    cout << "enter 'N' for COLLEDGE OF NATURAL AND MATHEMATICAL SCIENCE" << endl;
    cout << "enter 'S' for COLLEDGE OF HUMANITIES AND SOCIAL SCIENCE" << endl;
    cout << "enter 'B' for COLLEDGE OF BUSSINESS AND LAW" << endl;
    cout << "enter 'H' for COLLEDGE OF HEALTH AND ALLIED SCIENCE" << endl;
    cout << "enter: ";
    cin >> choose;
    while (true)
    {

        if (choose == 'E')
        {
            cout << "\nCongratulation you have succesful choose: ";
            cout << "COLLEDGE OF EARTH SCIENCES";
            break;
        }

        else if (choose == 'I')
        {
            cout << "\nCongratulation you have succesful choose: ";
            cout << "COLLEDGE OF INFORMATICS AND VIRTUAL EDUCATION";
            break;
        }

        else if (choose == 'N')
        {
            cout << "\nCongratulation you have succesful choose: ";
            cout << "COLLEDGE OF NATURAL AND MATHEMATICAL SCIENCE";
            break;
        }

        else if (choose == 'S')
        {
            cout << "\nCongratulation you have succesful choose: ";
            cout << "COLLEDGE OF HUMANITIES AND SOCIAL SCIENCES";
            break;
        }

        else if (choose == 'B')
        {
            cout << "\nCongratulation you have succesful choose: ";
            cout << "COLLEDGE OF BUSSINESS AND LAW";
            break;
        }

        else if (choose == 'H')
        {
            cout << "\nCongratulation you have succesful choose: ";
            cout << "COLLEDGE OF HEALTH AND ALLIED SCIENCES";
            break;
        }

        else
        {
            cout << "error enter capital lette or given letters" << endl;

            cout << "enter: ";
            cin >> choose;
        }
    }
    return 0;
}