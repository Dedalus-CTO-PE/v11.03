create table debfnoaf
(
  dbfndeb     char(8) default ' ' not null,
  dbfndty     char(1) default ' ' not null,
  dbfndoc     char(12) default ' ' not null,
  dbfndln     char(3) default ' ' not null,
  dbfnlin     char(3) default ' ' not null,
  dbfncom     char(50) default ' ' not null,
  dbfnspa     char(18) default ' ' not null,
  lf          char(1)
);
create unique index debfnoa1 on debfnoaf
(
dbfndeb,
dbfndty,
dbfndoc,
dbfndln,
dbfnlin
);
revoke all on debfnoaf from public ; 
grant select on debfnoaf to public ; 
