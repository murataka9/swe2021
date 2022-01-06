#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Car{
    protected:
        string owner;
    public:
        void setOwner(string _owner){
            owner = _owner;
        };
        string getOwner(){
            return owner;
        };

    virtual void run() = 0;
};

class SportsCar{
    private:
        int bspres;
    public:
        void set_boost_pressure(int _bspres){
            bspres = _bspres;
        };
        int get_boost_pressure(){
            return bspres;
        };
};

class RX7:public Car,  public SportsCar{
    public:
        void run(){
            cout << getOwner() << "s RX7 ran at 130km/h on pressure" << get_boost_pressure()<< endl;
        };
};

class GTR : public Car, public SportsCar{
    public:
        void run(){
            cout << getOwner() << "s GTR ran at 120km/h on pressure" << get_boost_pressure()<< endl;
        };
};

int main(){
    RX7 yamada_car;
    yamada_car.setOwner("Yamada");
    yamada_car.set_boost_pressure(3);
    yamada_car.run();
    GTR sasaki_car;
    sasaki_car.setOwner("Sasaki");
    sasaki_car.set_boost_pressure(2);
    sasaki_car.run();
}
