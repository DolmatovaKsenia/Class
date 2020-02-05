//Z2

const
  size = 5;
  
var
  arr: array[1..size] of integer;
  lastElement: integer;
  
begin
  for var i := 1 to size do
    arr[i] := random(-10, 10);
  writeln(arr);
  lastElement := arr[size];
  
  for var i := size downto 2 do 
    arr[i] := arr[i - 1];
  arr[1] := lastElement;
  writeln(arr)
    
end.