#include <iostream>
#include<ctime>
#include<string>
#include <fstream>
#define A cout<<"PlayDay\n"
#include <stdlib.h>
#include<limits>
#include<cmath>
using namespace std;

int main()
{
    A;
    setlocale(LC_ALL, "");
    cout << "Sponsor tego programu - jedna noc bez snu i kawa Starbucks!" << endl;
    int number_system_zkad, number_system_dokad, wwod = 0;
    bool a = true, minus = false, debug = true;
    long int number, num10 = 0;
    string str, stralfa, str_proverk, str_dokad, str_wwod;
    cout << "Write the system with which and in which to move(work only with int)" << endl;
    cout << "(skad)" << endl;
    while (true) {
        bool a = false;
        cin >> str_wwod;
        for (int i = 0; i < str_wwod.size(); i++)
        {
            if (str_wwod[i] != '0' && str_wwod[i] != '1' && str_wwod[i] != '2' && str_wwod[i] != '3' && str_wwod[i] != '4' && str_wwod[i] != '5' && str_wwod[i] != '6' && str_wwod[i] != '7' && str_wwod[i] != '8' && str_wwod[i] != '9')
            {
                a = true;
                break;
            }
        }
        if (a == true)
        {
            cout << "it doesn't look like numbers" << endl;
            continue;
        }
        if (str_wwod.size() > 10)
        {
            cout << "Too Big 1" << endl;
            continue;
        }
        if (str_wwod.size() == 10)
        {
            if (str_wwod[0] != '1' && str_wwod[0] != '0')
            {
                cout << "Too Big 2" << endl;
                continue;
            }
        }
        number_system_zkad = stoi(str_wwod);
        str_wwod = "";
        if (number_system_zkad < 2)
        {
            cout << "-_-, realy? you don\'t know that system must be more then 2 or = 2?" << endl;
            continue;
        }
        else
        {
            break;
        }
    }
    cout << "(dokad)" << endl;
    while (true) {
        bool a = false;
        cin >> str_wwod;
        for (int i = 0; i < str_wwod.size(); i++)
        {
            if (str_wwod[i] != '0' && str_wwod[i] != '1' && str_wwod[i] != '2' && str_wwod[i] != '3' && str_wwod[i] != '4' && str_wwod[i] != '5' && str_wwod[i] != '6' && str_wwod[i] != '7' && str_wwod[i] != '8' && str_wwod[i] != '9')
            {
                a = true;
                break;
            }
        }
        if (a == true)
        {
            cout << "it doesn't look like numbers" << endl;
            continue;
        }
        if (str_wwod.size() > 10)
        {
            cout << "Too Big 1" << endl;
            continue;
        }
        if (str_wwod.size() == 10)
        {
            if (str_wwod[0] != '1' && str_wwod[0] != '0')
            {
                cout << "Too Big 2" << endl;
                continue;
            }
        }
        number_system_dokad = stoi(str_wwod);
        str_wwod = "";
        if (number_system_dokad < 2)
        {
            cout << "-_-, realy? you don\'t know that system must be more then 2 or = 2?" << endl;
            continue;
        }
        else
        {
            break;
        }
    }
    cout << "Write the number to convert(only int and separated by commas)" << endl << "(characters to use:\'0\' \'1\' \'2\' \'3\' \'4\' \'5\' \'6\' \'7\' \'8\' \'9\' \',\' \'-\')" << endl;
    cout << "((you can enter any numbers except those that in the 10-system exceed max int)if it gives an error, then you yourself are to blame)" << endl;
link:
    cin >> str;

    for (int i = 0; i < str.size() + 1; i++)
    {
        if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
        {
            wwod++;
        }
    }

    if (wwod == 0)
    {
        cout << "it doesn't look like numbers (ver 2.0)" << endl;
        goto link;
    }

    for (int i = 0; i < str.size() + 1;)
    {
        if (str[i] == '-' && i == 0)
        {
            minus = true;
            i++;
            continue;
        }
        if (str[i] == '-' && i > 0)
        {
            cout << "If you want to write minus, please write it how first symbol" << endl;
            goto link;
        }
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != ',' && str[i] != '-' && str[i] != '\0')
        {
            cout << "Hey, do not enter characters that cannot be entered" << endl;
            goto link;
        }
        if (str[0] == ',')
        {
            i++;
            continue;
        }
        if (str[0] == '\0')
        {
            num10 = 0;
            str_proverk = "";
            stralfa = "";
            cout << "I agree, extraordinary, but don’t do it anymore" << endl;
            goto link;
        }
        if ((str[i] == ',' && str[i - 1] == ',') || (str[i] == '\0' && str[i - 1] == ',') || (str[i] == ',' && str[i - 1] == '-'))
        {
            i++;
            continue;
        }

        if (str[i] == ',' || str[i] == '\0')
        {
            num10 = stoi(str_proverk);
            i++;
            if (num10 >= number_system_zkad)
            {
                cout << "Number must be <" << number_system_zkad << endl;
                num10 = 0;
                str_proverk = "";
                stralfa = "";
                goto link;
            }
            else
            {
                str_proverk = "";
            }
        }
        else
        {
            stralfa = stralfa + str[i];
            str_proverk = str_proverk + str[i];
            if (str_proverk.size() > 10)
            {
                cout << "Too big 6" << endl;
                stralfa = "";
                str_proverk = "";
                goto link;
            }
            else if (str_proverk.size() == 10)
            {
                if (str_proverk[0] != '1' && str_proverk[0] != '0')
                {
                    cout << "Too big 7" << endl;
                    stralfa = "";
                    str_proverk = "";
                    goto link;
                }
            }
            i++;
        }
    }

    str_proverk = stralfa;
    stralfa = "";
    num10 = 0;
    number = 0;
    int j = 0;
    for (int g = 1; g < str.size() + 1; g++)
    {
        if (number_system_zkad == 10)
        {
            if (str_proverk.size() > 10)
            {
                cout << "Too Big 3" << endl;
                str_proverk = "";
                goto link;
            }
            if (str_proverk.size() == 10)
            {
                if (str_proverk[0] != '1' && str_proverk[0] != '0')
                {
                    cout << "Too Big 4" << endl;
                    str_proverk = "";
                    goto link;
                }
            }
            number = stoi(str_proverk);
            str_proverk = "";
            debug = false;
            break;
        }
        if (str[str.size() - g] == '-')
        {
            break;
        }
        if (str[str.size() - g] != ',')
        {
            stralfa = str[str.size() - g] + stralfa;
        }
        else
        {
            if (stralfa == "")
            {
                continue;
            }
            num10 = stoi(stralfa);
            number = number + num10 * pow(number_system_zkad, j);
            j++;
            stralfa = "";
        }
    }
    if (debug)
    {
        if (stralfa != "")
        {
            num10 = stoi(stralfa);
            number = number + num10 * pow(number_system_zkad, j);
        }
    }
    if (number < 0 || number > 2147483645)
    {
        cout << "exceeded int value!" << "\tFatal error EPTA" << endl;
        goto link_end;
    }
    if (number_system_dokad == 10)
    {
        if (minus == true)
        {
            cout << "(-)" << number << endl;
        }
        else
        {
            cout << number << endl;
        }
    }
    else
    {
        for (int ost = number, j, a = 0;;)
        {
            j = ost / number_system_dokad;
            if (j == 0)
            {
                stralfa = to_string(ost);
                if (a == 0)
                {
                    str_dokad = stralfa;
                    a++;
                    break;
                }
                str_dokad = stralfa + "," + str_dokad;
                break;
            }
            else
            {
                stralfa = to_string(ost - j * number_system_dokad);
                if (a == 0)
                {
                    str_dokad = stralfa;
                    a++;
                    ost = j;
                    continue;
                }
                str_dokad = stralfa + "," + str_dokad;
                ost = j;
            }
        }
        if (minus == true)
        {
            cout << "(-)" << str_dokad << endl;
        }
        else
        {
            cout << str_dokad << endl;
        }
    }
link_end:
    A;
}