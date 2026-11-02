#include <iostream>
using namespace std;

class Vehicle
{
private:
    string brand;
    int speed;

public:
    void getVehicleDetails()
    {
        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter speed: ";
        cin >> speed;
    }

    void displayVehicleDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/hr" << endl;
    }
};

class Car : public Vehicle
{
    int seats;

public:
    void getCarDetails()
    {
        getVehicleDetails();

        cout << "Enter number of seats: ";
        cin >> seats;
    }

    void displayCarDetails()
    {
        displayVehicleDetails();
        cout << "Number of seats: " << seats << endl;
    }
};

class Bike : public Vehicle
{
    int engineCC;

public:
    void getBikeDetails()
    {
        getVehicleDetails();

        cout << "Enter engine capacity (CC): ";
        cin >> engineCC;
    }

    void displayBikeDetails()
    {
        displayVehicleDetails();
        cout << "Engine Capacity: " << engineCC << " CC" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    cout << "Enter Car Details:" << endl;
    c.getCarDetails();

    cout << "\nEnter Bike Details:" << endl;
    b.getBikeDetails();

    cout << "\n--- Car Information ---" << endl;
    c.displayCarDetails();

    cout << "\n--- Bike Information ---" << endl;
    b.displayBikeDetails();

    return 0;
}