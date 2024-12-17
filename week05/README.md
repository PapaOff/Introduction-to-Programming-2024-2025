# Зад. 1

Да се напише програма, която чертае квадрат от '\*' със размер на страната въведен от клавиатурата. Нека е изпълнен само под главния диагонал.

```
* * * * * * * *
*             *
* *           *
* * *         *
* * * *       *
* * * * *     *
* * * * * *   *
* * * * * * * *
```

# Зад. 2

Генерирайте Триъгълника на Паскал с произволен размер, въведен от конзолата.

**Помощ**: За пресмятането на конкретен елемент се използва формулата
`value_k = value_(k-1) * (n - k + 1) / k`
<br>
Където:

- value_k е сегашния елемент на позиция k на ред n
- value\_(k-1) e предишния елемент на този ред
- n e редът
- k e позиция в ред

Пример:

```
n = 5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
```

# Зад. 3

Напишете функция, която проверява дали 3 числа образуват триъгълник, и втора функция, която изчислява периметъра и лицето му(по Херонова формула). От клавиатурата се въвеждат n поредици от тройки числа и след всяка тройка се отбелязва дали триъгълникът съществува, периметъра и лицето му

# Зад. 4

Едно положително цяло число е съвършено, ако е равно на сумата от своите делители (без самото число). Например, 6 е съвършено, защото 6 = 1+2+3; числото 1 не е съвършено. Да се напише функция, която намира и отпечатва на екрана всички съвършени числа, ненадминаващи дадено положително цяло число в параметър n.

Пример:

Вход: 50

Изход: 6 28

# Зад. 5

Напишете функция, която по въведено число n проверява дали n е палиндром.

# Зад. 6

Да се провери дали естественото ч-ло А се дели на простите делители на B, което е със същите цифри на А, но записани в обратен ред.