#pragma once
#include <cstdlib>
#include <iostream>
#include "Cexception.h"
#include <vector>
#define Msize 7
#define Tsize 11000
#define Isize 2048

using namespace std;
template<typename T>
class My_template
{
	vector <T> arr;
	vector <T> M_hesh [Tsize];
public:
	My_template()
	{
		i_set();
	}
	My_template(int s)
	{
		set();
	}

	void i_set()
	{
		arr.resize(Msize);
		for (int i = 0; i < Msize; i++){
			arr[i] = rand() % (int)((2e4) + 1) - 1e4;
			hesh_(arr[i]);
		}
	}

	void set()
	{
		arr.resize(s);
		for (int i = 0; i < s; i++)
		{
			char inp[Isize] = "", max_size[Isize] = "2147483647", min_size[Isize] = "-2147483648";
			bool flag = true;
			bool size = true;
			bool eque = true;
			while (true) {
				printf("Enter number: ");
				gets_s(inp, Isize);
				if (!strlen(inp))
					flag = false;
				for (int i = 0; i < strlen(inp); i++)
				{
					if (!(inp[i] >= 32 && inp[i] <= 127))
					{
						flag = false;
						break;
					}
					if ((inp[0] != '-') && !isdigit(inp[0]))
					{
						flag = false;
						break;
					}
					if (!isdigit(inp[i]) && i>0)
					{
						flag = false;
						break;
					}

				}
				if (inp == max_size || inp == min_size)
				{
					eque = false;
				}
				if (((abs(atoi(inp)) >= atoi(max_size)) || ((atoi(inp)) <= atoi(min_size))) && eque == true)
				{
					size = false;
				}
				if (flag == true && size == true)
					break;
				else
				{
					if (flag == false)
					{
						char msg[Isize];
						msg[0] = 0;
						strcpy(msg, "Error! Not number! You enter: ");
						strcat(msg, inp);

						throw Cexception(msg);
					}
					if (size == false)
					{
						char msg[Isize];
						msg[0] = 0;
						strcpy(msg, "Error! Number isn`t int! You enter: ");
						strcat(msg, inp);

						throw Cexception(msg);
					}
				}
			}
			arr[i] = atoi(inp);
		}
	}

	void i_get()
	{
		for (int i = 0; i < Msize; i++)
		{
			cout << arr[i] << endl;
		}
	}

	 void get(int s)
	{
		for (int i = 0; i < s; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	 void hesh_(T number) {
		 int index = abs(number) % Tsize;
	     if(!find_(number)) M_hesh[index].push_back(number);
	 }

	 bool find_(T number) {
		 int index = abs(number) % Tsize;
		 for (int i = 0, size = M_hesh[index].size(); i < size; i++) {
			 if (M_hesh[index][i] == number) {
				 return true;
			 }
		 }
		 return false;
	}

	int find()
	 {
		 T  numb;
		 char inp[Isize] = "", max_size[Isize] = "2147483647", min_size[Isize] = "-2147483648";
		 bool flag = true;
		 bool size = true;
		 bool eque = true;
		 while (true) {
			 printf("Enter number: ");
			 gets_s(inp, Isize);
			 if (!strlen(inp))
				 flag = false;
			 for (int i = 0; i < strlen(inp); i++)
			 {
				 if (!(inp[i] >= 32 && inp[i] <= 127))
				 {
					 flag = false;
					 break;
				 }
				 if ((inp[0] != '-') && !isdigit(inp[0]))
				 {
					 flag = false;
					 break;
				 }
				 if (!isdigit(inp[i]) && i>0)
				 {
					 flag = false;
					 break;
				 }

			 }
			 if (inp == max_size || inp == min_size)
			 {
				 eque = false;
			 }
			 if (((abs(atoi(inp)) >= atoi(max_size)) || ((atoi(inp)) <= atoi(min_size))) && eque == true)
			 {
				 size = false;
			 }
			 if (flag == true && size == true)
				 break;
			 else
			 {
				 if (flag == false)
				 {
					 char msg[Isize];
					 msg[0] = 0;
					 strcpy(msg, "Error! Not number! You enter: ");
					 strcat(msg, inp);

					 throw Cexception(msg);
				 }
				 if (size == false)
				 {
					 char msg[Isize];
					 msg[0] = 0;
					 strcpy(msg, "Error! Number isn`t int! You enter: ");
					 strcat(msg, inp);

					 throw Cexception(msg);
				 }
			 }
		 }
		 numb = atoi(inp);
		 int index = abs(numb) % Tsize;
		 for (int i = 0, size = M_hesh[index].size(); i < size ;i++){
			 if(M_hesh[index][i] == numb){
				 return true;
			 }			 
		}
		 return false;
	 }
};