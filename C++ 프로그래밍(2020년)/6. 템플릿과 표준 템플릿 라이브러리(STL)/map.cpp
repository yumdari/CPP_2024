#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, string> dic; // map 컨테이너 생성. key : 영단어, value : 한글 뜻
	
	// 단어 3개를 map에 저장
	dic.insert(make_pair("love", "사랑")); // ("love", "사랑") 저장
	dic.insert(make_pair("apple", "사과")); // ("apple", "사과") 저장
	dic["cherry"] = "체리"; // ("cherry", "체리") 저장
	
	cout << "저장된 단어 개수 " << dic.size() << endl;
	
	string eng;
	
	while(true)
	{
		cout << "찾고 싶은 단어>> ";
		getline(cin, eng); // 사용자로부터 key 입력
		if(eng == "exit")
		{
			break;
		}
		
		if(dic.find(eng) == dic.end()) // eng 'key'를 끝까지 찾았는데 없을 경우
		{
			cout << "없음" << endl;
		}
		else
		{
			cout << dic[eng] << endl; // dic에서 eng의 값을 찾아 출력
		}
	}
	cout << "종료합니다..."<< endl;
}