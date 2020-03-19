const
  rows = 5;
  columns = 5;

var
  arr: array[1..rows,1..columns] of integer;
  
begin
  for var i := 1 to rows do
  begin
    for var j := 1 to columns do
      arr[i,j] := i * 10;
  end;
  
  for var i := 1 to rows do
  begin
    for var j := 1 to columns do
      write(arr[i,j],' ');
    writeln()
  end;
end.