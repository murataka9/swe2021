#include <iostream>

class Vector{
	public:
		float x1; //1つめの座標群
		float y1;
		float x2; //2つめの座標群
		float y2; 

	float manhattan(){
		return std::abs((x1-x2)) + std::abs((y1-y2)); //マンハッタン距離の計算絶対値+絶対値
	}

};

int main(){
    Vector v1;
    v1.x1 = -1.5; //座標入力
    v1.y1 = -0.5;
    v1.x2 = 2.1;
    v1.y2 = 8.9;
    std::cout << v1.manhattan();
    return 0;
}

