create table obsreaaf
(
obrevisn    char(8),
obreline    char(3),
obrereas    char(127),
obrespar    char(127),
lf          char(1)
);
create unique index obsreaa1 on obsreaaf
(
obrevisn,
obreline
);
revoke all on obsreaaf from public ; 
grant select on obsreaaf to public ; 
