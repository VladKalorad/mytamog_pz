#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "admin.h"
using namespace std;
ref class files
{
public:
	void write(std::string login, std::string password) {
		std::ofstream out("hello.txt", std::ios::app);
			if (out.is_open())
			{
				out << login << "|" << password << std::endl;
			}
			out.close();
	}
	void writeadmin(std::string login, std::string password) {
		std::ofstream administrator("admin.txt", std::ios::app);
		if (administrator.is_open())
		{
			administrator << login << "|" << password << std::endl;
		}
		administrator.close();
	}
	void play_mlekop()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Поиграл с котиком" <<  std::endl;
		}
		input.close();
	}
	void play_fish()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Поиграл с рыбкой" << std::endl;
		}
		input.close();
	}
	void play_nas()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Поиграл с насекомым" << std::endl;
		}
		input.close();
	}
	void play_bird()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Поиграл с птичкой" << std::endl;
		}
		input.close();
	}
	void eat_mlekop()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Покормил котика" << std::endl;
		}
		input.close();
	}
	void eat_nas()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Покормил насекомого" << std::endl;
		}
		input.close();
	}
	void eat_fish()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Покормил рыбку" << std::endl;
		}
		input.close();
	}
	void eat_bird()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Покормил птичку" << std::endl;
		}
		input.close();
	}
	void wash_mlekop()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Помыл котика" << std::endl;
		}
		input.close();
	}
	void wash_nas()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Помыл насекомого" << std::endl;
		}
		input.close();
	}
	void wash_fish()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Помыл рыбку" << std::endl;
		}
		input.close();
	}
	void wash_bird()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Помыл птичку" << std::endl;
		}
		input.close();
	}
	void sleep_mlekop()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Уложил/Разбудил котика" << std::endl;
		}
		input.close();
	}
	void sleep_nas()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Уложил/Разбудил насекомого" << std::endl;
		}
		input.close();
	}
	void sleep_fish()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Уложил/Разбудил  рыбку" << std::endl;
		}
		input.close();
	}
	void sleep_bird()
	{
		std::ofstream input("commands.txt", std::ios::app);
		if (input.is_open())
		{
			input << "Уложил/Разбудил птичку" << std::endl;
		}
		input.close();
	}
	bool check(std::string login, std::string password) {
		string s;
		ifstream file("hello.txt");
		ifstream administrator("admin.txt");
		if (admin == 0)
		{
			while (getline(file, s)) {
				string login1 = s.substr(0, s.find("|"));
				string password1 = s.substr(s.find("|") + 1, s.size() - 1);
				if (login1 == login && password1 == password) {
					return true;
				}
			}
		}
		if (admin == 1)
		{
			while (getline(administrator, s)) {
				string login1 = s.substr(0, s.find("|"));
				string password1 = s.substr(s.find("|") + 1, s.size() - 1);
				if (login1 == login && password1 == password) {
					return true;
				}
			}
		}
		file.close();
	}
	vector <string> read() {
		vector <string> a;
		string s;
		string sum;
		int i = 0;
		ifstream file("D:\\messages.txt");
		while (getline(file, s)) {
			a.push_back(s + "\n");
		}
		file.close();
		return a;
	}
};