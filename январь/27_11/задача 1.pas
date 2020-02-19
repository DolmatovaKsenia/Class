//Даны два целых числа: A, B. Проверить истинность высказывания:«Справедливы неравенства A > 2 и B ≤ 3». 

var
  a, b: integer;
  expressionIsTrue: boolean;
  
begin
  readln(a, b);
  expressionIsTrue := (a > 2) and (b <= 3);
  writeln(expressionIsTrue)
end.