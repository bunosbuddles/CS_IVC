#ifndef AIRLINE_H
#define AIRLINE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
    Date(int month, int date, int year);
    string PrintDate();

private:
    int month;
    int date;
    int year;
};

class Seat
{
public:
    Seat();
    Seat(char type, int seatNo, double price);
    void Book(string customerName);
    void Cancel();

private:
    string customerName;
    char type;
    bool empty;
    int seatNo;
    double price;
};

class Flight
{
public:
    Flight(Date date, string destination, string departure, int size);

private:
    Date date;
    string destination;
    string departure;
    int size;
    Seat *seats;
};

class Airline
{
public:
    Airline(int size);
    void CancelFlight();

private:
    Flight *flights;
};

#endif