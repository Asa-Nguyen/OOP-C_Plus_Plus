#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Card {
private:
	string nameBook;
	string nameAuthor;
	int numberBook;
public:
	Card(){}
	Card(string nameBook, string nameAuthor, int numberBook)
	{
		this->nameBook = nameBook;
		this->nameAuthor = nameAuthor;
		this->numberBook = numberBook;
	}
    string getNameBook(){
        return nameBook;
    } 
    void setNameBook(string nameBook){
        this->nameBook = nameBook;
    }
    string getNameAuthor(){
        return nameAuthor;
    } 
    void setNameAuthor(string nameAuthor){
        this->nameAuthor = nameAuthor;
    }
	void display()
	{
		cout << "Name Book: " << this->nameBook << endl;
		cout << "Name Author: " << this->nameAuthor << endl;
		cout << "Number Book: " << this->numberBook << endl;
	}
	int getNumBook()
	{
		return this->numberBook;
	}
	void setNumbook(int numberBook){
        this->numberBook = numberBook;
    }
	 static void sortCards(vector<Card> &cards){
        for(int i = 0; i < cards.size() - 1; i++){
            for(int j = i + 1; j < cards.size(); j++){
                if(cards[i].getNumBook() > cards[j].getNumBook()){
                    swap(cards[i], cards[j]);
                }
            }    
        }    
    }
};