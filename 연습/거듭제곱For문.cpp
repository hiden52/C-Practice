#include <iostream>

using namespace std;

int main()
{
    //for문의 연습
    // 임의의 정수를 입력받아 그 수 만큼 1~10의 수를 각각 거듭제곱한 결과를 출력하는 프로그램
    
    int iHowM =0; //입력 받을 수 == 거듭제곱의 횟수
    cout << "1~10 의 수를 몇 번 제곱할까? : " << endl;
    cin >>  iHowM ;
    
    for(int i=1; i<=10; ++i) //i는 1부터 10까지의 수를 뽑아내기 위함
    {
        int iResult = i;
        for(int j= iHowM; j > 1; --j) // int j= iHowM; j > 1; 
        {                             // 1을 입력받을 경우 거듭제곱 하지 않기 위함
            iResult *= i;
        }
        
        cout << iResult << endl;      // 결과 출력 (1~10)
    }
    
    return 0;
}
