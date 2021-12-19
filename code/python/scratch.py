year=int(input());
month=int(input());
day=int(input());
sum=0;
if (year%4==0&year%100!=0)|(year%400==0):
    if month==1:
        sum=day;
    elif month==2:
        sum=31+day;
    elif month==3:
        sum=31+29+day;
    elif month==4:
        sum=31+29+31+day;
    elif month==5:
        sum=31+29+31+30+day;
    elif month == 6:
        sum=31+29+31+30+31+day;
    elif month==7:
        sum=31+29+31+30+31+30+day;
    elif month==8:
        sum=31+29+31+30+31+30+31+day;
    elif month == 9:
        sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+day;
    elif month==10:
        sum=31+29+31+30+31+30+31+31+30+day;
    elif month==11:
        sum=31+29+31+30+31+30+31+31+30+31+day;
    elif month==12:
        sum=31+29+31+30+31+30+31+31+30+31+30+day;
else:
    if month==1:
        sum=day;
    elif month==2:
        sum=31+day;
    elif month==3:
        sum=31+28+day;
    elif month==4:
        sum=31+28+31+day;
    elif month==5:
        sum=31+28+31+30+day;
    elif month == 6:
        sum=31+28+31+30+31+day;
    elif month==7:
        sum=31+28+31+30+31+30+day;
    elif month==8:
        sum=31+28+31+30+31+30+31+day;
    elif month == 9:
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31+day;
    elif month==10:
        sum=31+28+31+30+31+30+31+31+30+day;
    elif month==11:
        sum=31+28+31+30+31+30+31+31+30+31+day;
    elif month==12:
        sum=31+28+31+30+31+30+31+31+30+31+30+day;
print(sum)