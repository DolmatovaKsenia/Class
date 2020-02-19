//Z1

const
  size = 5;
var
  arr: array[1..size] of integer;
  firstElement: integer;
  
begin
  for var i := 1 to size do
  begin
    arr[i] := random(-10, 10);
    write(arr[i], ' ')
  end;
  firstElement := arr[1];
  
  for var i := 1 to size - 1 do
    arr[i] := arr[i + 1];
  arr[size] := firstElement;
  writeln();
  writeln(arr)
end.