
// урок 1. задание 1.

/*
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
    for (int i = 0; i <= 79; i++) {
        cout << '=';
    }
    cout << endl;
    cout << "|\tX\t|\tY\t|    X AND Y\t|     X OR Y\t|\tx      |";
    cout << endl;
    for (int i = 0; i <= 79; i++) {
        cout << '=';
    }
    cout << endl;
    cout << "|\t0\t|\t0\t|\t0\t|\t0\t|\t1      |" << endl;
    cout << "|\t0\t|\t1\t|\t0\t|\t1\t|\t1      |" << endl;
    cout << "|\t1\t|\t0\t|\t0\t|\t1\t|\t0      |" << endl;
    cout << "|\t1\t|\t1\t|\t1\t|\t1\t|\t0      |" << endl;
    for (int i = 0; i <= 79; i++) {
        cout << '=';
    }
    cout << endl << endl;
}
*/

//урок 1. задание 2.


/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
	int sm = 0;
	int dm = 0;

	cout << "Пожалуйста,введите диагональ своего ТВ" << endl;
	cin >> dm;
	sm = dm * 2.54;
	system("cls");
		
	cout << "Входные данные:"<<dm<<" дюймов(-а)\n";
	for (int i = 0; i < 44; i++) {
		cout << "-";
	}
    cout << "\n";
	cout << "Выходные данные:" << sm << " сантиметров(-а)";
	cout << endl << endl;
}
*/


//урок 1. задание 3.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
	int phone = 0;
	int powerbank = 0;

	cout <<"Пожалуйста введите ёмкость своего аккумулятора: ";
    cin >> phone;
    powerbank = phone * 3;
    system("cls");
    cout << "Входные данные:" << phone << " мАч.\n";
    for (int i = 0; i < 44; i++) {
        cout << "-";
    }
    cout << endl;
    cout << "Выходные данные:" << powerbank << "мАч.";
    cout << endl << endl;
}
*/

//Урок 1. задание 4.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double eat = 0;
    double month = 0;
    cout << "Сколько ваш хомечок потребляет корма в день(в граммах): ";
    cin >> eat;
    month = (eat*30)/ 1000;
    system("cls");

    cout << "Обьём на 1 день: " << eat << "\n";
    for (int i = 0; i < 44; i++) {
        cout << "-";
    }
    cout << endl;
    cout << "Обьём на месяц: " << month;
    cout << endl << endl;
}
*/

//Урок 2. Задание 1.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int numb = 0;
    cin >> numb;
    numb = numb % 2;
    if (numb == 1) {
        cout << "Число нечётное";
    }
    else {
        cout << "Число чётное";
    }
}
*/

//Урок 2. Задание 2.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a = 0;
    do {
        cout << "Введите число";
        cin >> a;
    } while (a >= 100 || a <= 0);
        int count = a < 10 ? 1 : 2;
        int sum = a < 10 ? (a % 10) : (a % 10 + a / 10);

        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
}
*/

//Урок 2. Задание 3.

/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int chooser = 0;
    int sm = 0;
    int dm = 0;

    cout << "с чем вы хотите работать ?" << endl
        << "1.Дюймы в сантиметры" << endl
        << "2.Сантиметры в дюймы" << endl;
    cin>>chooser;

    switch (chooser)
    {
    case 1:
        cout << "Введите скольлко дюймов нужно преобразовать: ";
        cin >> dm;
        sm = dm * 2.54;
        cout << sm;
        break;
    case 2:
        cout << "Введите скольлко сантиметров нужно преобразовать: ";
        cin >> sm;
        dm = sm / 2.54;
        cout << dm;
        break;
    default:
        cout << "У вас только 2 варианта";
        break;
    }
}
*/

//Урок 2. Задание 4.

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double a = 0;
    double b = 0;
    char ds = 0;
    double result = 0;

    cout << "Введите 2 числа и арифметическое действие, которое вы хотите применить: ";
    cin >> a;
    cin >> b;
    cin >> ds;
    switch (ds) {
    case '+':
        result=a + b;
        cout << result;
        break;
    case '-':
        result = a - b;
        cout << result;
        break;
    case'*':
        result = a * b;
        cout << result;
        break;
    case'/':
        result = a / b;
        cout << result;
        break;
    case'<':
        if (a < b)
            cout << b;
        if (a > b)
            cout << a;
        break;
    case'>':
        if (a > b)
            cout << b;
        if (a < b)
            cout << a;
    }
}