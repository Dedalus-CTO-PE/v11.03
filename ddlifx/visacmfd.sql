create table visacmaf
(
  vsacvisn    char(8) default ' ' not null,
  vsacadat    char(8) default ' ' not null,
  vsacatim    char(8) default ' ' not null,
  vsactype    char(3) default ' ' not null,
  vsacline    char(3) default ' ' not null,
  vsacdata    char(100) default ' ' not null,
  vsacspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index visacma1 on visacmaf
(
vsacvisn,
vsacadat,
vsacatim,
vsactype,
vsacline
);
revoke all on visacmaf from public ; 
grant select on visacmaf to public ; 
