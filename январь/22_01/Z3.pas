//Arr17

const 
  size = 10;

var
  arr: array[1..size] of integer;
  indexDirect: integer;
  indexReverse: integer;
  indexPrinted: integer;
  
begin
  indexDirect := 1;
  indexReverse := size;
  indexPrinted := 0;
  
  for var i := 1 to size do
    arr[i] := random(-9, 9);
    
  **----------------
    
  writeln();
  
  while indexPrinted <> size do
  begin
    write(arr[indexDirect], ' ');
    indexPrinted += 1;
    indexDirect += 1;
    
    if size = indexPrinted then
      break;
    write(arr[indexDirect], ' ');
    indexPrinted += 1;
    indexDirect += 1;
    
    if size = indexPrinted then
      break;
    write(arr[indexReverse], ' ');
    indexPrinted += 1;
    indexReverse -= 1;
    
    if size = indexPrinted then 
      break;
    write(arr[indexReverse], ' ');
    indexPrinted += 1;
    indexReverse -= 1;
  end;
    
end.