// Дано целое число N (> 0). Найти сумму
//1 + 1/2 + 1/3 + … + 1/N
//(вещественное число). 

var
  N: integer;
  summ: real;
  
begin
  readln(N);
  summ := 0;
  for var i := 1 to N do
  begin
    summ := summ + 1 / i;
  end;
  writeln(summ)
    
end.