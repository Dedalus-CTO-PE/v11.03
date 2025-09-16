create table sintrnaf
(
sitrpurc    char(7),
sitrstat    char(1),
sitruser    char(4),
sitrcrea    char(30),
sitrorg     char(3),
sitredat    char(8),
sitrtdat    char(8),
sitrtnum    decimal(3,0),
sitrspar    char(20),
lf          char(1)
);
create unique index sintrna1 on sintrnaf
(
sitrpurc
);
create unique index sintrna2 on sintrnaf
(
sitrstat,
sitrpurc
);
revoke all on sintrnaf from public ; 
grant select on sintrnaf to public ; 
