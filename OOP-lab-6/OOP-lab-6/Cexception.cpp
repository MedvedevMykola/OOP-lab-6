#include "stdafx.h"
#include "Cexception.h"
#include <cstdio>
#include <string.h>

Cexception::Cexception() {
	msg = new char[1];
}

Cexception::Cexception(char* message) {
	msg = new char[strlen(message) + 1];
	strcpy(msg, message);
}

Cexception::~Cexception() {
	delete[] msg;
	msg = nullptr;
}

void Cexception::show(void) {
	printf("%s\n", msg);
}
