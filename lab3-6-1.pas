program L361;

uses crt;

var x,y: real;

begin
  Readln(x, y);
  if (x = 0) and (y = 0) then
    Writeln('Nachalo coordinat')
  else
    if (x = 0) and (y <> 0) then 
      Writeln('prinadlezhit X')
    else
    if (x <> 0) and (y = 0)then
      Writeln('prinadlezhit Y')
    else
    if (x > 0) and (y > 0) then
      Writeln('I')
    else
    if (x < 0) and (y < 0) then
      Writeln('II')
    else
end.