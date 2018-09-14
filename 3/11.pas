program p11;
uses crt;

var a, b: integer;

begin
    a := 10;
    b := -233;
    b := b - a;
    a := (b + a);
    b := (a - b);
    writeln(a, ' ', b);
end.
