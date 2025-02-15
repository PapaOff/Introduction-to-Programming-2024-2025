Условие на задачата: Snake and Ladders  		
Описание:  
Създайте програма, която симулира играта "Snake and Ladders". Играта се играе върху игрална дъска, чийто размер е динамичен и се определя от потребителя. В дъската има стълби и змии, които ще бъдат предварително зададени от потребителя преди началото на играта. Програмата поддържа игра на няколко играчи (определен брой от потребителя), като всеки играч има свой символ, който се отпечатва на дъската.  

Изисквания:  
1. Игрална дъска:  
	   - Размерът на дъската (например 5x5, 10x10 или 15x15) се въвежда от потребителя.  
	   - Дъската е представена като двумерен масив.  
	   - Всяка клетка на дъската съдържа:  
	   - L (ladder) за стълба, която пренася играча напред.  
	   - S (snake) за змия, която връща играча назад.  
	   - Точка за нормално поле.  
2. Играчите:  
	   - Броят на играчите (например 2, 3, или 4) се задава от потребителя.  
	   - Всеки играч има уникален символ (например X, O, @, #).  
3. Движение:  
	   - Предоставена е функцията rollDice(), която връща случайно число от 1 до 6.  
	   - Играчът се придвижва с толкова позиции, колкото е стойността на зара.  
	   - Ако попадне на стълба, се премества напред . Ако попадне на змия, се връща назад. Когато играч стъпи на началната позиция на стълба или змия, той трябва да бъде преместен на съответната крайна точка.  
4. Позиции на играчите:  
	   - Всеки играч започва от началната клетка с координати [0][0].  
	   - Текущата позиция на играчите се отбелязва с техния уникален символ. Ако вече има играч на дадена позиция, текущият играч не може да стъпи там и ще трябва да хвърля зара пак (изключение прави началната позиция, понеже всички играчи започват от там).  
5. Край на играта:  
	   - Играта приключва, когато някой играч достигне с точност последната клетка на дъската (координати [N][N]). Тоест ако сте на 3 позиции от последната и хвърлите 4, играта продължава, тъй като ви трябват точно 3 точки. Ако сте на предпоследната клетка, единствено ако хвърлите 1 печелите играта.  
6. Визуализация:  
	   - След всяко движение, програмата трябва да отпечата състоянието на дъската, показвайки позициите на играчите, змиите, стълбите и празните клетки.  


## Примерен вход:

```
Въведете размер на дъската (NxN): 5  
Въведете брой играчи: 2 
Въведете символите на играчите: X O  
Въведете броя на стълбите: 2  
Въведете начална и крайна клетка за стълба 1: 3 12  
Въведете начална и крайна клетка за стълба 2: 8 17  
Въведете броя на змиите: 1  
Въведете начална и крайна клетка за змия 1: 14 5  
```

## Текуща дъска:  

```
ХО . L . .  
. . L . .  
. . . S .  
. . . . .  
. . . . .  
```

Играч X хвърли зара: 6    

```
Текуща дъска:  
. О . L .  
. Х L . .  
. . . S .  
. . . . .  
. . . . .  
```

## Бонус

В момента номерата на клетките са следните за 5х5:  
0 1 2 3 4  
5 6 7 8 9  
10 11 12 13 14  
15 16 17 18 19 20  
21 22 23 24 25  

Ще получите бонус, ако направите клетките да съответстват на оригиналната подредба в играта, а именно:  
21 22 23 24 25  
20 19 18 17 16 15  
10 11 12 13 14  
9 8 7 6 5  
0 1 2 3 4  


## Помощна функция за хвърляне на зар:

```
#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));

    for(int i = 0; i < 10; i++){
        std::cout << rollDice() << "\n";
    }

    return 0;
}
```
