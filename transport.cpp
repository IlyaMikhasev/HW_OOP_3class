	#include "transport.h"
	transport::transport(int speed, const std::string& color, int weigth):_speed(speed),_color(color),_weigth(weigth) {}
	transport::transport(): _speed(60),_color("white"),_weigth(1000) {}
	int transport::getSpeed()const {
		return _speed;
	}
	void transport::setSpeed(int speed) {
		_speed = speed;
	}
	const std::string& transport::getColor() const {
		return _color;
	}
	void transport::setColor(const std::string& color) {
		_color = color;
	}
	int transport::getWeigth()const {
		return _weigth;
	}
	void transport::setWeigth(int weigth) {
		_weigth = weigth;
	}

	comercial::comercial(int speed, const std::string& color, int weigth, int price, int capacity) :transport(speed, color, weigth) {
		_price = price;
		_capacity = capacity;
		_speed = speed;
	}
	comercial::comercial(int price, int capacity,int speed):_price(price),_capacity(capacity),_speed(speed) {}
	int comercial::getPrice()const {
		return _price;
	}
	void comercial::setPrice(int price) {
		_price = price;
	}
	int comercial::getCapacity()const {
		return _capacity;

	}
	void comercial::setCapacity(int capacity) {
		_capacity = capacity;
	}
	int comercial::getSpeed()const {
		return _speed;
	}
	void comercial::setSpeed(int speed){
		_speed = speed;
	}

	bus::bus(int speed,int price, int capacity, int number, const std::string& way): comercial(price, capacity,speed) {
		_number = number;
		_way = way;
		_speed = speed;
	}
	int bus::getNumber()const {
		return _number;
	}
	void bus::setNumber(int number) {
		_number = number;
	}
	const std::string& bus::getWay()const {
		return _way;
	}
	void bus::setWay(const std::string& way) {
		_way = way;
	}
	int bus::getSpeed()const {
		return _speed;
	}
	void bus::setSpeed(int speed) {
		_speed = speed;
	}
