create table pmsvscaf
(
  pmvcvsid    char(3) default ' ' not null,
  pmvccode    char(30) default ' ' not null,
  pmvcptrm    char(256) default ' ' not null,
  pmvcfnam    char(256) default ' ' not null,
  pmvcactv    char(1) default ' ' not null,
  pmvcspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsvsca1 on pmsvscaf
(
pmvcvsid,
pmvccode
);
revoke all on pmsvscaf from public ; 
grant select on pmsvscaf to public ; 
