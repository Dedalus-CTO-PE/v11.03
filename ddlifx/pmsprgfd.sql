create table pmsprgaf
(
  pmpgcode    char(8) default ' ' not null,
  pmpgdesc    char(50) default ' ' not null,
  pmpgactv    char(1) default ' ' not null,
  pmpgspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index pmsprga1 on pmsprgaf
(
pmpgcode
);
revoke all on pmsprgaf from public ; 
grant select on pmsprgaf to public ; 
