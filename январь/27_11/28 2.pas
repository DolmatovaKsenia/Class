// Дано целое число в диапазоне 1–7. Вывести строку — название дня недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.). 

var
  number: integer;

begin
  readln(number);
  case number of
    1: writeln('пн');
    2: writeln('вт');
    3: writeln('ср');
    4: writeln('чт');
    5: writeln('пт');
    6: writeln('сб');
    7: writeln('вс');
    else writeln('Некорректное число')
  end;
end.