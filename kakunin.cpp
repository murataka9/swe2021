// ↑ ここに「iostreamを読み込む」という1行を書く
#include <iostream>
// ↑ ここに「stringを読み込む」という1行を書く
#include <string>
// ↑ ここに「名前空間 std を使う」という1行を書く
using namespace std ;

int main(){
    int i;
    cout << "please input your age\n";
    cin>>i;
    // ↑ ここに「キーボード入力を受けた数値をiに入れる」という1行を書く
    float f;
    cout << "please input your age\n";
    cin>>f;
    // ↑ ここに「キーボード入力を受けた数値をfに入れる」という1行を書く
    string s;
    // ↑ ここに「文字列型の変数 s を定義する」という内容の1行を書く
    cout << "please input your name\n";
    cin>>s;
    // ↑ ここに「キーボードから受けた文字列をsに入れる」という内容の1行を書く
    cout << "your name is" << s << ", age is " << i << ", height is " << f;
    return 0;
}
