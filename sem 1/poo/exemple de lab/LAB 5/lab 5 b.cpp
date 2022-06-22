#include <iostream>
#include <string.h>


using namespace std;


class transport{
public:

    char *motor;
    float hp;
    char *denumire;
    float masa;


    transport ():motor(NULL),hp(0),denumire(NULL),masa(0){};
        transport (char *denumire,int *hp,char *motor,int masa){ motor = new char; motor = new char[strlen(motor)+1];
        strcpy(motor,motor);
            hp = hp;
        denumire = new char[strlen(denumire)+1];
        strcpy(denumire,denumire);
            masa=masa;

    };
    transport(transport &obj){

        motor = new char; strcpy(motor,obj.motor);
                hp=obj.hp;
            denumire = new char[strlen(denumire)+1];
                strcpy(denumire,obj.denumire);
        masa=obj.masa;
    };

    ~transport(){

        delete motor; motor=NULL;
        hp=0;
            delete denumire; denumire=NULL;
        masa=0;
    };

    friend ostream & operator<<(ostream &, transport &);
        friend istream & operator>>(istream &, transport &);

};

ostream & operator<<(ostream &out, transport &obj){
    cout<<"Denumirea: "<<obj.denumire<<endl;
    cout<<"Cai puteri: "<<obj.hp<<endl;
    cout<<"Motor: "<<obj.motor<<endl;
    cout<<"Masa: "<<obj.masa<<endl;

    return out;

};

istream & operator>>(istream &in, transport &obj){
    char buf[100];

    cout<<"Denumire: ";
        in>>buf;

    obj.denumire = new char [strlen(buf)+1];

    strcpy(obj.denumire,buf);

    cout<<"Cai puteri: ";
        in>>obj.hp;

    cout<<"Motor: ";
        obj.motor = new char;

    in>>obj.motor;
    cout<<"Masa: ";
        in>>obj.masa;

    return in;

};

class iahta: public transport{

    char *col;

public:

    iahta(){ col=NULL; };

    iahta(char *den, int hp, char *motor, int masa, char *col){
            transport::denumire = new char[strlen(den)+1];

        strcpy(transport::denumire,den);

        transport::hp = hp;

        transport::motor = new char;

        strcpy(transport::motor,motor);

        transport::masa=masa;

        col = new char[strlen(col)+1];

        strcpy(col,col);

    };

    friend istream & operator>>(istream &in, iahta &obj);
    friend ostream & operator<<(ostream &out, iahta &obj);
};


istream & operator>>(istream &in, iahta & obj){
        char buf[50];

    cout<<"Denumirea:	";
        in>>buf;

        obj.denumire = new char[strlen(buf)+1];
            strcpy(obj.denumire,buf);

        cout<<"hp:  ";
            in>>obj.hp;
        cout<<"motor:	";
            in>>buf;

            obj.motor = new char;
            strcpy(obj.motor,buf);

        cout<<"Greutatea:	";
            in>>obj.masa;
        cout<<"Culoarea : ";
            in>>buf;

            obj.col = new char[strlen(buf)+1];

    strcpy(obj.col,buf);

    return in;

};

ostream & operator<<(ostream &out, iahta &obj){

    out<<"Denumirea:	";
        out<<obj.denumire<<endl;
    out<<"hp:	";
        out<<obj.hp<<endl;
    out<<"Motorul:	";
        out<<obj.motor<<endl;
    out<<"Greutate kg:	";
        out<<obj.masa<<endl;
    out<<"Culoarea:	";
        out<<obj.col<<endl;



    return out;

};

class motocicleta: public transport{

    char *model;

public:

    motocicleta(){model=NULL; };

    motocicleta(char *den,int hp,char *motor,int masa,char *model){
            transport::denumire = new char[strlen(den)+1];

        strcpy(transport::denumire,den);

        transport::hp = hp;

        transport::motor = new char;

        strcpy(transport::motor,motor);

        transport::masa = masa;

        model = new char[strlen(model)+1];

        strcpy(model,model);

    };

    friend istream & operator>>(istream &in, motocicleta &obj);
        friend ostream & operator<<(ostream &out,motocicleta &obj); };


istream & operator>>(istream &in, motocicleta &obj){ char buf[50];

    cout<<"Denumirea:	";
        in>>buf;
    obj.denumire = new char[strlen(buf)+1];

    strcpy(obj.denumire,buf);
    cout<<"hp c/p: ";
        in>>obj.hp;
    cout<<"Motorul: ";
        in>>buf;
    obj.motor = new char[strlen(buf)+1];
    strcpy(obj.motor,buf);

    cout<<"Greutatea (kg): ";
        in>>obj.masa;
    cout<<"Modelul:";
        in>>buf;
    obj.model = new char[strlen(buf)+1];

    strcpy(obj.model,buf);

    return in;
}

ostream & operator<<(ostream &out, motocicleta &obj){

    cout<<"Denumire:	";
        out<<obj.denumire<<endl;
    cout<<"hp:	";
        out<<obj.hp<<endl;
    cout<<"Motorul:	";
        out<<obj.motor<<endl;
    cout<<"Greutatea:	";
        out<<obj.masa<<endl;
    cout<<"Modelul:	";
        out<<obj.model<<endl;

    return out;

};

class motocicleta_de_apa: public transport{

    float viteza;

public:

    motocicleta_de_apa(){viteza=0;};

    motocicleta_de_apa(char *den,int hp,char *motor,int masa, int viteza){
        transport::denumire = new char[strlen(den)+1];

        strcpy(transport::denumire,den);

        transport::hp = hp;

        transport::motor = new char;

        strcpy(transport::motor,motor);

        transport::masa = masa;

        viteza = viteza;

    };

    friend istream & operator>>(istream &, motocicleta_de_apa &);
        friend ostream & operator<<(ostream &, motocicleta_de_apa &); };

void getch();

istream & operator>>(istream &in, motocicleta_de_apa &obj){ char buf[50];

    cout<<"Denumirea:	"; in>>buf;

    obj.denumire = new char[strlen(buf)+1];
    strcpy(obj.denumire,buf);

    cout<<"hp:  "; in>>obj.hp;
    cout<<"Motorul:	"; in>>buf;

    obj.motor = new char;

    strcpy(obj.motor,buf);

    cout<<"Greutatea (kg): ";
        in>>obj.masa;
    cout<<"Viteza max pe apa:";
        in>>obj.viteza;

    return in;

};

ostream & operator<<(ostream &out,motocicleta_de_apa &obj){

    cout<<"Denumirea:	";
        out<<obj.denumire<<endl;
    cout<<"hp:	";
        out<<obj.hp<<endl;
    cout<<"Motor:	";
        out<<obj.motor<<endl;
    cout<<"Greutatea:	";
        out<<obj.masa<<endl;
    cout<<"Viteza max pe apa:";
        out<<obj.viteza<<endl;

    return out;

};

int main(void){
char selection;


    cout<<"\n Menu";
        cout<<"\n========";

        cout<<"\n A - Introduceti denumirea transportului" <<endl;

        cout<<"\n B - Iahta" <<endl;

        cout <<"\n C - Motocicleta" <<endl;

        cout <<"\n D - Motocicleta de apa" <<endl;

        cout <<"\n E - Iesire" <<endl;

        cout <<"\n Optiunea aleasa -----> " <<endl;

            cin >> selection;

    switch(selection) {

        case 'A' : {
            case 'a':
                transport a;
            cin >> a;
            cout << a;

        }
            do {
                cout << '\n' << "...";
            } while (cin.get() != '\n');

        case 'B' : {
            case 'b':
                iahta b;
                    cin>>b;
                     cout<<b;


        }
            do {
                cout << '\n' << "...\n";
            } while (cin.get() != '\n');

            case 'C' : {
                case 'c':
                motocicleta c;
                    cin>>c;
                        cout<<c;
        }

        case 'D' : {
            case 'd':
                motocicleta_de_apa d;
                    cin>>d;
                        cout<<d;
        }
            do {
                cout << '\n' << "...\n";
            } while (cin.get() != '\n');

        case 'E' : {
            case 'e':
                exit(1);

    }

        default : {
            cout<<"\n Invalid selection";

            cout<<"\n";
            getchar();
        }
            break;

    }

}




