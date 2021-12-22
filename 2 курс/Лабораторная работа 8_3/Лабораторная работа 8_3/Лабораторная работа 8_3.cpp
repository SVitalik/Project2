//#include <iostream>
//#include <string>
//#include <fstream>
//#include <math.h>
//
//using namespace std;
//
//struct SKLAD {
//	char nazvan[40];
//	int col;
//	int cena;
//	int suma;
//	char artik[100];
//	char mesto[100];
//};
//
//void menu()
//{
//	/*setlocale(LC_ALL, "rus");*/
//	cout << "1. Добавить товар" << endl;
//	cout << "2. Изменить товар" << endl;
//	cout << "3. Удалить товар" << endl;
//	cout << "4. Посмотреть остатки товара" << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	ofstream skl;
//	skl.open("D://sklad.txt",ios::app);
//	int N;
//	cout << "Введите kol-vo: " << endl;
//	cin >> N;
//	SKLAD* sclad = new SKLAD[N];
//	for (int i = 0; i < N; i++)
//	{
//		if (!skl.is_open())
//		{
//			cout << "Ошибка открытие файла!" << endl;
//		}
//		else
//		{
//			cout << "название: " << endl;
//			cin >> sclad[i].nazvan;
//			skl << sclad[i].nazvan;
//			skl << "\n";
//			cout << "количество: " << endl;
//			cin >> sclad[i].col;
//			skl << sclad[i].col;
//			skl << "\n";
//			cout << "цена: " << endl;
//			cin >> sclad[i].cena;
//			skl << sclad[i].cena;
//			skl << "\n";
//			cout << "артикул: " << endl;
//			cin >> sclad[i].artik;
//			skl << sclad[i].artik;
//			skl << "\n";
//			cout << "место роз: " << endl;
//			cin >> sclad[i].mesto;
//			skl << sclad[i].mesto;
//			skl << "\n";
//			cout << endl;
//		}
//	}
//	skl.close();
//
//	ifstream zap;
//	zap.open("D://sklad.txt");
//	/*float s = 0;*/
//	for (int i = 0; i < N; i++)
//	{
//		if (sclad[i].cena > 0)
//		{
//			cout << sclad[i].nazvan << endl;
//			cout << "Общая сумма: " << sclad[i].cena * sclad[i].col <<"$"<< endl;
//			cout << endl;
//		}
//		/*s += sclad[i].cena;*/
//	}
//	//cout << s;
//	zap.close();
//	delete[]sclad;
//	return 0;
//}





//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <iterator>
//#include <iomanip>
//#define BUF_SIZE 50
//using std::cout;
//using std::cin;
//using std::endl;
//using std::fstream;
//using std::string;
//using std::vector;
//
//struct Request {
//    char nom[BUF_SIZE];
//    char kategori[BUF_SIZE];
//    char marka[BUF_SIZE];
//    char opt[BUF_SIZE];
//    char roz[BUF_SIZE];
//    char kolv[BUF_SIZE];
//};
//void OutputAll()
//{
//}
//void getDeleteAVTO()
//{
//}
//void GetAddAVTO(Request&);
//void Handler(vector<Request>&, int)
//int Greeting();
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    system("chcp 1251>0");
//    fstream file;
//    file.open("base.txt");
//    if (!file) {
//        std::cerr << "Error open file!" << endl;
//        exit(1);
//    }
//    vector<Request> base;
//    Request temp;
//    vector<Request>::iterator baseIter = base.begin();
//    while (!file.eof()) {
//        file >> temp.nom;
//        file >> temp.kategori;
//        file >> temp.marka;
//        file >> temp.opt;
//        file >> temp.roz;
//        file >> temp.kolv;
//        base.push_back(temp);
//    }
//    file.close();
//    cout.setf(std::ios::left);
//
//    int action = Greeting();
//    while (action != 5) {
//        Handler(base, action);
//        action = Greeting();
//    }
//    fstream file("base.txt");
//    baseIter = base.begin();
//    vector<Request>::iterator base_end = base.end();
//    while (baseIter != base_end) {
//        temp = *baseIter;
//        file >> temp.nom;
//        file >> temp.kategori;
//        file >> temp.marka;
//        file >> temp.opt;
//        file >> temp.roz;
//        file >> temp.kolv;
//
//        ++baseIter;
//    }
//
//
//
//    cout << baseIter - base.begin() << endl;
//    file.close();
//
//    system("pause");
//    return 0;
//}
//void Handler(vector<Request>& base, int number)
//{
//    setlocale(LC_ALL, "Russian");
//    Request temp;
//    switch (number)
//    {
//    case 1:
//        system("cls");
//        char ch;
//        do {
//            GetAddAVTO(temp);
//            base.push_back(temp);
//            cout << "Продолжить(д/н)? ";
//            cin >> ch;
//            system("cls");
//        } while (ch == 'д');
//
//
//        break;
//    case 2:
//        system("cls");
//        getDeleteAVTO();
//        break;
//    case 3:
//        system("cls");
//        system("pause");
//        break;
//    case 4:
//        system("cls");
//        vector<Request>::iterator baseIter = base.begin();
//        vector<Request>::iterator base_end = base.end();
//        cout << "Вывод всех товаров" << endl;
//        while (baseIter != base_end) {
//            cout << "-------------------------------------------------" << endl;
//            cout << std::setw(20) << "Номер: " << baseIter->nom << endl;
//            cout << std::setw(20) << "Категория: " << baseIter->kategori << endl;
//            cout << std::setw(20) << "Марка: " << baseIter->marka << endl;
//            cout << std::setw(20) << "Цена оптовая: " << baseIter->opt << endl;
//            cout << std::setw(20) << "Цена розничная: " << baseIter->roz << endl;
//            cout << std::setw(20) << "Кол-во на складе: " << baseIter->kolv << endl;
//            ++baseIter;
//        }
//        system("pause");
//        break;
//    }
//}
//int Greeting()
//{
//    setlocale(LC_ALL, "Russian");
//    system("cls");
//    cout << "\tПрограмма учета товаров на складе: " << endl
//        << "-------------------------------------------------" << endl
//        << "1. Добавление товара в список. " << endl
//        << "2. Изменить количество товара на складе --" << endl
//        << "3. Вывод товара по заданной категории. " << endl
//        << "4. Вывод всех товаров. " << endl
//        << "5. Выход. " << endl
//        << "Выберите действие: ";
//
//    int number;
//    cin >> number;
//    return number;
//}
//void GetAddAVTO(Request& request) {
//
//
//    cout << "Добавление товара в список. Шаг 1/6" << endl
//        << "-------------------------------------------------" << endl
//        << "Введите номер товара : ";
//    cin >> request.nom;
//    system("cls");
//    cout << "Добавление заявки в список. Шаг 2/6" << endl
//        << "-------------------------------------------------" << endl
//        << "Введите категорию товара: ";
//    cin >> request.kategori;
//    system("cls");
//    cout << "Добавление заявки в список. Шаг 3/6" << endl
//        << "-------------------------------------------------" << endl
//        << "Введите марку товара: ";
//    cin >> request.marka;
//    system("cls");
//    cout << "Добавление заявки в список. Шаг 4/6" << endl
//        << "-------------------------------------------------" << endl
//        << "Введите оптовую цену: ";
//    cin >> request.opt;
//    cout << "Добавление товара в список. Шаг 5/6" << endl
//        << "-------------------------------------------------" << endl
//        << "Введите розничную цену : ";
//    cin >> request.roz;
//    system("cls");
//    cout << "Добавление товара в список. Шаг 6/6" << endl
//        << "-------------------------------------------------" << endl
//        << "Введите кол-во на складе : ";
//    cin >> request.kolv;
//    system("cls");
//    cout << "Запись успешно добавленна!\n";
//
//}







//#include <iostream>
//#include <string>
//#include <vector>
//#include <windows.h>
//
//struct Stock {
//    std::string name;
//    double price, total;
//    int count, id;
//};
//
//std::vector<Stock> Data;
//Stock Add(); //Добавить элемент
//int SetID(); //Получение нового ID
//void GetAllData(); //Вывод всех элементов
//void GetByID(); //Просмотр по ID
//void GetElem(Stock d); //Вывод одного элемента
//void DeleteByID(); //Удаление элемента
//char* RUS(const char* str); //Руссификация на случай, если name будет записан кириллицей
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int choose = 0;
//    while (choose != 5) {
//        std::cout << "1.Добавить\n2.Удалить\n3.Просмотр\n4.Просмотр по ID\n5.Выход\n";
//        std::cin >> choose;
//        switch (choose)
//        {
//        case 1:
//            Data.push_back(Add());
//            break;
//        case 2:
//            DeleteByID();
//            break;
//        case 3:
//            GetAllData();
//            break;
//        case 4:
//            GetByID();
//            break;
//        }
//    }
//}
//
//int SetID() {
//    return Data.size() == 0 ? 1 : Data[Data.size() - 1].id + 1;
//}
//
//Stock Add() {
//    system("cls");
//    Stock NewData;
//    NewData.id = SetID();
//    std::cin.clear();
//    std::cin.ignore(std::cin.rdbuf()->in_avail());
//    std::cout << "ID нового элемента: " << NewData.id << "\nНазвание: ";
//    std::getline(std::cin, NewData.name);
//    NewData.name = std::string(RUS(NewData.name.c_str()));
//    std::cout << "Цена: ";
//    std::cin >> NewData.price;
//    std::cout << "Количество: ";
//    std::cin >> NewData.count;
//    NewData.total = NewData.count * NewData.price;
//    std::cout << "Итого: " << NewData.total << "\n\n";
//    return NewData;
//}
//
//char* RUS(const char* str)
//{
//    static char buf[BUFSIZ];
//    OemToCharA(str, buf);
//    return buf;
//}
//
//void GetAllData() {
//    system("cls");
//    if (Data.size() != 0)
//        for (auto& d : Data)
//            GetElem(d);
//    else std::cout << "Массив не содержит элементов...\n\n";
//}
//
//void GetElem(Stock d) {
//    std::cout << "ID: " << d.id << "\nНазвание: " << d.name <<
//        "\nЦена: " << d.price << "\nКоличество: " << d.count <<
//        "\nИтого: " << d.total << "\n\n";
//}
//
//void GetByID() {
//    system("cls");
//    int ID;
//    bool b = false; //будет true если элемент найден
//    std::cout << "Введите ID: ";
//    std::cin >> ID;
//    for (auto& d : Data)
//        if (d.id == ID) {
//            GetElem(d);
//            b = true;
//            break;
//        }
//    if (!b) std::cout << "Элемента с таким ID нет...\n\n";
//}
//
//void DeleteByID() {
//    system("cls");
//    int ID;
//    bool b = false; //будет true если элемент найден
//    std::cout << "ID удаляемого элемента: ";
//    std::cin >> ID;
//    for (std::size_t i = 0; i < Data.size(); i++)
//        if (Data[i].id == ID) {
//            Data.erase(Data.begin() + i);
//            b = true;
//            std::cout << "Элемент с ID " << ID << " удалён.\n\n";
//            break;
//        }
//    if (!b) std::cout << "Элемента с таким ID нет...\n\n";
//}







//// Lab_8_12.cpp: определяет точку входа для консольного приложения.
////
//#define _CRT_SECURE_NO_WARNINGS
//#include "stdafx.h"
//#include<iostream>
//#include<fstream>
//#include<string>
//#include<cstdio>
//
//using namespace std;
//
//struct MyProgram                //Разобраться со строками!!!!! Разобрался)))
//{
//    char NameProgram[21];       //Идентификатор программы 
//    char NameUser[21];          //Имя пользователя
//    int ram_uses;               //Требуемое количество оперативной памяти
//    int time_work;              //Время работы
//};
//
//void menu();
//void add_record(int&);
//void change_record(int);
//void delete_record(int&);
//void zad(int);
//void see_record(int);
//int _tmain(int argc, _TCHAR* argv[])
//{
//    setlocale(LC_ALL, "rus");
//    //Готовим файл к записи, очищаем содержимое!
//    ofstream file("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary | ios_base::trunc);
//    file.close();
//    MyProgram program;
//    int exit_pr;
//    int i = 0; //Переменная - счетчик, количество структур
//    do
//    {
//        //system("cls");
//        menu();
//        cin >> exit_pr;
//        switch (exit_pr)
//        {
//        case 1:
//        {
//            cin.get();
//            add_record(i);
//            break;
//        }
//        case 2:
//        {
//            cin.get();
//            change_record(i);
//            break;
//        }
//        case 3:
//        {
//            cin.get();
//            delete_record(i);
//            break;
//        }
//        case 4:
//        {
//            cin.get();
//            zad(i);
//            break;
//        }
//        case 5:
//        {
//            cin.get();
//            see_record(i);
//            break;
//        }
//        default:
//            break;
//        }
//        system("pause");
//    } while (exit_pr != 0);
//    system("pause");
//    return 0;
//}
//
//void menu()
//{
//    cout << "1. Добавить запись == (" << sizeof(MyProgram) << ") =="; //Опять-таки, проверка. Удалять пока не буду!
//    cout << "\n2. Изменить поле записи";
//    cout << "\n3. Удалить выбранную запись";
//    cout << "\n4. Выполнение задания";
//    cout << "\n5. Вывод содержимого";
//    cout << "\n0. exit!" << endl;
//}
//
//void add_record(int& i)
//{
//    MyProgram test;
//    MyProgram mysor; //Проверка!!! Удалить!!! P.S. Удалять не буду, иначе вылезут ошибки))
//    bool exit_pr = true;
//    char new_mysor[21]; //Тест!
//    int number_pos;
//    int number_rec = 0;
//    int number_all = 0;
//    if (i == 0) //Добавление первого элемента
//    {
//        ofstream file("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary | ios_base::trunc);
//        cout << "Начало?)" << endl;
//        cout << "Введите идентификатор:\t\t";       cin.getline(new_mysor, 20); strcpy(test.NameProgram, new_mysor);
//        cout << "\nВведите имя пользователя:\t";  cin.getline(new_mysor, 20); strcpy(test.NameUser, new_mysor);
//        cout << "\nведите потребляемую память:\t";  cin >> test.ram_uses;
//        cout << "\nВведите время работы:\t\t";        cin >> test.time_work;
//        file.seekp(0, ios::beg);                        //ВНИМАНИЕ!!! Побитовое смещение!
//        file.write((char*)&test, sizeof(MyProgram));   //Принудительное приведение к типу char, передача по ссылке!
//        file.close();
//    }
//    else //Добавление последующих элементов
//    {
//        do
//        {
//            cout << "Введите номер позиции (max = " << i + 1 << ", min = " << 1 << ")!" << endl;
//            cin >> number_pos; cin.get(); number_pos--;
//            if ((number_pos > -1) && (number_pos < (i + 1)))
//            {
//                //Копирование информации в промежуточный файл
//                //Получается, что в файл 2 записываетя n + 1 структур,
//                //где n - количество структурв файле in.
//                ifstream f_in("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary);
//                ofstream f_out("D:\\лабораторные C++\\Лабораторная 8\\Файл\\2.txt", ios_base::binary | ios_base::trunc);
//                while (number_all < (i + 1))
//                {
//                    if (number_all == number_pos)
//                    {
//                        cout << "Введите идентификатор:\t\t";       cin.getline(new_mysor, 20); strcpy(test.NameProgram, new_mysor);
//                        cout << "\nВведите имя пользователя:\t";  cin.getline(new_mysor, 20); strcpy(test.NameUser, new_mysor);
//                        cout << "\nведите потребляемую память:\t";  cin >> test.ram_uses;
//                        cout << "\nВведите время работы:\t\t";        cin >> test.time_work;
//                        f_out.seekp(number_all * sizeof(MyProgram), ios::beg);
//                        f_out.write((char*)&test, sizeof(MyProgram));
//                        number_all++;
//                    }
//                    else
//                    {
//                        f_in.seekg(number_rec * sizeof(MyProgram), ios::beg);
//                        f_in.read((char*)&mysor, sizeof(MyProgram));
//                        //Проверка, пока не удаляю!
//                        //cout << "\n| " << mysor.NameProgram << " | " << mysor.NameUser << " | " << mysor.ram_uses << " | " << mysor.time_work << " |" << endl;
//                        f_out.seekp(number_all * sizeof(MyProgram), ios::beg);
//                        f_out.write((char*)&mysor, sizeof(MyProgram));
//                        number_all++;
//                        number_rec++;
//                    }
//                }
//                f_in.close();
//                f_out.close();
//                number_all = 0;
//                //Обмен между файлами, нужен, чтоб потом считать структуры из in.txt
//                //а, так же, чтоб не мучится с нужным файлом (можно было бы обойтись без него)
//                ifstream f_1("D:\\лабораторные C++\\Лабораторная 8\\Файл\\2.txt", ios_base::binary);
//                ofstream f_2("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary | ios_base::trunc);
//                while (number_all < (i + 1))
//                {
//                    f_1.seekg(number_all * sizeof(MyProgram), ios::beg);
//                    f_1.read((char*)&test, sizeof(MyProgram));
//                    //Проверка, удалять не буду!!!
//                    //cout << endl;
//                    //cout << "!!!| " << test.NameProgram << "\t\t|\t" << test.NameUser << "\t|\t" << test.ram_uses << "\t\t|\t" << test.time_work << "\n";
//                    f_2.seekp(number_all * sizeof(MyProgram), ios::beg);
//                    f_2.write((char*)&test, sizeof(MyProgram));
//                    number_all++;
//                }
//                f_1.close();
//                f_2.close();
//                exit_pr = false;
//            }
//        } while (exit_pr);
//    }
//    i++;
//}
//
//void change_record(int i) //Изменение выбранного поля
//{
//    MyProgram test;
//    char new_mysor[21]; //тест!
//    bool exit_pr = true;
//    bool exit_pr_mal = true;
//    int number_all = 0;
//    int number_record;
//    int number_pos;
//    do
//    {
//        cout << "Введите номер записи для изменения (max = " << i << ", min = " << 1 << ")!" << endl;
//        cin >> number_record; number_record--;
//        if ((number_record > -1) && (number_record < i))
//        {
//            ifstream f_in("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary);
//            ofstream f_out("D:\\лабораторные C++\\Лабораторная 8\\Файл\\2.txt", ios_base::binary | ios_base::trunc);
//            while (number_all < i)
//            {
//                if (number_all == number_record)
//                {
//                    do
//                    {
//                        cout << "Введите позицию для изменения (min = " << 1 << ", max = " << 4 << ")!" << endl;
//                        cin >> number_pos; cin.get();
//                        if ((number_pos > 0) && (number_pos < 5))
//                        {
//                            exit_pr_mal = false;
//                        }
//                    } while (exit_pr_mal);
//                    f_in.seekg(number_all * sizeof(MyProgram), ios::beg);
//                    f_in.read((char*)&test, sizeof(MyProgram));
//                    switch (number_pos) //Выбор позиции, которая будет изменена!
//                    {
//                    case 1:
//                    {
//                        cout << "Введите ID:\t"; cin.getline(new_mysor, 20); strcpy(test.NameProgram, new_mysor);
//                        cout << endl;
//                        break;
//                    }
//                    case 2:
//                    {
//                        cout << "Введите User:\t"; cin.getline(new_mysor, 20); strcpy(test.NameUser, new_mysor);
//                        cout << endl;
//                        break;
//                    }
//                    case 3:
//                    {
//                        cout << "Введите U_Ram:\t"; cin >> test.ram_uses;
//                        cout << endl;
//                        break;
//                    }
//                    case 4:
//                    {
//                        cout << "Введите Time:\t"; cin >> test.time_work;
//                        cout << endl;
//                        break;
//                    }
//                    default:
//                        break;
//                    }
//                    f_out.seekp(number_all * sizeof(MyProgram), ios::beg);
//                    f_out.write((char*)&test, sizeof(MyProgram));
//                    number_all++;
//                }
//                else
//                {
//                    f_in.seekg(number_all * sizeof(MyProgram), ios::beg);
//                    f_in.read((char*)&test, sizeof(MyProgram));
//                    f_out.seekp(number_all * sizeof(MyProgram), ios::beg);
//                    f_out.write((char*)&test, sizeof(MyProgram));
//                    number_all++;
//                }
//            }
//            f_in.close();
//            f_out.close();
//            number_all = 0;
//            ifstream f_1("D:\\лабораторные C++\\Лабораторная 8\\Файл\\2.txt", ios_base::binary);
//            ofstream f_2("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary | ios_base::trunc);
//            while (number_all < i)
//            {
//                f_1.seekg(number_all * sizeof(MyProgram), ios::beg);
//                f_1.read((char*)&test, sizeof(MyProgram));
//                f_2.seekp(number_all * sizeof(MyProgram), ios::beg);
//                f_2.write((char*)&test, sizeof(MyProgram));
//                number_all++;
//            }
//            f_1.close();
//            f_2.close();
//            exit_pr = false;
//        }
//    } while (exit_pr);
//}
//
//void delete_record(int& i) //Удаление выбранной записи
//{
//    MyProgram test;
//    bool exit_pr = true;
//    int number_all = 0;
//    int number_new_all = 0;
//    int number_record;
//    do
//    {
//        cout << "Введите номер записи для удаления (max = " << i << ", min = " << 1 << ")!" << endl;
//        cin >> number_record; number_record--;
//        if ((number_record > -1) && (number_record < i))
//        {
//            ifstream f_in("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary);
//            ofstream f_out("D:\\лабораторные C++\\Лабораторная 8\\Файл\\2.txt", ios_base::binary | ios_base::trunc);
//            if (i != 1)
//            {
//                while (number_new_all < (i - 1))
//                {
//                    if (number_all == number_record)
//                    {
//                        f_in.seekg(number_all * sizeof(MyProgram));
//                        f_in.read((char*)&test, sizeof(MyProgram));
//                        number_all++;
//                    }
//                    else
//                    {
//                        f_in.seekg(number_all * sizeof(MyProgram), ios::beg);
//                        f_in.read((char*)&test, sizeof(MyProgram));
//                        f_out.seekp(number_new_all * sizeof(MyProgram), ios::beg);
//                        f_out.write((char*)&test, sizeof(MyProgram));
//                        number_all++;
//                        number_new_all++;
//                    }
//                }
//            }
//            f_in.close();
//            f_out.close();
//            number_all = 0;
//            ifstream f_1("D:\\лабораторные C++\\Лабораторная 8\\Файл\\2.txt", ios_base::binary);
//            ofstream f_2("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary | ios_base::trunc);
//            while (number_all < (i - 1))
//            {
//                f_1.seekg(number_all * sizeof(MyProgram), ios::beg);
//                f_1.read((char*)&test, sizeof(MyProgram));
//                f_2.seekp(number_all * sizeof(MyProgram), ios::beg);
//                f_2.write((char*)&test, sizeof(MyProgram));
//                number_all++;
//            }
//            f_1.close();
//            f_2.close();
//            exit_pr = false;
//        }
//    } while (exit_pr);
//    i--;
//}
//
//void zad(int i) //Само задание
//{
//    MyProgram test;
//    MyProgram mysor;
//    bool t_f = false;
//    int number_all = 0;
//    int index = 0;
//    int number_ram;
//    char zad[21];
//    char obrez[21];
//    int* program = new int[i];
//    for (int j = 0; j < i; j++)
//    {
//        program[j] = -1;
//    }
//    cout << "Введите имя пользователя (User): "; cin.getline(zad, 20); strcpy(mysor.NameUser, zad);
//    ifstream file("D:\\лабораторные C++\\Лабораторная 8\\Файл\\2.txt", ios_base::binary);
//    file.seekg(number_all * sizeof(MyProgram), ios::beg);
//    file.read((char*)&test, sizeof(MyProgram));
//    number_ram = test.ram_uses;
//    program[index] = number_all;
//    number_all++;
//    index++;
//    if (i == 1)
//    {
//        cout << "\nСтолько Ram может есть только " << test.NameProgram << ", сделанная " << test.NameUser << "'ом" << endl;
//    }
//    else
//    {
//        while (number_all < i)
//        {
//            file.seekg(number_all * sizeof(MyProgram), ios::beg);
//            file.read((char*)&test, sizeof(MyProgram));
//            if ((test.ram_uses >= number_ram) && (strcoll(test.NameUser, mysor.NameUser) == 0))
//            {
//                if (test.ram_uses == number_ram)
//                {
//                    program[index] = number_all;
//                    index++;
//                }
//                else
//                {
//                    for (int j = 0; j < i; j++)
//                    {
//                        program[j] = -1;
//                    }
//                    index = 0;
//                    program[index] = number_all;
//                    number_ram = test.ram_uses;
//                    index++;
//                }
//                t_f = true;
//            }
//            number_all++;
//        }
//        file.seekg(0, ios::beg);
//        file.read((char*)&test, sizeof(MyProgram));
//        //if ((t_f == false) && (strcoll(test.NameUser, mysor.NameUser) == 0));
//        //{
//        //  cout << "\n!!!Столько Ram может есть только " << test.NameProgram << ", сделанная " << test.NameUser << endl;
//        //}
//        for (int j = 0; j < index; j++)
//        {
//            file.seekg(program[j] * sizeof(MyProgram), ios::beg);
//            file.read((char*)&test, sizeof(MyProgram));
//            if (strcoll(test.NameUser, mysor.NameUser) == 0)
//            {
//                cout << "\nСтолько Ram может есть только " << test.NameProgram << ", сделанная " << test.NameUser << "'ом" << endl;
//            }
//        }
//        file.close();
//    }
//}
//
//void see_record(int i) //Вывод результата
//{
//    MyProgram test;
//    ifstream file("D:\\лабораторные C++\\Лабораторная 8\\Файл\\in.txt", ios_base::binary);
//    int number_pos = 0;
//    cout << " ID \t\t|\t User \t|\t Uses_Ram \t|\t Time_Work";
//    cout << endl << endl;
//    while (number_pos < i)
//    {
//        file.seekg(number_pos * sizeof(MyProgram), ios::beg);
//        file.read((char*)&test, sizeof(MyProgram));
//        if (strlen(test.NameProgram) < 6)
//        {
//            if (strlen(test.NameUser) < 7)
//            {
//                cout << right << "| " << test.NameProgram << "\t\t|" << test.NameUser << "\t\t|\t" << test.ram_uses << "\t\t|\t" << test.time_work << "\n";
//            }
//            else
//            {
//                cout << right << "| " << test.NameProgram << "\t\t|" << test.NameUser << "\t|\t" << test.ram_uses << "\t\t|\t" << test.time_work << "\n";
//            }
//        }
//        else
//        {
//            if (strlen(test.NameUser) < 7)
//            {
//                cout << right << "| " << test.NameProgram << "\t|" << test.NameUser << "\t\t|\t" << test.ram_uses << "\t\t|\t" << test.time_work << "\n";
//            }
//            else
//            {
//                cout << right << "| " << test.NameProgram << "\t|" << test.NameUser << "\t|\t" << test.ram_uses << "\t\t|\t" << test.time_work << "\n";
//            }
//        }
//        number_pos++;
//    }
//    cout << endl;
//    file.close();
//}


//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//struct Storage { // Структура склада (Максимум может содержать 100 товаров)
//    string location = "Storage"; // Название склада
//    string namegood[100]; // Название товаров
//    string articul[100]; // Артикулы товаров
//    int quantity = 0; // Общее количество товаров на складе
//    int price[100]; // Цена товаров
//    int summ = 0; // Сумма товаров(Цены)
//};
//
//int Menu() { // Функция меню
//    int choice = 0; // Выбор
//    cout << "1) Добавить товар" << endl;
//    cout << "2) Удалить товар" << endl;
//    cout << "3) Изменить товар" << endl;
//    cout << "4) Просмотреть товары" << endl;
//    cout << "5) Записать товары в файл base.txt" << endl;
//    cout << "6) Загрузить товары с файла base.txt" << endl;
//    cin >> choice;
//    return choice; // Вернуть результат выбора
//}
//
//void inizAll(Storage& Stor1) { // Инициализировать весь склад
//    for (int i = 0; i < 100; i++) {
//        Stor1.namegood[i] = "No";
//        Stor1.articul[i] = "No";
//        Stor1.price[i] = 0;
//    }
//}
//
//void addGood(Storage& Stor1) {
//    for (int i = 0; i < 100; i++) {
//        if (Stor1.namegood[i] == "No") {
//            cout << "Введите название товара: " << endl;
//            string good;
//            cin >> good;
//            cout << "Введите цену товара: " << endl;
//            int price = 0;
//            cin >> price;
//            cout << "Введите артикул товара: " << endl;
//            string articul;
//            cin >> articul;
//            Stor1.namegood[i] = good;
//            Stor1.price[i] = price;
//            Stor1.articul[i] = articul;
//            cout << "Успешно добавлено" << endl;
//            break;
//        }
//    }
//}
//
//void deleteGood(Storage& Stor1) {
//    int id = 0;
//    cout << "Введите ID товара который желаете удалить" << endl;
//    cin >> id;
//    if (Stor1.namegood[id] == "No") {
//        cout << "Товара с таким ID не существует" << endl;
//    }
//    else {
//        Stor1.namegood[id] = "No";
//        cout << "Товар успешно удален" << endl;
//    }
//}
//
//void updateGood(Storage& Stor1) {
//    int id = 0;
//    cout << "Введите ID товара который желаете изменить" << endl;
//    cin >> id;
//    if (Stor1.namegood[id] == "No") {
//        cout << "Товара с таким ID не существует" << endl;
//    }
//    else {
//        cout << "Введите название товара: " << endl;
//        string good;
//        cin >> good;
//        cout << "Введите цену товара: " << endl;
//        int price = 0;
//        cin >> price;
//        cout << "Введите артикул товара: " << endl;
//        string articul;
//        cin >> articul;
//        Stor1.namegood[id] = good;
//        Stor1.price[id] = price;
//        Stor1.articul[id] = articul;
//        cout << "Товар успешно изменен" << endl;
//    }
//}
//
//void displayGoods(Storage& Stor1) {
//    for (int i = 0; i < 100; i++) {
//        if (Stor1.namegood[i] != "No") {
//            cout << "ID: " << i << ", Name: " << Stor1.namegood[i] << ", Price: " << Stor1.price[i] << ", Articul: " << Stor1.articul[i] << endl;
//        }
//    }
//}
//
//void saveGoods(Storage& Stor1) {
//    ofstream f("base.txt");
//    for (int i = 0; i < 100; i++) {
//        f << Stor1.namegood[i] << endl;
//        f << Stor1.price[i] << endl;
//        f << Stor1.articul[i] << endl;
//    }
//    f.close();
//    cout << "Загрузка успешно заверешена(файл base.txt)" << endl;
//}
//
//void loadGoods(Storage& Stor1) {
//    ifstream f("base.txt", ios::app);
//    string buff;
//    int i = 0;
//    while (true) {
//        for (int j = 0; j < 3; j++) {
//            getline(f, buff);
//            if (j == 0) {
//                Stor1.namegood[i] = buff;
//            }
//            else if (j == 1) {
//                Stor1.price[i] = stoi(buff);
//            }
//            else if (j == 2) {
//                Stor1.articul[i] = buff;
//            }
//        }
//        i++;
//        if (i == 100) { // Тест
//            break;
//        }
//    }
//}
//
//void summGoods(Storage& Stor1) { // Пересчитать сумму
//    int s = 0; // Сумма цен товаров, ее мы и вернем
//    for (int i = 0; i < 100; i++) {
//        s += Stor1.price[i];
//    }
//    Stor1.summ = s;
//}
//
//void quantityGoods(Storage& Stor1) { // Находим общее количество товаров на складе
//    int q = 0;
//    for (int i = 0; i < 100; i++) {
//        if (Stor1.namegood[i] != "No") {
//            q += 1;
//        }
//    }
//    Stor1.quantity = q;
//}
//
//int main() {
//
//    setlocale(LC_ALL, "Russian");
//
//    Storage Stor1; // Объявляем склад
//    inizAll(Stor1); // Инициализируем склад
//    cout << "Введите название склада: " << endl;
//    cin >> Stor1.location;
//
//    while (true) {
//        /*Идет пересчет товаров и их суммы*/
//        summGoods(Stor1);
//        quantityGoods(Stor1);
//        /*Конец пересчета*/
//        cout << "Название склада: " << Stor1.location << endl;
//        cout << "Общее количество товаров: " << Stor1.quantity << endl;
//        cout << "Сумма цен товаров: " << Stor1.summ << endl;
//        int ch = Menu();
//
//        if (ch == 1) {
//            addGood(Stor1); // Добавить товар
//        }
//        else if (ch == 2) {
//            deleteGood(Stor1); // Удалить товар
//        }
//        else if (ch == 3) {
//            updateGood(Stor1); // Изменить товар
//        }
//        else if (ch == 4) {
//            displayGoods(Stor1); // Вывести все товары на экран
//        }
//        else if (ch == 5) {
//            saveGoods(Stor1); // Сохранение товаров в файл
//        }
//        else if (ch == 6) {
//            loadGoods(Stor1); // Загрузка товаров из файла
//        }
//    }
//    system("pause");
//    return 0;
//}



#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

struct SKLAD {
	char nazvan[40];
	int col;
	int cena;
	int suma;
	char artik[100];
	char mesto[100];
};

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream skl;
	skl.open("D://sklad.txt", ios::app);
	int N;
	cout << "Введите kol-vo: " << endl;
	cin >> N;
	SKLAD* sclad = new SKLAD[N];
	for (int i = 0; i < N; i++)
	{
		if (!skl.is_open())
		{
			cout << "Ошибка открытие файла!" << endl;
		}
		else
		{
			cout << "название: " << endl;
			cin >> sclad[i].nazvan;
			skl << sclad[i].nazvan;
			skl << "\n";
			cout << "количество: " << endl;
			cin >> sclad[i].col;
			skl << sclad[i].col;
			skl << "\n";
			cout << "цена: " << endl;
			cin >> sclad[i].cena;
			skl << sclad[i].cena;
			skl << "\n";
			cout << "артикул: " << endl;
			cin >> sclad[i].artik;
			skl << sclad[i].artik;
			skl << "\n";
			cout << "место роз: " << endl;
			cin >> sclad[i].mesto;
			skl << sclad[i].mesto;
			skl << "\n";
			cout << endl;
		}
	}
	skl.close();

	ifstream zap;
	zap.open("D://sklad.txt");
	/*float s = 0;*/
	for (int i = 0; i < N; i++)
	{
		if (sclad[i].cena > 0)
		{
			cout << sclad[i].nazvan << endl;
			cout << "Общая сумма: " << sclad[i].cena * sclad[i].col << "$" << endl;
			cout << endl;
		}
		/*s += sclad[i].cena;*/
	}
	//cout << s;
	zap.close();
	delete[]sclad;
	return 0;
}
