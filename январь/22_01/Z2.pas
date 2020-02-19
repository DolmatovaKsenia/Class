const
  size = 10;
  
var
  arr1: array[1..size] of integer;
  arr2: array[1..size] of integer;
  
begin
  for var i := 1 to size do
  begin
    arr1[i] := random(-9, 9);
    arr2[size + 1 - i] := arr1[i];
  end;
  for var i := 1 to size do 
  begin
    write(arr1[i], ' ')
    
  end;
  writeln();
  for var i := 1 to size do 
  begin
    write(arr2[i], ' ')
    
  end;
  
  
    
    
end.