#include <iostream>
#include <string>

using namespace std;

class Person
{
   public:
	int show_name(){
            cout << name;
            return 1;
        }
        void self_introduce(int current_year){
             float bmi = weight / (height/100.0 * height/100.0);
	     cout << "Hello, I'm " << name << " My BMI is " << bmi << ", and I am " << get_birth() <<" years old in " << current_year <<"\n";
	}

	void set_birth(int _birth){
		birth_year = _birth;
	}
	int get_birth(){
		return birth_year;
	}
       
       string name;
       int height;
       float weight;

   private:
       int birth_year;
};

int main(){
    Person yamada; // 型名 変数名 で変数を定義
    yamada.name = "Tayo YAMADA"; // 変数名.メンバ名 でメンバにアクセス
    // = 演算子を使って、yamadaのnameに文字列を格納
    yamada.height = 168;
    yamada.weight = 52.5;
    yamada.set_birth(80);
    yamada.self_introduce(2021);

    Person tanaka;
    tanaka.name = "Tanaka Taro";
    yamada.height = 178;
    yamada.weight = 51.5;
    yamada.set_birth(20);
    yamada.self_introduce(2021);

    Person sato;
    sato.name = "Sato Taro";
    yamada.height = 198;
    yamada.weight = 51.5;
    yamada.set_birth(40);
    yamada.self_introduce(2021);
    // yamadaの「show_name」メソッドを実行。
    // 変数と同様に変数名.メソッド名(引数)でよい
    return 0;
}

