create table pmsvmtaf
(
  pmvmtnam    char(8) default ' ' not null,
  pmvmtidx    char(30) default ' ' not null,
  pmvmmvsi    char(3) default ' ' not null,
  pmvmmcod    char(30) default ' ' not null,
  pmvmmdes    char(100) default ' ' not null,
  pmvmspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsvmta1 on pmsvmtaf
(
pmvmtnam,
pmvmtidx,
pmvmmvsi
);
revoke all on pmsvmtaf from public ; 
grant select on pmsvmtaf to public ; 
