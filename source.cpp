#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f1;
    int i, f;
    char *buf = new char[50];
    char s;
    f1.open("F1.txt");
    try
    {
        if (f1 == NULL)
        {
            throw 123; //генерировать целое число 123
        }
    }
     catch(int i)//сюда передастся число 123
    {
        cout << "File ne sushestvuet" << endl;
        cin>>i;
        return(0);
    }
    i=0;
    f=0;
    cout<<'?'<<endl;
    while (!f1.eof())
    {
        s=f1.get();
        buf[i]=s;
        i++;
        if ((s=='?')||(s=='!'))
        {
            buf[i]='\0';
            if (s=='?')
            {
                cout<<buf<<endl;
                f=1;
            }
            i=0;
        }
	}
	f1.close();
	f1.open("F1.txt");
	try
    {
        if (f1 == NULL)
        {
            throw 123; //генерировать целое число 123
        }
    }
     catch(int i)//сюда передастся число 123
    {
        cout << "File ne sushestvuet" << endl;
        cin>>i;
        return(0);
    }
	cout<<endl;
	cout<<'!'<<endl;
	while (!f1.eof())
    {
        s=f1.get();
        buf[i]=s;
        i++;
        if ((s=='?')||(s=='!'))
        {
            buf[i]='\0';
            if (s=='!')
            {
                cout<<buf<<endl;
                f=1;
            }
            i=0;
        }
	}
    try
    {
        if (f == 0)
        {
            throw 'a'; //генерировать целое число 123
        }
    }
    catch(char s)//сюда передастся число 123
    {
        cout << "V file net ni voprositelnih, ni vosklicatelnih predlogeniy" << endl;
        cin>>i;
	f1.close();
        return(0);
    }


	cin>>i;
    f1.close();
}
