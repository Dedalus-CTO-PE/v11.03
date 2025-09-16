create table patin1af
(
  icode       char(6) default ' ' not null,
  iname       char(30) default ' ' not null,
  iadd1       char(35) default ' ' not null,
  iadd2       char(35) default ' ' not null,
  iadd3       char(35) default ' ' not null,
  iadd4       char(35) default ' ' not null,
  ipost       char(8) default ' ' not null,
  icont       char(30) default ' ' not null,
  iteleb      char(20) default ' ' not null,
  ibill       decimal(14,2) default 0 not null,
  iaout       decimal(14,2) default 0 not null,
  isort       char(6) default ' ' not null,
  ptinscem    char(80) default ' ' not null,
  ptinscpn    char(40) default ' ' not null,
  ptinscpp    char(20) default ' ' not null,
  ptinactv    char(1) default ' ' not null,
  ptinfaxn    char(20) default ' ' not null,
  ptinemai    char(80) default ' ' not null,
  ptinserv    char(3) default ' ' not null,
  ptinclai    char(3) default ' ' not null,
  ptinarce    char(3) default ' ' not null,
  ptinspar    char(51) default ' ' not null,
  lf          char(1)
);
create unique index patin1a1 on patin1af
(
icode
);
create unique index patin1a2 on patin1af
(
isort,
icode
);
revoke all on patin1af from public ; 
grant select on patin1af to public ; 
