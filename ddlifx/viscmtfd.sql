create table viscmtaf
(
vsctvist    char(8),
vscttype    char(3),
vsctline    char(3),
vsctdata    char(100),
vsctukey    char(24),
vsctspar    char(30),
lf          char(1)
);
create unique index viscmta1 on viscmtaf
(
vsctvist,
vscttype,
vsctline
);
revoke all on viscmtaf from public ; 
grant select on viscmtaf to public ; 
