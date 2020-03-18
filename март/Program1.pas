const
  rows = 4;
  columns = 5;

var
  arr: array[1..rows, 1..columns] of integer;
  
begin
// бежим по строкам, заполняем массив
  for var i := 1 to rows do
  begin
    for var j := 1 to columns do
    begin
      arr[i, j] := random(0, 9);
    end;  
  end;
  
  for var i := 1 to rows do
  begin
    for var j := 1 to columns do
    begin
      write(arr[i, j], ' ');
    end;
    writeln();
  end;
end.