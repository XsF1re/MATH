%{
MATLAB 문제.
년, 월, 일을 함수의 매개변수로 전달하면 그날이 그해에서 몇일째 날인지 결과로 알려주는 함수를 작성하시오.
%}

year = input("년도를 입력하세요: ");
month = input("월을 입력하세요: ");
day = input("일을 입력하세요: ");

% 입력한 달 이전까지 월의 일수를 allday 변수에 계속 더한다.
monthCount = 1;
allday = 0;
while(monthCount < month)
    allday = allday + DaysofMonth(monthCount, year);
    monthCount = monthCount + 1;
end

% 마지막으로, allday 변수에 사용자가 입력한 day 값을 더해 일수를 계산한다.
allday = allday + day;

% 해가 유효하면 윤년인지 아닌지 출력
% 그리고 월과 일이 유효하면 몇일째 날인지 출력
if(isYearValid(year))
    if(isLeap(year))
        disp("[i]" + year + "년은 윤년입니다.");
    else
        disp("[i]" + year + "년은 윤년이 아닙니다.");
    end

    if(isMonthValid(month) && isDayValid(year, month, day))
        disp("[i]" + allday + "일 째날입니다.");
    end
end


% 윤년인지 아닌지 확인하는 함수.
% 윤년이면 true, 아니면 false 값을 리턴한다.
function ret = isLeap(year)
    if ((mod(year,4)==0 && mod(year,100) ~= 0) || mod(year,400)==0)
        ret = true;
    else
        ret= false;
    end
end

% 한달을 일수로 계산하는 함수
% 2월은 윤년에 따라 일수가 변한다.
function ret = DaysofMonth(month, year)
    if(month == 2)
        if(isLeap(year))
            ret = 29;
        else
            ret = 28;
        end
    elseif(month == 4 || month == 6 || month == 9 || month == 11)
        ret = 30;
    else
        ret = 31;
    end
end

% 해가 유효한지 확인하는 함수
function ret = isYearValid(year)
    if(year < 1)
        disp("[-] 기원후는 1년부터 시작됩니다.");
        ret = false;
    else
        ret = true;
    end
end

% 월이 유효한지 확인하는 함수
function ret = isMonthValid(month)
    if(month >= 1 && month <= 12)
        ret = true;
    else
        disp("[-] 월은 1월~12월만 존재합니다.");
        ret = false;
    end
end

% 일이 유효한지 확인하는 함수
% 마찬가지로 2월은 윤년에 따라 유효한 일수가 달라진다.
function ret = isDayValid(year, month, day)
    if(month == 2 && isLeap(year) && (day < 1 || day > 29))
        disp("[-] 2월은 1일부터 29일까지만 존재합니다.");
        ret = false;
    elseif(month == 2 && ~isLeap(year) && (day < 1 || day > 28))
        disp("[-] 2월은 1일부터 28일까지만 존재합니다.");
        ret = false;
    elseif((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
        disp("[-]" + month + "월은 1일부터 30일까지만 존재합니다.");
        ret = false;
    elseif((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31))
        disp("[-]" + month + "월은 1일부터 31일까지만 존재합니다.");
        ret = false;
    else
        ret = true;
    end
end
