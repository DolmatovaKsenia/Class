//15.2

var
  sum, number, N, i: integer;
  
begin
  writeln('Введите количество цифр в последовательности');
  readln(N);
  sum := 0;
  writeln('Введите числа');
  for i := 1 to N do
  begin
    readln(number);
    if number mod 3 = 0 then
      sum := sum + number;
  end;
  writeln(sum)
end.
  