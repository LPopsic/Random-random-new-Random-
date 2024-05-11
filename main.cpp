#include <bits/stdc++.h>
using namespace std;
int main(){

    int64_t setting, language;
    cout <<" *   *   *   *   *   *   *   *" << endl;
    cout << "Random random = new Random(); v0.3" << endl;
    cout <<" *   *   *   *   *   *   *   *" << endl;
    cout << " " << endl;
    cout << "1 - Go to the main program / Eiti į pagrindinę programą / Перейти в основную программу" << endl;
    cout << "2 - Changelog (in English)" << endl;
    cin >> setting;
    system("cls");

    if(setting == 1){
        cout << "What language do you want to select?" << endl;
        cout << "Kokia kalbą noretumėte pasirinkti?" << endl;
        cout << "Какой язык вы хотите выбрать?" << endl;
        cout << " " << endl;
        cout << "1 - English" << endl;
        cout << "2 - Lietuvių" << endl;
        cout << "3 - Pусский" << endl;
        cin >> language;
        system("cls");
    }
    if(setting == 2){
        cout << "Changelog for Random random = new Random(); v0.3:" << endl;
        cout << " " << endl;
        cout << "• Added one more menu" << endl;
        cout << "• Added 64-bit intergers: the group number limit is 9223372036854775807 right now (the limit was 2147483647" << endl;
    }
    if(setting >= 3){
        cout << "You entered the wrong number. / Įvedėte neteisingą numerį. / Вы ввели неправильный номер." << endl;
    }

    if(language == 1){
    cout << "Enter groups of numbers: ";
    int64_t a, k = 0;
    cin >> a;
    srand(time(NULL));
    cout << " " << endl;
    cout << "Showing " << a << " group(s) of numbers..." << endl;
    cout << " " << endl;
    for(int x=0;x<a;x++){
        k++;
        cout << 1+ (rand() % 1000000000000) << " || " << k << " number" << " out of " << a << " lines" << endl; // out of system written by khamperis pukum
    }
    cout << "The end" << endl;
    return 0;
    }

    if(language == 2){
    cout << "Įveskite skaičių grupes: ";
    int64_t a, k = 0;
    cin >> a;
    srand(time(NULL));
    cout << " " << endl;
    cout << "Rodomos " << a << " skaičių grupės..." << endl;
    cout << " " << endl;
    for(int x=0;x<a;x++){
        k++;
        cout << 1+ (rand() % 1000000000000) << " || " << k << " numeris" << " iš " << a << endl; // out of system written by khamperis pukum
    }
    cout << "Pabaiga" << endl;
    return 0;
    }

    if(language == 3){
    cout << "Введите группы чисел: ";
    int64_t a, k = 0;
    cin >> a;
    srand(time(NULL));
    cout << " " << endl;
    cout << "Oтображаются " << a << " группы цифр..." << endl;
    cout << " " << endl;
    for(int x=0;x<a;x++){
        k++;
        cout << 1+ (rand() % 1000000000000) << " || " << k << " число" << " от " << a << endl; // out of system written by khamperis pukum
    }
    cout << "Kонец" << endl;
    return 0;
    }
    if(language >= 4){
        cout << "You entered the wrong number. / Įvedėte neteisingą numerį. / Вы ввели неправильный номер." << endl;
    }
}
