const
  rows = 5;
  columns = 4;
  
var 
  arr: array[1..rows,1..columns] of integer;
  
begin
  for var j := 1 to columns do
  begin
    for var i := 1 to rows do
    begin
      arr[i,j] := j * 5;
    end;
  end;
  
  for var i := 1 to rows do
  begin
    for var j := 1 to columns do
      write(arr[i,j],' ');
    writeln()
  end;
end.