create table acccmtaf
(
accmaccn    char(20),
accmtype    char(3),
daccmlin    char(3),
accmdata    char(100),
accmspar    char(30),
lf          char(1)
);
create unique index acccmta1 on acccmtaf
(
accmaccn,
accmtype,
daccmlin
);
revoke all on acccmtaf from public ; 
grant select on acccmtaf to public ; 
