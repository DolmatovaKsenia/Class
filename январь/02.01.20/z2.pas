// Дано вещественное число A и целое число N (> 0). Используя один цикл,
//найти значение выражения
//1 – A + A2 – A3 + … + (–1)N·AN.
//Условный оператор не использовать.


var
  A, sum, powerA: real;
  N, sign: integer;
  
begin
  readln(A, N);
  powerA := 1;
  sum := 1;
  sign := 1;
  for var i := 1 to N do
  begin
    sign := sign * (-1);
    powerA := powerA * A;
    sum := sum + powerA * sign
  end;
  writeln(sum)
  
end.