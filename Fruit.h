#pragma once

using namespace std;

class Fruit {
protected:
	string name;
	string color;
public:
	Fruit(const string& newName = "Apple", const string& newColor = "Green") {
		setName(newName);
		setColor(newColor);
	}

	string getName() { return name; }
	void setName(const string& newName) { if (newName.size() > 0) { name = newName; } }
	string getColor() { return color; }
	void setColor(const string& newColor) { if (newColor.size() > 0) { color = newColor; } }
}; 

class Apple : public Fruit {
private:
	double fiber;
public:
	Apple(const string& newName = "Apple", const string& newColor = "Green", const double newFiber = 1) {
		Fruit(newName, newColor);
		setFiber(newFiber);
	}
	double getFiber() { return fiber; }
	void setFiber(const double newFiber) { if (newFiber > 0) { fiber = newFiber; } }
};

class Banana : public Fruit {
public:
	Banana(const string& newName = "Banana", const string& newColor = "Yellow") {
		Fruit(newName, newColor);
	}
};