
// Cheat Loader C++ Example by @LaCosta#1337

#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#pragma comment (lib, "urlmon.lib")


void cheat()
{                    // for download links you can use discord is easy //Change yourdll.dll to your dll name
    HRESULT ab = URLDownloadToFile(NULL, _T("your download link"), _T("C:/Windows/System32/yourdll.dll"), 0, NULL); //only use if its a internal if not you can delete this line
                     // for download links you can use discord is easy 
    HRESULT abc = URLDownloadToFile(NULL, _T("your download link"), _T("C:/Windows/System32/injector.exe"), 0, NULL);//you can use this for either a injector or if its external a external
    system("start C:/Windows/System32/injector.exe");
}
void drivers()
{                                            // for download links you can use discord is easy
    HRESULT ab = URLDownloadToFile(NULL, _T("your download link"), _T("C:/Windows/System32/yourdriver.sys"), 0, NULL);//Change yourdriver.sys to your drivers name
                                             // for download links you can use discord is easy
    HRESULT abc = URLDownloadToFile(NULL, _T("your download link"), _T("C:/Windows/System32/yourmapper.exe"), 0, NULL);//Change yourmapper.exe to your mapper name
                  //Change yourmapper.exe to your mapper name //Change yourdriver.sys to your drivers name
    system("start C:/Windows/System32/yourmapper.exe C:/Windows/System32/yourdriver.sys");
}
void loader()
{
    system("cls");
    SetConsoleTitleA("[+] Cheat Loader C++ Example | by @LaCosta#1337"); //this is the Console Title
    std::cout << " [1] Load Drivers\n\n [2] Load Cheat\n\n Choose Option:\n";
    Sleep(100);
    int choice;

    std::cin >> choice;
    switch (choice)
    {
    case 1:
        cheat();
        break;
    case 2:
        drivers();
        break;
    }
}
int main()
{
    SetConsoleTitleA("[+] Cheat Loader C++ Example | by @LaCosta#1337"); //this is the Console Title

    std::cout << "W\n";
    Sleep(100);
    std::cout << "E\n";
    Sleep(100);
    std::cout << "L\n";
    Sleep(100);
    std::cout << "C\n";
    Sleep(100);
    std::cout << "O\n";
    Sleep(100);
    std::cout << "M\n";
    Sleep(100);
    std::cout << "E\n";
    Sleep(100);
    std::cout << "Cheat Loader C++ made by @LaCosta#1337\n";
    Sleep(2000);
    loader();
}


