var
  number1, number2, number3, number4, number5, max: integer;
  
begin
  readln(number1, number2, number3, number4, number5);
  max := integer.MinValue;
  
  if number2 > max then
    max := number2;
    
  if number3 > max then
    max := number3;
    
  if number4 > max then
    max := number4;
    
  if number5 > max then
    max := number5;
    
  writeln('max ',max);
end.