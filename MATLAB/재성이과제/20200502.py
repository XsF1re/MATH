def isLeap(arg1):
    if ((year%4==0 and year%100!=0) or year%400==0):
        return True;
    return False;

def DaysofMonth(arg1):
    if(arg1 == 2):
        if(isLeap(year)):
            return 29;
        return 28;
    elif(arg1 == 4 or arg1 == 6 or arg1 == 9 or arg1 == 11):
        return 30;
    else:
        return 31;

def isDayValid(arg1):
    if(arg1 == 2):
        if(isLeap(year) and day > 29):
            print("2월에는 29일까지만 존재합니다.");
            return False;
        if(not isLeap(year) and day > 28):
            print("2월에는 28일까지만 존재합니다.");
            return False;
    elif(arg1 == 4 or arg1 == 6 or arg1 == 9 or arg1 == 11):
        if(day > 30):
            print(month,"월에는 30일까지만 존재합니다.");
            return False;
    else:
        if(day > 31):
            print(month,"월에는 31일까지만 존재합니다.");
            return False;
    return True;

def isMonthValid(arg1):
    if(arg1 >= 1 and arg1 <= 12):
        return True;
    print("월은 1월~12월만 존재합니다.");
    return False;


year = int(input("년도를 입력하세요: "));
month = int(input("월을 입력하세요: "));
day = int(input("일을 입력하세요: "));

monthCount = 1;
allday = 0;
while(monthCount < month):
    allday = allday + DaysofMonth(monthCount);
    monthCount = monthCount + 1;

allday = allday + day;

if(isLeap(year)):
    print(year, "년은 윤년입니다.");
else:
    print(year, "년은 윤년이 아닙니다.");

if(isMonthValid(month) and isDayValid(month)):
    print(allday, "일 째날입니다.");
