
#include <Windows.h>
#include <iostream>
#include "time.h"

using namespace std;


void ZADANIE_1() {

    srand(time(NULL));

    const size_t a = 10, b = 5;
    int array[a];
    int array1[b];
    int array2[b];
    const size_t  c = 20, d = 10;

    cout << endl;
    cout << " основной массив: ";
    for (int i = 0; i < a; i++) {
        array[i] = b + rand() % (c - b);
        cout << array[i] << " ";
    }
    cout << endl << endl;
    cout << " первый массив (первые 5 чисел основного массива): ";
    for (int i = 0; i < b; i++) {
        array1[i] = array[i];
        array2[i] = array[i + 5];
        cout << array1[i] << " ";

    }
    cout << endl << endl;
    cout << " второй массив (последние 5 чисел основного массива): ";
    for (int i = 0; i < b; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

}
void ZADANIE_2() {

    srand(time(NULL));

    const size_t a = 10;
    const size_t b = 10, c = 20;

    int array1[a];
    int array2[a];
    int array3[a];

    cout << endl;
    cout << " первый массив: ";
    for (int i = 0; i < a; i++) {
        array1[i] = b + rand() % (c - b);
        cout << array1[i] << " ";
    }

    cout << endl;
    cout << " второй массив: ";
    for (int i = 0; i < a; i++) {
        array2[i] = b + rand() % (c - b);
        cout << array2[i] << " ";
    }

    cout << endl;
    cout << " третий массив (сумма первых двух массивов): ";
    for (int i = 0; i < a; i++) {
        array3[i] = array1[i] + array2[i];
        cout << array3[i] << " ";
    }
    cout << endl;

}
void ZADANIE_3() {

    const size_t week = 7;
    string dey[7]{ "понедельник", "вторник", "среду", "четверг", "пятницу", "субботу", "воскресенье" };
    string deys[7]{ "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье" };
    int array[week];
    int downs, enter;
    

    cout << endl;
    for (int i = 0; i < week; i++) {
        cout << " Введите рассход за " << dey[i] << " ";
        cin >> downs;
        array[i] = downs;

    }
    cout << endl;
    cout << " Ваши рассходы в течении недели за каждый день: ";
    for (int i = 0; i < week; i++) {
        cout << array[i] << " ";
    }
    cout << endl << endl;

    do {
        cout << " чтобы вывести среднюю потраченную за неделю сумму - нажмите 1 \n";
        cout << " чтобы вывести общую потраченную за неделю сумму - нажмите 2 \n";
        cout << " Вывести количество дней, в которые потраченная сумма составила более 100 долларов - нажмитие 3 \n";
        cout << endl;
        cin >> enter;

        switch (enter)
        {
        case 1: {
            float summa = 0;

            cout << endl;
            cout << " Средняя потраченная за неделю сумма составила: ";
            for (int i = 0; i < week; i++) {
                summa += array[i];
            }

            cout << summa / week << " $" << endl << endl;
            break;
        }
        case 2: {
            float summa = 0;

            cout << endl;
            cout << " Общуя потраченная за неделю сумма составила: ";
            for (int i = 0; i < week; i++) {
                summa += array[i];
            }
            cout << summa << " $" << endl << endl;
           
            break;
        }
        case 3: {
            int count = 0;
            
            cout << endl;
            cout << " Дни, в которые потраченная сумма составила более или 100 долларов: ";

            for (int i = 0; i < week; i++) {
              
                if (array[i] >= 100) {
                    count++;
                   cout << "| " << deys[i] << " |";
       
            }
           
            cout << endl;
            cout << " Колличество дней: " << count << endl;
            cout << endl;
           
            break;
        }
        default:
            cout << " Введены неверные значения. Попробуйте ещё раз";
            break;
        }


    } while (enter < 3);
    {

    }
   
}
    

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ЗАДАНИЕ 1.
    /*
     ZADANIE_1();
    */

    // ЗАДАНИЕ 2.
    /*
    ZADANIE_2();
    */

    // ЗАДАНИЕ 3
    /*
     ZADANIE_3();
    */
  
    
   

}

