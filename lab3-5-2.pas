program L352;
uses crt;

var x: integer;

begin
  Readln(x);
  case x of
    1: Writeln('Shurup');
    2: Writeln('Gaika');
    3: Writeln('Vink');
    4: Writeln('Gvozd');
    5: Writeln('Bolt');
    else Writeln('Ne naideno!');
  end
 end.