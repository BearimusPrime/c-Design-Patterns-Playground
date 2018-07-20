#pragma once
#include <memory>
#include <string>
#include <solution/Observer.hpp>


class Chart;
class Calculator;
class EmailSender;

class Database: public Observer
{
private:
    //Observer obs;
public:
    Database();
    //void initialize(Chart* chart, Calculator* calculator, EmailSender* emailSender); //try to remove second constructor!
    void changeData(std::string newData);
    std::string getData(std::string query);

private:
    void onChange();

    std::string data;

    //Chart* chartHandler;              //
    //Calculator* calculatorHandler;    //   try to remove these unlogic dependencies
    //EmailSender* emailSenderHandler;  //
};
