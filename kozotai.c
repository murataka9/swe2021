#include <stdio.h>

void main(){
	typedef struct person{ //「person」という名前の構造体を定義
		char name[20]; // メンバを定義 
		float weight;
		int height;
	} Person;
   
	Person p[5];
	// 空っぽの Person 型の変数を 5 個繋げた配列 p[5]を定義
	for (int i = 0; i < 5; i++){
		printf("input %d‐th person's name:", i); 
		scanf("%s", p[i].name);
		// キーボードから文字列を入力、p[i]のnameに格納。 
		// 文字列なので、「&」なしでよい
		printf(" input %s's weight:", p[i].name); 
		scanf("%f", &p[i].weight);
		// キーボードから数値を入力。「&」が必要
		printf(" input %s's height:", p[i].name); 
		scanf("%d", &p[i].height);
		// キーボードから数値を入力。「&」が必要
	}
    	for (int i = 0; i < 5; i++){
        	Person j = p[i];
		float bmi = j.weight / (j.height/100.0 * j.height/100.0);
		// 値を取りだしてきて計算に利用。BMIを算出
		printf("%s's BMI is %f.¥n", j.name, bmi);
	}
}
