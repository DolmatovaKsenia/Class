// Дано целое число N (> 0). Найти произведение
//N! = 1·2·…·N
//(N–факториал). Чтобы избежать целочисленного переполнения, вычис-
//лять это произведение с помощью вещественной переменной и вывести
//его как вещественное число.

var
  N, factorial: integer;
  
begin
  readln(N);
  factorial := 1;
  for var i := 1 to N do
  begin
    factorial := factorial * i;
  end;
    
  writeln(factorial)
    
    
  
  
end.