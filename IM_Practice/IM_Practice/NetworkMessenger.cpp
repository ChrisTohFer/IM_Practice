#include "pch.h"
#include "NetworkMessenger.h"


NetworkMessenger::NetworkMessenger()
{
}


NetworkMessenger::~NetworkMessenger()
{
}

void NetworkMessenger::Connect()
{
	Connect(m_default_ip);
}
void NetworkMessenger::Connect(std::string ip)
{
	sf::Socket::Status status = m_socket.connect(ip, m_default_port);
	
}

//Send a message to the conversation partner(s)
void NetworkMessenger::SendMessage(Message & message)
{
}

//Get a list of the received messages
MessageList NetworkMessenger::GetNewMessages()
{
	return MessageList();
}
