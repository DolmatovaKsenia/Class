//Даны два целых числа: A, B. Проверить истинность высказывания:«Хотя бы одно из чисел A и B нечетное».

var
  a, b: integer;
  expression: boolean;

begin
  readln(a, b);
  expression := (a mod 2 = 0) or (b mod 2 = 0);
  writeln(expression)
end.