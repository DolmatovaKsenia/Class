// Дано целое число N и набор из N целых чисел. Вывести в том же по-
// рядке все четные числа из данного набора и количество K таких чисел.

var
  N, number, K: integer;
  
begin
  readln(N);
  K := 0;
  for var i := 1 to N do
  begin
    readln(number);
    if number mod 2 = 0 then
    begin
      K += 1;
      writeln(number);
    end;
  end;
  
  writeln(K)
      
end.