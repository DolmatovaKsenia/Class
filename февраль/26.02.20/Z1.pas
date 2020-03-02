// Series18. Дано целое число N и набор из N целых чисел, упорядоченный по
// возрастанию. Данный набор может содержать одинаковые элементы. Вы-
// вести в том же порядке все различные элементы данного набора.

var
  N, number, previousNumber: integer;
  
begin
  readln(N);
  readln(number);
  previousNumber := number;
  writeln(number);4
  
  for var i := 2 to N do
  begin
    readln(number);
    if previousNumber < number then
    begin
      write(number, ' ');
      previousNumber := number;
    end;
  end;
end.