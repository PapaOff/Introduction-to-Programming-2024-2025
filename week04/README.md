# Помощна функция
https://pastebin.com/CNCuFzuH



# Зад. 1
Гошо работи в start-up за банков софтуер и си търси човек, който да му помогне с разработването на системата. Нека помогнем на Гошо като създадем версия 0.1 на системата, която има следните операции:
 - Добавяне на пари
 - Теглене на пари
 - Извеждане на баланса
Програмата продължава да работи, докато потребителят не реши да я прекрати.

# Зад. 2
В опит да докажем, че човекът е по-добър от машината приемаме следното предизвикателство: 
Играч и компютър избират едно число между 1 и 100, като се опитват да познаят числото на другия. Играчът и компютърът задават своя избор и ако някой познае числото на другия, печели. Играта продължава 5 рунда и ако никой не е спечелил обявяваме равенство.

# Зад. 3
Нека създадем игра, в която пътешественик пътува по виртуална карта (линейна, с 20 позиции). Има събития като “обратна посока” (число от 0 до 7), “двойно напред” (число от 10 до 15) и “заседнал” (число от 16 до 18), които влияят на придвижването му. С колко позиции да се придвижи играчът зависи от хвърляне на нормален зар. Играта приключва, когато играчът достигне последната позиция.
 - “обратна посока” придвижва играча назад с толкова позиции, колкото е стойността на зара.
 - “двойно напред” придвижва играчът с толкова позции напред, колкото е стойността на зара, умножена по 2.
 - “заседнал” не придвижва играчът.

След края на играта на конзолата се принтира колко хода са били нужни за достигане на победа.

# Зад. 4
Искаме да изкараме бързи пари и ще се възползваме от хората, които не са добри по статистика. Нека направим онлайн казино, в което за момента имаме следните игри:
 1. Играчът плаща вход и хвърля зар 5 пъти. Целта му е сумата от хвърлянията да е над 20. След края на играта системата пита играча дали иска да играе пак.
 2. Системата генерира число и играчът трябва да познае дали е четно или нечетно. След края на играта системата пита играча дали иска да играе пак.
 3. Системата генерира първоначално число между 0 и 50, което се показва на конзолата. Играчът трябва да познае дали следващото генерирано от системата число ще бъде по-голямо или по-малко. Преди да даде своя отговор, играчът заплаща сума. Играта приключва, когато потребителят каже.

На потребителя му се дава възможност да избира коя игра да играе. Системата приключва, когато потребителят реши да спре да играе. При залагания трябва да се вземе предвид текущия баланс на играча и дали може да плати такса вход за съответната игра. Ако няма достатъчно пари, може да му предложим да изтегли кредит. Когато играчът реши да спре да играе, на конзолата се изкарват текущия му баланс и колко кредит има.



# Зад.5
Създайте игра, където играчът трябва да познае числото, което програмата си е избрала случайно между 1 и 100.  Нека играчът получава 7 опита, след което играта приключва. Всеки път играчът получава съобщение, дали числото е по-голямо или по-малко. Помислете как да използваме наученото досега, за да автоматизираме стратегията си.
