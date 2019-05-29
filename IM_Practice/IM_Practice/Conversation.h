#pragma once

#include "NetworkMessenger.h"
#include "Message.h"
#include <vector>
#include <string>

class Conversation
{
public:
	Conversation();
	~Conversation();

	//public interface
	void SendMessage(std::string message);

	
private:


};

