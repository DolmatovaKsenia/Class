//Даны два целых числа A и B (A < B). Вывести в порядке убывания все целые числа, расположенные между A и B (не включая числа A и B), а также
//количество N этих чисел. 

var
  A, B, count: integer;
  
begin
  readln(A, B);
  
  for var i := B - 1 downto A + 1 do
  begin
    count := i + 1;
    writeln(i);
  end;
  writeln(count)
    
  

end.
