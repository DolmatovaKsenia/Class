// Дано целое число N и набор из N вещественных чисел. Вывести сумму
// и произведение чисел из данного набора. 

var
  N: integer;
  number, sum, product: real;
  
begin
  readln(N);
  
  sum := 0;
  product := 1;
  
  for var i := 1 to N do
  begin
    readln(number);
    sum += number;
    product *= number;
  end;
  
  writeln('Sum is ', sum, '; product is ', product)
end.