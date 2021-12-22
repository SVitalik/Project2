#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Storage { 
    string location = "Storage"; // Название склада
    string namegood[100]; // Название товаров
    string articul[100]; // Артикулы товаров
    int quantity = 0; // Общее количество товаров на складе
    int price[100]; // Цена товаров
    int cena[100];
    int summ = 0; // Сумма товаров(Цены)
};

int Menu() { // Функция меню
    int choice = 0; // Выбор
    cout << "1) Добавить товар" << endl;
    cout << "2) Удалить товар" << endl;
    cout << "3) Изменить товар" << endl;
    cout << "4) Просмотреть товары" << endl;
    cout << "5) Загрузить данные в файл " << endl;
    cout << "6) Выгрузить данные с файла" << endl;
    cin >> choice;
    return choice; // Вернуть результат выбора
}

void inizAll(Storage& Stor1) { // Инициализировать весь склад
    for (int i = 0; i < 100; i++) {
        Stor1.namegood[i] = "No";
        Stor1.articul[i] = "No";
        Stor1.price[i] = 0;
        Stor1.cena[i] = 0;
    }
}

void addGood(Storage& Stor1) {
    for (int i = 0; i < 100; i++) {
        if (Stor1.namegood[i] == "No") {
            cout << "Введите название товара: " << endl;
            string good;
            cin >> good;
            cout << "Введите цену товара: " << endl;
            int price = 0;
            cin >> price;
            /*cout << "Введите кол-во товара: " << endl;
            int cen = 0;
            cin >> cen;*/
            cout << "Введите артикул товара: " << endl;
            string articul;
            cin >> articul;
            Stor1.namegood[i] = good;
            Stor1.price[i] = price;
            /*Stor1.cena[i] = cen;*/
            Stor1.articul[i] = articul;
            cout << "Успешно добавлено" << endl;
            break;
        }
    }
}

void deleteGood(Storage& Stor1) {
    int id = 0;
    cout << "Введите ID товара который желаете удалить" << endl;
    cin >> id;
    if (Stor1.namegood[id] == "No") {
        cout << "Товара с таким ID не существует" << endl;
    }
    else {
        Stor1.namegood[id] = "No";
        cout << "Товар успешно удален" << endl;
    }
}

void updateGood(Storage& Stor1) {
    int id = 0;
    cout << "Введите ID товара который желаете изменить" << endl;
    cin >> id;
    if (Stor1.namegood[id] == "No") {
        cout << "Товара с таким ID не существует" << endl;
    }
    else {
        cout << "Введите название товара: " << endl;
        string good;
        cin >> good;
        cout << "Введите цену товара: " << endl;
        int price = 0;
        cin >> price;
        /*cout << "Введите кол-во товара: " << endl;
        int cen = 0;
        cin >> cen;*/
        cout << "Введите артикул товара: " << endl;
        string articul;
        cin >> articul;
        Stor1.namegood[id] = good;
        Stor1.price[id] = price;
        /*Stor1.cena[id] = cen;*/
        Stor1.articul[id] = articul;
        cout << "Товар успешно изменен" << endl;
    }
}

void displayGoods(Storage& Stor1) {
    for (int i = 0; i < 100; i++) {
        if (Stor1.namegood[i] != "No") {
            cout << "ID: " << i << ", Name: " << Stor1.namegood[i] << ", Price: " << Stor1.price[i] <</*", Cena: " <<Stor1.cena[i] <<*/", Articul: " << Stor1.articul[i] << endl;
        }
    }
}

void saveGoods(Storage& Stor1) {
    ofstream f("D://base.txt");
    for (int i = 0; i < 100; i++) {
        f << Stor1.namegood[i] << endl;
        f << Stor1.price[i] << endl;
        /*f << Stor1.cena[i] << endl;*/
        f << Stor1.articul[i] << endl;
    }
    f.close();
    cout << "Загрузка успешно заверешена" << endl;
}

void loadGoods(Storage& Stor1) {
    ifstream f("D://base.txt", ios::app);
    string buff;
    int i = 0;
    while (true) {
        for (int j = 0; j < 3; j++) {
            getline(f, buff);
            if (j == 0) {
                Stor1.namegood[i] = buff;
            }
            else if (j == 1) {
                Stor1.price[i] = stoi(buff);
            }
            /*else if (j == 2) {
                Stor1.cena[i] = stoi(buff);
            }*/
            else if (j == 2) {
                Stor1.articul[i] = buff;
            }
        }
        i++;
        if (i == 100) { // Тест
            break;
        }
    }
}

void summGoods(Storage& Stor1) { // Пересчитать сумму
    int s = 0; // Сумма цен товаров, ее мы и вернем
    for (int i = 0; i < 100; i++) {
        s += Stor1.price[i] /** Stor1.cena[i]*/;
    }
    Stor1.summ = s;
}

void quantityGoods(Storage& Stor1) { // Находим общее количество товаров на складе
    int q = 0;
    for (int i = 0; i < 100; i++) {
        if (Stor1.namegood[i] != "No") {
            q += 1;
        }
    }
    Stor1.quantity = q;
}

int main() {

    setlocale(LC_ALL, "Russian");

    Storage Stor1; // Объявляем склад
    inizAll(Stor1); // Инициализируем склад
    cout << "Введите название склада: " << endl;
    cin >> Stor1.location;

    while (true) {
        /*Идет пересчет товаров и их суммы*/
        summGoods(Stor1);
        quantityGoods(Stor1);
        /*Конец пересчета*/
        cout << "Название склада: " << Stor1.location << endl;
        cout << "Общее количество товаров: " << Stor1.quantity << endl;
        cout << "Сумма цен товаров: " << Stor1.summ << endl;
        int ch = Menu();

        if (ch == 1) {
            addGood(Stor1); // Добавить товар
        }
        else if (ch == 2) {
            deleteGood(Stor1); // Удалить товар
        }
        else if (ch == 3) {
            updateGood(Stor1); // Изменить товар
        }
        else if (ch == 4) {
            displayGoods(Stor1); // Вывести все товары на экран
        }
        else if (ch == 5) {
            saveGoods(Stor1); // Сохранение товаров в файл
        }
        else if (ch == 6) {
            loadGoods(Stor1); // Загрузка товаров из файла
        }
    }
    system("pause");
    return 0;
}