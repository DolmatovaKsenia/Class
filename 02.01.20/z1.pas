// Дано вещественное число A и целое число N (> 0). Используя один цикл,
//найти сумму
//1 + A + A2 + A3 + … + AN.

var
  A, sum, powerA: real;
  N: integer;
  
begin
  readln(A, N);
  powerA := 1;
  sum := 1;
  for var i := 1 to N do
  begin
    powerA := powerA * A;
    sum := sum + powerA
  end;
  writeln(sum)
  
end.