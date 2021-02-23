#include <iostream>

using namespace std;

int main()
{
    int total, moneyGiven, rest, p50, p20, p1;
    cout << "total price: ";
    cin >> total;
    system("cls");
    cout << "the total price is " << total << "DH" << endl;
    cout << "give the money: ";
    cin >> moneyGiven;
    while(moneyGiven < total){
        cout << "give the money: ";
        cin >> moneyGiven;
    }
    rest = moneyGiven-total;
    cout << "total rest is " << rest << endl;
    cout << "#########################\n";
    p50 = rest/50;
    p20 = (rest - (50*p50)) / 20;
    p1 = (rest-(50*p50)+rest-(20*p20))%20;
    cout << p50 << " of piece 50 DH" << endl;
    cout << p20 << " of piece 20 DH" << endl;
    cout << p1 << " of piece 1 DH" << endl;

}
