#include<iostream>
#include<windows.h>
using namespace std;
    //https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

void mention(){
    keybd_event(VK_SHIFT,0,0,0);
    keybd_event(0x32,0,0,0);
    keybd_event(0x32,0,KEYEVENTF_KEYUP,0);
    keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
}

void Enter(){
    keybd_event(VK_RETURN,0,0,0);
    keybd_event(VK_RETURN,0,KEYEVENTF_KEYUP,0);
}
void Down_Arrow(){
    keybd_event(VK_DOWN,0,0,0);
    keybd_event(VK_DOWN,0,KEYEVENTF_KEYUP,0);
}



int main(){
    int group_members = 0;
    cout << "How many group members : ";
    cin >> group_members;
    Sleep(3 * 1000);
    
    for(int i = 1; i < group_members; i++){
        cout << i << endl;
        mention();
        for(int j =1; j < i; j++){
            Down_Arrow();
        }
        Enter();
    }
    Enter();
}