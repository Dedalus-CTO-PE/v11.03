create table msgidsaf
(
  msidmlid    char(8) default ' ' not null,
  msidsnam    char(20) default ' ' not null,
  msidgnam    char(25) default ' ' not null,
  msidspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index msgidsa1 on msgidsaf
(
msidmlid
);
revoke all on msgidsaf from public ; 
grant select on msgidsaf to public ; 
