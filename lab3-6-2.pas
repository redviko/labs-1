program L621;

uses crt;
var k:integer;

begin
 Readln(k);
 if (k > 10) and (k < 20) then
  Writeln('Mne ', k, ' let')
 else
 begin
  case k mod 10 of
    1: Writeln('Mne ', k, ' god');
    2,3,4: Writeln('Mne ', k, ' goda');
    else Writeln('Mne ', k, ' let');
 end;
 end;
 end.