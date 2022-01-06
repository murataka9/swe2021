#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class MyTime{
    private:
        int hour = 0;
        int minute = 0;
	int time = 0;
	int jst = 0;
	int utc = 0;
	int est = 0;
	int h = 0;
	int m = 0;
	int t = 0;

    public:
	//セッタが6個ゲッタが3個で割と長いコードを書く
	void set_jst(int t){
		time = t;
	};
	int set_jst(int h, int m){
		hour = h;
		minute = m;
		time = hour * 100 + minute;
	};
	int set_utc(int t){
		time = t;
	};
	int set_utc(int h, int m){
		hour = h;
		minute = m;
		time = hour * 100 + minute;
	};
	int set_est(int t){
		time = t;
	};
	int set_est(int h, int m){
		hour = h;
		minute = m;
		time = hour * 100 + minute;
	};
	// --- setter ここまで ----
	// --- getter ここから ----
	int get_jst(){
		return time - 900;
	};
	int get_utc(){
		return time; 
	};
	int get_est(){
		return time - 500;
	};

};

// メイン関数はこれをコピーして使うとよいかも
int main(){
    MyTime t1, t2, t3, t4;
    t1.set_jst(1800);
    std::cout << t1.get_jst() << " in JST is " << t1.get_utc() << " on UTC, " << t1.get_est() << " on EST \n";
    t2.set_utc(11, 30);
    std::cout << t2.get_jst() << " in JST is " << t2.get_utc() << " on UTC, " << t2.get_est() << " on EST \n";
    t3.set_jst(6, 15);
    std::cout << t3.get_jst() << " in JST is " << t3.get_utc() << " on UTC, " << t3.get_est() << " on EST \n";
    t4.set_est(1234);
    std::cout << t4.get_jst() << " in JST is " << t4.get_utc() << " on UTC, " << t4.get_est() << " on EST \n";
}

