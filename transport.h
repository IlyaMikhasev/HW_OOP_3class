#pragma once
#include <string>
#include <iostream>
class transport
{
public:
	transport(int speed, const std::string& color, int weigth);
	transport();
	int getSpeed()const;
	void setSpeed(int speed);
	const std::string& getColor() const;
	void setColor(const std::string& color);
	int getWeigth()const;
	void setWeigth(int weigth);
private:
	int _speed;
	std::string _color;
	int _weigth;
};
class comercial : public transport
{
public:
	comercial(int speed, const std::string& color, int weigth, int price, int capacity);
	comercial(int price, int capacity, int speed);
	int getPrice()const;
	void setPrice(int price);
	int getCapacity()const;
	void setCapacity(int capacity);
	int getSpeed()const;
	void setSpeed(int speed);
private:
	int _speed;
	int _price;
	int _capacity;
};
class bus : public comercial
{
public:
	bus(int speed, int price, int capacity, int number, const std::string& way);
	int getNumber()const;
	void setNumber(int number);
	const std::string& getWay()const;
	void setWay(const std::string& way);
	int getSpeed()const;
	void setSpeed(int speed);
private:
	int _speed;
	int _number;
	std::string _way;
};
