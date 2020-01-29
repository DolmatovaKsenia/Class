// Дано целое число N (> 1) и набор из N целых чисел. Вывести те эле-
// менты в наборе, которые меньше своего левого соседа, и количество K та-
// ких элементов.

var
  N, number, K, leftNeighbour: integer;
  
begin
  readln(N);
  K := 0;
  for var i := 1 to N do 
  begin
    readln(number);
    if (i <> 1) and (number < leftNeighbour) then
      begin
        K += 1;
        writeln(number);
      end;
      
      
    leftNeighbour := number;
    
  end;
  writeln(K)
  
    
end.