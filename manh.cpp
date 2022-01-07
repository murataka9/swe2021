#include <iostream>

class Vector{
	public:
		float x; //1つめの座標群
		float y;

	float manhattan(){
		return std::abs((0-x)) + std::abs((0-y)); //マンハッタン距離の計算絶対値+絶対値
	}

};

int main(){
    Vector v1;
    v1.x = -1.5; //座標入力
    v1.y = -0.5;
    std::cout << v1.manhattan();
    return 0;
}

