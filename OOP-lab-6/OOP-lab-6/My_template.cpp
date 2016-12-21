#include "stdafx.h"
#include "My_template.h"
#include "Cexception.h"

/*
template<class T> My_template<T>::My_template()
{
	i_set();
}
template<class T> My_template<T>::My_template(int s)
{
	set();
}

template<class T> My_template<T>::~My_template()
{
	delete[] arr;
	arr = nullptr;
}

template<class T> void My_template<T>::i_set()
{
	T *arr = new T[Msize];
	for(int i=0;i<Msize;i++)
		arr[i] = rand() % ((2e4)+1)-1e4;
}

template<class T> void My_template<T>::set()
{
	T *arr = new T[s];
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

template<class T> void My_template<T>::i_get()
{
	for (int i = 0; i < Msize; i++)
		cout << arr[i] << " ";
	cout << endl;
}

template<class T> void My_template<T>::get(int s)
{
	for (int i = 0; i < s; i++)
		cout << arr[i] << " ";
	cout << endl;
}*/