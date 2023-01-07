#include <iostream>
#include <vector>
#include "Author.cpp"

using namespace std;

class Book {
private:
	string name;
	double price;
	vector<Author> authors;

public:
	Book(string name, vector<Author> authors, double price) {
		this->name = name;
		this->price = price;
		this->authors = authors;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	string getAuthorNames() {
		string authorNames = "";
		for (auto i:authors) {
			authorNames += i.getName() + ", ";
		}
		authorNames += authors[authors.size() - 1].getName();
		return authorNames;
	}
};