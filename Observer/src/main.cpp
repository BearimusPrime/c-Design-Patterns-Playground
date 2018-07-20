#include <Clients.hpp>
#include <Database.hpp>
#include <solution/Observer.hpp>

int main()
{
    Database database;
    Observer obs;
    Chart chart(database);
    Calculator calculator(database);

{
	EmailSender emailSender(database);

	//database.initialize(&chart, &calculator, &emailSender);


        database.changeData("top secret");
}

    database.changeData("other secret"); // what is wrong with this code?
                                         // I expect to no email sending, but application crashed... ;(
}
