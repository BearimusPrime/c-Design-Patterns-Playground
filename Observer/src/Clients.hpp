#pragma once
#include <Database.hpp>
#include <iostream>

class Chart
{
public:
    Chart() = default;
    Chart(Database& db)
        :database(db)
    {
	id = database.subscribe([this](){this->plot();});
    }

    void plot()
    {
    std::cout << "Chart::plot()   " << database.getData("chart") << "\n";
}

private:
unsigned id;
Database& database;
};

class Calculator
{
public:
Calculator() = default;
Calculator(Database& db)
    :database(db)
{
    id = database.subscribe([this](){this->recalculate();});
}

    void recalculate()
    {
        std::cout << "Calculator::recalculate()   " << database.getData("calculator") << "\n";
    }

private:
    Database& database;
    unsigned id;

};

class EmailSender
{
public:
    EmailSender() = default;
    EmailSender(Database& db)
        :database(db)
    {
	id = database.subscribe([this](){this->send();});

    }

    void send()
    {
        std::cout << "EmailSender::send()   " << database.getData("email") << "\n";
    }

private:
    Database& database;
    unsigned id;

};
