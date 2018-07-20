#include <vector>
#include <iostream>


#include "Message.hpp"

using namespace std;

int main()
{
    vector<Message> messages{
        Message(1,"short mesg"),
        Message(1,"long message with high priority"),
        Message(0,"long message with low priority"),
        Message(0,"noone care")};

    for (auto msg: messages)
    {
	/*if(msg.content.size() <= 10)
            cout << "short message: " << msg.content << endl;
        if(msg.content.size() > 10)
            cout << "long message: " << msg.content << endl;
        if(msg.highPriority)
            cout << "message with high priority: " << msg.content << endl;
        cout << "message: \"" << msg.content << "\" handled properly" << endl;
	*/
	Handler h(msg);


    }
}
