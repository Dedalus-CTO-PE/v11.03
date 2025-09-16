create table oprdepaf
(
opdedate    char(6),
opdedept    char(3),
opdencas    decimal(6,0),
opdenopr    decimal(6,0),
opdespar    char(10),
lf          char(1)
);
create unique index oprdepa1 on oprdepaf
(
opdedate,
opdedept
);
revoke all on oprdepaf from public ; 
grant select on oprdepaf to public ; 
