#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <chrono>
#include <thread>

using namespace std;

void Player_Message(string Person, string Message, int Message_Wait)
{
	this_thread::sleep_for(chrono::milliseconds(Message_Wait));
	transform(Person.begin(), Person.end(), Person.begin(), [](unsigned char c) { return toupper(c); });
	cout << "[" << Person << "] : " << Message << endl;
}

void Non_Player_Message(string Message, int Message_Wait)
{
	this_thread::sleep_for(chrono::milliseconds(Message_Wait));
	cout << Message << endl;
}