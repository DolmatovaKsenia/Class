var
  a, b, h, min, max: int64;
  
begin
  readln(a);
  readln(b);
  readln(h);
  min := a;
  if b < min then 
    min := b;
  max := a;
  if b > max then 
    max := b;
  
  if (min >= 2) and (max <= 2) then
    writeln('good')
  else
    writeln('bad');
    
end.