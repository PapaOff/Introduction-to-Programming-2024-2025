## Зад 1.
Да се напише функция, която приема като аргументи указател към масив и размера на масива и го обръща.

```cpp
int a[] {1, 2, 3, 4, 5};
reverse(a, 5);
printArray(a, 5);
```
Изход:
```
5 4 3 2 1
```
## Зад 2.
Напишете функция, която по подаден масив, размер и елемент от същия тип като елементите на масива, намира първото му срещане в масива и връща индекса му.  

Ако елементът не е намерен да върне -1.

```cpp
int arr1[] {0, 0, 0, 1, 0};
int arr2[] {1, 2, 3, 4, 5};
cout << findIndex(arr1, 5, 1) << endl; 
cout << findIndex(arr2, 5, 0) << endl; 
```
Изход:
```
3
-1
```

## Зад 3.
Напишете функция, която по подаден масив и размер, отпечатва на екрана колко букви и цифри има.

Вход:
```
H3110 W0r1d  
```
Изход:
```
Letters: 4
Digits: 6
```

## Зад 4.
Напишете функция, която приема два масива (и размерите им), един указател и една променлива за размер.

Пренасочете указателя да сочи към масива, чиято сума на елементите е по-малка, както и да промени стойността на последния аргумент, за да съответства с размера на минималния масив.

```cpp
int arr1[]{ 1, 2, 3, 4, 5 };
int arr2[]{ 9, 9, 9 };
int* ptr;
int size;

findMinAndPointToIt(arr1, 5, arr2, 3, ptr, size);

printArray(ptr, size)
```
Изход:
```
9 9 9
```

## Зад.5  
Да се напише функция, която при подадени цели числа k, n (1 <= k, n <= 100) и масив от цели числа arr, както и размера на масива, определя дали в arr има точно k на брой числа,които са точни степени на n
```cpp
int arr1[] {3, 2, 5, 8, 16};
cout << boolalpha << check(arr1, 5, 3, 2) << endl;
cout << boolalpha << check(arr1, 5, 1, 3) << endl;
cout << boolalpha << check(arr1, 5, 2, 3) << endl;
```
Изход:
```
true
true
false
```

## Зад.6  
Да се напише фунцкия add, която приема 3 матрици с еднакъв размер и записва сбора на първата и втората в третата.
```
1 1 1      0 -1 -1     1 0 0
1 1 1  +  -1  0 -1  =  0 1 0
1 1 1     -1 -1  0     0 0 1
```

## Зад.7  
Да се напише функция, която при подадена матрица извежда най-малкия елемент в реда и най-големия елемент в колоната.

```
0 2 3
4 5 10
8 2 -1
```
Изход:
```
Min at Row #1 -> 0
Min at Row #2 -> 4
Min at Row #3 -> -1

Max at Col #1 -> 8
Max at Col #2 -> 5
Max at Col #3 -> 10
```


## Бонус задачи
## Зад. 8
Напишете функция, която по подаден масив и елемент от същия тип като елементите на масива намира първото му срещане в масива и връща указател към него. Ако елементът не е намерен да върне null pointer.

## Зад. 9
Имате речен док (пристанище), на който са стоварени N [10..109] брой пратки, не непременно с равни тегла. Няма пратка с маса, по-голяма от максималния полезен обем на корабчето M [100..500] тона. Корабчето се товари като се спазва редът на пристигане на пратките. Да се състави програма (C++), чрез която се въвеждат предварително теглата на N пратки. Тези тегла са стойности на последователни елементи от едномерен масив. Програмата да извежда на кой пореден курс с колко тона е натоварен корабчето - какви са сумите от последователните елементи. Пример: M=160, N=15; 31,12,17,33,45,34,17,19,31,42,5,9,23,16,10 Изход: 138,157

## Зад. 10
Имате две редици съдържащи естествени числа. Стойностите на 1-вата редица са въведени предварително, а във втората се въвеждат от клавиатурата. Да се състави програма (C++), чрез която се проверява дали всички числа от първата редица са числа и от втората редица, т.е. дали първата и вторта редица съдържат еднакви елементи. Пример: 1-ва редица: 11,72,13,14,15 2-ра редица: 72, 15, 11, 13, 14, 33. Изход: числата от 1-та редица са числа и от втората редица.

## Зад. 11
Да се напише булева функция bool duplicates (long *ponters[]), която получава като параметър масив pointers от указатели към целочислени променливи. Функцията да проверява дали поне две от съответните променливи имат еднакви стойности.

## Зад. 12
Напишете функция, която приема два масива и един указател, който пренасочете да сочи масива, чиято сума на елементите е минимална.

## Зад. 13
Напишете функция fillMatrix, която приема матрица и размер в интервала [1, 100]. Функцията трябва да запълва матрицата по следня начин:

Над вторичния диагонал стоят само 0-ли;
На вторичния диагонал стоят само 1-ци;
Под вторичния диагонал стоят само 2-ки; Подайте матрицата чрез поинтъри и използвайте аритметика на указатели


## Зад. 14
Да се напише функция getFirstUniqueChar(), която приема символен низ и връща първия елемент, който не се повтаря. Ако не съществува, функцията извежда 0. Примерен вход и изход: getFirstUniqueChar("pepsii") -> 'е' getFirstUniqueChar("Pepsii") -> 'P'
