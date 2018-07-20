#pragma once
#include <string>
#include <iostream>
#include <memory>


using namespace std;

class Message
{
public:
    Message(bool hiPrio, string c):highPriority(hiPrio), content(c)
    {}
    bool highPriority;
    string content;
};

class Handler
{

public:
    Handler(Message msg): s(msg) {}

    virtual bool HandlerReq()
    {
	if (s.content.size() <= 10) {
	    cout << "short message: " << s.content << endl;
	    return true;}
	else
	{
	    h1.HandleReq();
	    return false;
	}
    }
    virtual void add(unique_ptr<Handler> ptr)
    {
	if (h1)
	    h1->add(move(ptr));
	else h1 = move(ptr);
    }

    virtual ~Handler(){}
protected:
    Message s;
    unique_ptr<Handler> h1 ;

};


class Handler1 :public Handler
{
public:
    Handler1(Message s): Handler(s) {}
    bool HandlerReq()override
    {
	if(s.content.size() > 10){
	    cout << "long message: " << s.content << endl;
	    return true;
	}else
	{
	    h1.HandleReq();
	    return false;
	}
    }
    virtual ~Handler1(){}
};

class Handler2 : public Handler
{
public:
    Handler2(Message s): Handler(s) {}
    bool HandlerReq()override
    {
	if(s.highPriority)
	    cout << "message with high priority: " << s.content << endl;
	cout << "message: \"" << s.content << "\" handled properly" << endl;
    }
    virtual ~Handler2(){}

};
