#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class intreg
{

public:
    int a;
    int b,c;
    intreg():a(0),b(0),c(0){ };
    intreg(int );
    intreg(int,int);
    intreg(const intreg&);
    ~intreg();
    void afisare();
    intreg&operator +(int);
    intreg&operator *(int);
    intreg&operator ++();
    intreg&operator ++(int);
    intreg&operator --();
    intreg&operator --(int);
    friend intreg operator -(const intreg&,intreg&);
    friend intreg operator /(const intreg&,intreg&);
};
intreg::intreg(int a)
{
    this->a=a;
}
intreg::intreg(int b,int c):b(b),c(c) {}
intreg::intreg(const intreg&obj):a(obj.a),b(obj.b),c(obj.c)
{}
void intreg::afisare()
{
    cout<<a<<""<<endl;
}
intreg::~intreg() {}
intreg&intreg::operator + (int b)
{
    a+=b;
    return *this;
}
intreg&intreg::operator*(int b)
{
    a*=b;
    return *this;
}
intreg&intreg::operator ++()
{
    ++a;
    return *this;
}
intreg&intreg::operator --()
{
    --a;
    return *this;
}
intreg&intreg::operator ++(int fals)
{
    intreg cop(*this);
    this->a+=1;
    return cop;
}
intreg&intreg::operator --(int fals)
{
    intreg cop(*this);
    this->a-=1;
    return cop;
}
intreg operator /(intreg &x,intreg &y)
{
    intreg p(x);
    p.a=p.a/y.a;
    return p;
}
intreg operator -(intreg &x,intreg &y)
{
    intreg p(x);
    p.a=p.a-y.a;
    return p;
}
int main()
{
    int sc;
    intreg a(2);
    intreg b=a,c=a,d=a;
    intreg e=a,f=a;
    intreg w(8),q(2);
    cout<<"Obiectul a:";
    a.afisare();
    cout<<"Obiectul w:";
    w.afisare();
    cout<<"Obiectul q:";
    q.afisare();
    cout<<"Dati scalarul:";
    cin>>sc;
    cout<<"Supraincacarea op + :";
    a+(sc);
    a.afisare();
    cout<<"Supraincarcarea op *:";
    b*(sc);
    b.afisare();
    cout<<"Supraincarcarea ++ prefixat:";
    ++c;
    c.afisare();
    cout<<"Supraincarcarea -- prefixat:";
    --d;
    d.afisare();
    cout<<"Supraincarcarea ++ postfixata:";
    e++;
    e.afisare();
    cout<<"Supraincarcarea -- postfixata:";
    f--;
    f.afisare();
    cout<<"Supraincarcarea operatorului friend /:"<<endl;
    cout<<"Obiectul w/q=:";
    intreg rs;
    rs=w/q;
    rs.afisare();
    cout<<"Supraincarcare operatorului friend -:"<<endl;
    cout<<"Obiectul w-q=:";
    intreg rz;
    rz=w-q;
    rz.afisare();
    return 0;
}
