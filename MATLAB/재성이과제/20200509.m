%{
MATLAB 문제.
각 행에는 각 학생의 국어,영어, 수학 점수가 기록된 2차원 배열을 받아서
각 학생별 평균을 열벡터에 과목별 반평균을 행벡터에 계산하여 돌려주는 함수 avg를
for문을 이용하여 작성하시오.

Ex)
이름            국            영            수            학생별평균
김재성 =        [2            3             4];           2+3+4/3
안상현 =        [4            5             6];           4+5+6/3
손민성 =        [3            2             3];           3+2+3/3
서현규 =        [2            3             6];           2+3+6/3
과목별 반평균   2+4+3+2/4    3+5+2+3/4     4+6+3+6/4
%}

array = [2 3 4;
         4 5 6;
         3 2 3;
         2 3 6];

disp(Avg(array));

function ret = Avg(array)

    studentCnt = size(array, 1); %가로인 행의 크기
    subjectCnt = size(array, 2); %세로인 열의 크기

    for i=1:studentCnt
        subjectSum = 0;
        for j=1:subjectCnt
            subjectSum = subjectSum + array(i, j);
        end
        array(i, subjectCnt + 1) = subjectSum/subjectCnt;
    end

    for i=1:subjectCnt
    studentSum = 0;
            for j=1:studentCnt
            studentSum = studentSum + array(j, i);
        end
        array(studentCnt + 1, i) = studentSum/studentCnt;
    end
    ret = array;
end
