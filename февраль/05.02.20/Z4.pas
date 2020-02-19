// Дан набор ненулевых целых чисел; признак его завершения — число 0. Вывести количество чисел в наборе. 

var
  number, count: integer;

begin
  number := 1;
  count := 0;
  
  while number <> 0 do
  begin
    readln(number);
    count += 1;
  end;
  
  count -= 1;
  
  writeln(count);
end.