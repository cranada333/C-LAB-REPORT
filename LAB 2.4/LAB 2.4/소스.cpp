//sum.cpp - sum two integers
#include <iostream>
void  mysum(int, int); //두 수를 상호작용해야 하므로 int를 두개 생성

int main() {
	using namespace std;
	cout << "Enter two integers: ";
	int num1,num2; //두 수를 넣어야 하므로 두개의 변수를 생성
	cin >> num1 >> num2; //>>를 두번 사용해서 num1 을 넣고 그 다음에 num2를 넣을 수 있도록 함
	mysum(num1,num2);
	return 0;

}
void mysum(int a, int b) { //a와 b는 각각 num1, num2에서 받은 변수를 뜻함
	using namespace std;
	cout << "The sum of the two numbers is " << a + b << endl; //a와 b를 합한 것을 끝으로 문장을 끝냄
}