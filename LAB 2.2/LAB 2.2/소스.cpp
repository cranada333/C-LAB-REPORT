// carrots.cpp -- food processing program
// uses and displays a variable
#include <iostream>
int main() {
	using namespace std;
	int carrots; //carrots 라는 새로운 변수를 만들기
	carrots = 25; //carrots의 값이 25
	cout << "I have "; //문장이 이어지게 뒤에 빈칸을 넣기
	cout << carrots; //""를 넣지 않고 carrots=25라는 수가 나오도록 하기
	cout << " carrots.";
	cout << endl; //한칸 내리기
	carrots = carrots - 1; //25에서 -1을 하여 24로 변수값을 바꾸기
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl; //<<를 문법이 끝날때 마다 넣어 굳이 cout를 더 사용하지 않고 간편하게 완성
	return 0;
}