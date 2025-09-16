create table pmsvstaf
(
  pmvtvsid    char(3) default ' ' not null,
  pmvtvsnm    char(50) default ' ' not null,
  pmvtvurl    char(256) default ' ' not null,
  pmvtfurl    char(256) default ' ' not null,
  pmvthdpe    char(30) default ' ' not null,
  pmvtspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsvsta1 on pmsvstaf
(
pmvtvsid
);
revoke all on pmsvstaf from public ; 
grant select on pmsvstaf to public ; 
