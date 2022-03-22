#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

using namespace std;

struct time
{
    int hh;
    int mm;
    int ss;
    char col1;
    char col2;
};

struct date
{
    int day;
    int month;
    int year;
    char sym1;
    char sym2;
};

class vehicle
{
    string platenum;
    int type;
    date dt;
    time arrive;
    time departure;

public:
    void addVehicle();
    void deleteVehicle();
    void printvehicle(vehicle v);
    void show();
};

int main()
{
    int choice;
    char ans;
    system("cls");

    do
    {
        system("cls");
        cout << "********************************************************************" << endl;
        cout << "                 VEHICLE PARKING RESERVATION SYSTEM                 " << endl;
        cout << "1. Arrival of a vehicle" << endl
             << "2. Total number of vehicles parked" << endl
             << "3. Departure of vehicle" << endl
             << "4. Total Amount collected " << endl
             << "5. Display " << endl
             << "6. Exit" << endl
             << "********************************************************************" << endl
             << "Enter your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls");
            cout << "Add : " << endl;
            veh.at(i).addVehicle();
            break;

        case 2:
            system("cls");
            totalveh();
            break;

        case 3:
            system("cls");
            cout << "Departure : " << endl;
            veh.at(i).deleteVehicle();
            break;

        case 4:
            system("cls");
            totalamount();
            break;

        case 5:
            system("cls");
            veh.at(i).show();
            break;
        case 6:
            exit(0);
        }

        cout << "\nDo you want to continue, press y/n : " << endl;
        cin >> ans;
        if (ans == 'n')
        {
            break;
        }
        else
        {
            continue;
        }

    } while (1);

    return 0;
}
