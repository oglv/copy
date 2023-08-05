#include <iostream> //gitにしたときに文字化けしたが正直一部の数字の表記以外いらないので改修は後程
#include <Windows.h>
#include <synchapi.h>
#include "copy.hpp"
using namespace std;

int main()
{
    long long int timer = 1;
    system("mkdir C:\\Users\\og118\\Desktop\\bedrock_server_backup");
    copy(1);
    system("Xcopy C:\\Users\\og118\\Desktop\\bedrock_server C:\\Users\\og118\\Desktop\\bedrock_server_backup /I/O/H/Y");
    copy(2);
    cout << endl;
    cout << u8"���b�����Ɏ��Ԃ��܂����H" << endl;
    cout << u8"�f�t�H���g�ł�21600�b�i�U���ԁj�����ł�" << endl;
    cout << u8"�f�t�H���g�̂܂܎��s���܂����H\n[Y][N]" << endl;
    for(;;)
    {
        string a;
        cin >> a;
        if(a == "Y" || a == "y")
        {
            timer = 21600;
            cout << u8"21600�b�i6���ԁj�����Ɏ��s���܂�" << endl;
            break;
        }
        if(a == "N" || a == "n")
        {
            timer *= 1000;
            int b;
            cout << u8"���s�������Ԋu��b���œ��͂��Ă�������" << endl;
            cin >> b;
            timer *= b;
            cout << b << u8"�b�����Ɏ��s���܂�" << endl;
            break;
        }
        else
        {
            cout << u8"�K�؂ȓ��͂����Ă�������\n[Y][N]" << endl;
        }
    }
    for(;;)
    {
        Sleep(timer);
        copy(1);
        system("Xcopy C:\\Users\\og118\\Desktop\\bedrock_server C:\\Users\\og118\\Desktop\\bedrock_server_backup /I/O/H/Y");
        copy(2);
        cout << endl;
    }
}
