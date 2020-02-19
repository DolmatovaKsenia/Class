// Массив 15 целых случайных чисел. X(-10;10) найти и вывести сумму элементов оканчивающихся на 3.

const
  size = 15;

var
  arr: array [1..size] of integer;
  sum: integer;
  
begin
 sum := 0;
 for var i := 1 to size do
  begin
    arr[i] := random(-10, 10);
    if arr[i] mod 10 = 3 then
      sum += arr[i];
    
    
  end;
  writeln(sum);
  
end.