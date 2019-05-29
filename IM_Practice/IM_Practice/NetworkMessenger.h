#pragma once

#include <vector>
#include <string>
#include "Message.h"
#include "SFML/Network.hpp"

typedef std::vector<Message> MessageList;

class NetworkMessenger
{
public:
	NetworkMessenger();
	~NetworkMessenger();

	//public interface

	//Connect to the server
	void Connect();
	//Connect to server with given ip address
	void Connect(std::string ip);

	//Send a message to the conversation partner(s)
	virtual void SendMessage(Message& message);

	//Get a list of the received messages
	virtual MessageList GetNewMessages();

private:

	//Socket for communication with server
	sf::TcpSocket m_socket;

	//Default server details
	const std::string m_default_ip = "82.1.158.165";
	const int m_default_port = 53000;
};

