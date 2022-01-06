#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class movie{
    protected:
        string title;
    public:
        void settitle(string _title){
            title = _title;
        }
        void gettitle(){
            return title;
        }
};

class copyprotection{
    private:
        string code;
    public:
        void setcode(string _code){
            code = _code;
        }
        void getcode(){
            return code;
        }
};

class protectedMovie: public movie, public copyprotection{
    public: 
        void init(){
            cout << gettitle() << getcode() << endl;
        };
};

int main()
{
    protectedMovie anna;
    anna.settitle("anna");
    anna.setcode("code");
    anna.init();
}
