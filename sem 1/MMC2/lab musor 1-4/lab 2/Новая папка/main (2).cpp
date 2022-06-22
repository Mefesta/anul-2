#include <iostream>
#include <cmath>

using namespace std;
double magnitudine_current;
double last_magnitudine;
//Epsilon --> aproximation / stop
double epsilon = 0.000001;


double Hesiana_10 = 10;
double Hesiana_11 = 2;
double Hesiana_20 = 2;
double Hesiana_21 = 10;

//initial function where a = 5, b = 5
double f(double x, double y)
{
    return 5 * pow(x,2)  + 2 * x * y + 5 * pow(y, 2)  - 5 * x - 5 * y;
}

//Derivative by x
double fx (double x, double y)
{
    return 10 * x + 2 * y - 5;
}

//Derivative by y
double fy (double x, double y)
{
    return 2 * x + 10 * y - 5;
}

//Norma gradientului
double magnitudinea (double x, double y)
{
    return sqrt( pow( fx(x, y), 2) + pow( fy(x, y), 2) );
}


//Direction by fx
double direction_fx(double x, double y)
{
    int check = 0;
    double direction_x;

    if (check == 0)
    {
        direction_x = -1 * fx(x, y);
        check++;
        return -1 * fx(x, y);
    }
    else
    {
        direction_x = -1 * fx(x, y) + direction_x * magnitudinea(x, y);
        return direction_x;
    }

}

//Direction by fy
double direction_fy(double x, double y)
{
    int check = 0;
    double direction_y;

    if (check == 0)
    {
        direction_y = -1 * fy(x, y);
        check ++;
        return -1 * fy(x, y);
    }
    else
    {
        direction_y = -1 * fy(x, y) + direction_y * last_magnitudine;
        return direction_y;
    }
}

//Ad0 prima jumatate
double Trans1(double x, double y)
{
    return Hesiana_10 * direction_fx(x, y) + Hesiana_11 * direction_fx(x, y);
}

//Ad0 a doua jumatate
double Trans2(double x, double y)
{
    return Hesiana_20 * direction_fy(x, y) + Hesiana_21 * direction_fy(x, y);
}

// gradient transpus * d0
double first_part(double x, double y)
{
    return direction_fx(x, y) * fx(x, y) + direction_fy(x, y) * fy(x, y);
}

//Ad0 transpus * d0
double second_part(double x, double y)
{
    return Trans1(x, y) * direction_fx(x, y) + Trans2(x, y) * direction_fy(x, y);
}

//Alfa = - 6050 / 72600
double alfa(double x, double y)
{
    return -1 * (first_part(x, y) / second_part(x, y) );
}





int main ()
{
    double x = 5;
    double y = 5;
    double x1;
    // fx(x,y);
    // fy(x,y);
    // x1 = x;
    // cout << magnitudinea(x, y);
    // cout << "\n";
    // cout << alfa(x,y);
    // cout << "\n";
    // cout << direction_fx(x, y);
    // cout << "\n";
    // cout << direction_fy(x, y);
    // cout << "\n";
    // x1 = x;
    // x = x + (alfa(x, y) * direction_fx(x, y));
    // cout << x;
    // cout << "\n";
    // cout << y;
    // cout << "\n";

    // y = y + (alfa(x1, y) * direction_fy(x1, y));
    // cout << y;
    while (magnitudinea(x, y) > epsilon)
    {
//      Last → salveaza magnitudinea, la al doilea ciclu, pentru a doua parte de d0.
        last_magnitudine = magnitudinea(x, y);
//      x1→ salveaza pe x, pentru a-l putea calcula pe y, in caz contrar, x se schimba.
        x1 = x;
//        Инжинерское решение =)
        x = x + alfa(x, y) * direction_fx(x, y);
        y = y + alfa(x1, y) * direction_fy(x1, y);


        cout << "\nFunction : " << f(x, y);
        cout << "\t\t x : " << x;
        cout <<"\t\t\t y :" << y;
        cout <<"\nMagnitudinea : " << last_magnitudine;


    }

}
