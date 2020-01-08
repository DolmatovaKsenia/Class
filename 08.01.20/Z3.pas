// Дано целое число N (> 0). Используя операции деления нацело и взя-
//тия остатка от деления, найти количество и сумму его цифр.

var
  N, sum, count, number: integer;
  
begin
  readln(N);
  number := N;
  count := 0;
  sum := 0;
  while number > 0 do
  begin
    count := count + 1;
    sum := sum + number mod 10;
    number := number div 10;
    
  end;
  writeln(sum, ' ', count);
end.
  
