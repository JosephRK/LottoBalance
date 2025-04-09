#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Lotto Balance!" << endl;
    int TicketAmount[24];
    int TicketValue[24];
    for (int i = 0; i < 24; i++) {
        cout<<"Input Ticket " << i+1 << " value:" <<endl;
        cin>>TicketValue[i];}

    cout<<"Your Ticket Values Are:"<<endl;
    int sizeTV = sizeof(TicketValue) / sizeof(int);
    for (int i = 0; i < sizeTV; i++) {
        cout<<TicketValue[i]<<" ";}

    cout<<endl;

    for (int i = 0; i < 24; i++) {
        cout<<"Input Ticket " << i+1 << " Amount:" <<endl;
        cin>>TicketAmount[i];
    }
    cout<<"Your Ticket Amounts Are:"<<endl;
    int sizeTA = sizeof(TicketAmount) / sizeof(int);
    for (int i = 0; i < sizeTA; i++) {
        cout<<TicketAmount[i]<<" ";
    }

    cout<<endl;

    int TicketTotal = 0;
    for (int i = 0; i < 24; i++) {
        TicketTotal += TicketAmount[i] * TicketValue[i];
    }

    float b100,b50,b20,b10,b5,b2,b1,coins,misc;
    cout<<"Enter $100s:"<<endl;
    cin>> b100;
    cout<<"Enter $50s:"<<endl;
    cin>> b50;
    cout<<"Enter $20s:"<<endl;
    cin>> b20;
    cout<<"Enter $10s:"<<endl;
    cin>> b10;
    cout<<"Enter $5s:"<<endl;
    cin>> b5;
    cout<<"Enter $2s:"<<endl;
    cin>> b2;
    cout<<"Enter $1:"<<endl;
    cin>> b1;
    cout<<"Enter $coins:"<<endl;
    cin>> coins;
    cout<<"Enter $misc:"<<endl;
    cin>> misc;
    float CashTotal = b100+b50+b20+b10+b5+b2+b1+coins+misc;

    float pays,OLNetSales,loans;
    cout<<"Enter Online Net Sales: "<<endl;
    cin>> OLNetSales;
    cout<<"Enter Instant Pays"<<endl;
    cin>> pays;
    cout<<"Enter Loans: "<<endl;
    cin >> loans;

    float SystemTotal;
    cout<<"Enter System Total: "<<endl;
    cin>> SystemTotal;

    float ActualTotal=(CashTotal+TicketTotal+pays)-OLNetSales-loans;
    float TotalDistance=ActualTotal-SystemTotal;
    cout<<"Your Cash Total Is: "<<CashTotal<<endl;
    cout<<"Your System Total Is: "<<SystemTotal<<endl;
    cout<<"Your Actual Total Is: "<<ActualTotal<<endl;
    cout<<"Which is "<<TotalDistance<<" Off"<<endl;

    return 0;
}