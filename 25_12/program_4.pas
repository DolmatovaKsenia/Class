//. Дано вещественное число A и целое число N (> 0). Найти A в степени N: AN = A·A· … ·A (числа A перемножаются N раз). 

var
  A: real;
  N: integer;
  powerA: real;

begin
  readln(A, N);
  powerA := 1;
  for var i := 1 to N do
  begin
    powerA := powerA * A 
  end;
  writeln(powerA)
end.