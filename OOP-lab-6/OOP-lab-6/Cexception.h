#pragma once

class Cexception {
private:
	char* msg;
public:
	Cexception();
	Cexception(char* message);
	~Cexception();

	void show(void);
};