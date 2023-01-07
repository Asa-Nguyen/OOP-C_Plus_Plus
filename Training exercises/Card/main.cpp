#include "Card.cpp"
#include <vector>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void Input(vector<Card>&cards){
    char count = '0';
    int c = 0;
    for (int i=0;i<size(cards);i++)
    {
        cards[i].setNameBook("A"+count);
        cards[i].setNameAuthor("B"+count);
        cards[i].setNumbook(10-c);
        count++;
        c++;
    }
}

void Output(vector<Card>cards){
    for (auto i : cards)
    {
        i.display();
        cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    vector<Card> cards(n);
    Input(cards);
    Output(cards); 
    return 0;
}