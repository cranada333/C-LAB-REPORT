#include <iostream> //iostream이라는 헤더파일을 포함시킴
using namespace std; //cout나 cin이 정의 되려면 std라는 네임스페이스가 필요한데 이를 생략하고 계속 쓰겠다고 선언

int main() { //메인함수 -> 프로그램이 실행될 때 항상 먼저 시작되는 함수
	cout << "Hello, World!" << endl; //cout -> 콘솔화면에 출력, ""에 문자를 작성, endl -> 줄바꿈
	return 0; //프로그램이 종료 되었음을 선언
}