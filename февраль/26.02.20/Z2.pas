// Дано целое число N (> 2) и набор из N вещественных чисел. Набор
// называется пилообразным, если каждый его внутренний элемент либо
// больше, либо меньше обоих своих соседей (то есть является «зубцом»).
// Если данный набор является пилообразным, то вывести 0; в противном
// случае вывести номер первого элемента, не являющегося зубцом.

var
  N, number, previousNumber, numberBeforePrevious, badIndex, count: integer;
  expression: boolean;
  
begin
  expression := true;
  readln(N);
  readln(numberBeforePrevious);
  readln(previousNumber);
  count := 3;
  for var i := 3 to N do
  begin
    readln(number);
    if not ((number > numberBeforePrevious) and (number > previousNumber) or (number < numberBeforePrevious) and (number < previousNumber)) and (expression) then
    begin
      expression := false;
      badIndex := count;
    end;
    count += 1;
   numberBeforePrevious := previousNumber;
   previousNumber := number;
      
  end;
  if expression then
    writeln('0')
  else
    writeln(badIndex)
end.