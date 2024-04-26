#include <bits/stdc++.h>
using namespace std;
int main(){

    int language;

    // menu
    cout << "Random random = new Random(); v0.2" << endl;
    cout << " " << endl;
    cout << "What language do you want to select?" << endl;
    cout << "Kokia kalba noretumete pasirinkti?" << endl;
    cout << "Какой язык вы хотите выбрать?" << endl;
    cout << " " << endl;
    cout << "1 - English" << endl;
    cout << "2 - Lietuviu" << endl;
    cout << "3 - Pусский" << endl;
    cin >> language;
    system("cls");

    // english
    if(language == 1){
    cout << "Enter groups of numbers: ";
    int a, k = 0;
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

    // lietuviu
    if(language == 2){
    cout << "Įveskite skaičių grupes: ";
    int a, k = 0;
    cin >> a;
    srand(time(NULL));
    cout << " " << endl;
    cout << "Rodomos " << a << " skaičių grupės..." << endl;
    cout << " " << endl;
    for(int x=0;x<a;x++){
        k++;
        cout << 1+ (rand() % 1000000000000) << " || " << k << " numeris" << " iš " << a << " linijų" << endl; // out of system written by khamperis pukum
    }
    cout << "Pabaiga" << endl;
    return 0;
    }

    // pусский
    if(language == 3){
    cout << "Введите группы чисел: ";
    int a, k = 0;
    cin >> a;
    srand(time(NULL));
    cout << " " << endl;
    cout << "Oтображаются " << a << " группы цифр..." << endl;
    cout << " " << endl;
    for(int x=0;x<a;x++){
        k++;
        cout << 1+ (rand() % 1000000000000) << " || " << k << " число" << " от " << a << " линии" << endl; // out of system written by khamperis pukum
    }
    cout << "Kонец" << endl;
    return 0;
    }
    else(cout << "You entered the wrong number. / Įvedėte neteisingą numerį. / Вы ввели неправильный номер.");
}
