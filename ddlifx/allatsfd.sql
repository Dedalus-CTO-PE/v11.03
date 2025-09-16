create table allatsaf
(
  alattype    char(10) default ' ' not null,
  alatdesc    char(30) default ' ' not null,
  alatactv    char(1) default ' ' not null,
  alatdept    char(3) default ' ' not null,
  alatcdte    char(8) default ' ' not null,
  alatfdte    char(8) default ' ' not null,
  alatremd    char(3) default ' ' not null,
  alatname    char(18) default ' ' not null,
  alatcdat    char(8) default ' ' not null,
  alatctim    char(8) default ' ' not null,
  alatcuid    char(10) default ' ' not null,
  alatudat    char(8) default ' ' not null,
  alatutim    char(8) default ' ' not null,
  alatuuid    char(10) default ' ' not null,
  alatspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allatsa1 on allatsaf
(
alatdept,
alattype
);
revoke all on allatsaf from public ; 
grant select on allatsaf to public ; 
