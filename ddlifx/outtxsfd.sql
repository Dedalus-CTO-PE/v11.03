create table outtxsaf
(
ottxsite    char(6),
ottxctyp    char(6),
ottxbksr    char(8),
ottxbkrn    char(2),
ottxbktm    char(3),
ottxatsr    char(8),
ottxatrn    char(2),
ottxattm    char(3),
ottxspar    char(40),
lf          char(1)
);
create unique index outtxsa1 on outtxsaf
(
ottxsite,
ottxctyp
);
revoke all on outtxsaf from public ; 
grant select on outtxsaf to public ; 
