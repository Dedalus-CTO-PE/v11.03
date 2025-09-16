create table pricfxaf
(
  prcfuniq    char(8) default ' ' not null,
  prcfprac    char(6) default ' ' not null,
  prcfdoct    char(10) default ' ' not null,
  prcfpind    char(3) default ' ' not null,
  prcfctyp    char(3) default ' ' not null,
  prcfnote    char(6) default ' ' not null,
  prcfline    char(3) default ' ' not null,
  prcfcmnt    char(100) default ' ' not null,
  prcfspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pricfxa1 on pricfxaf
(
prcfuniq,
prcfprac,
prcfdoct,
prcfpind,
prcfctyp,
prcfnote,
prcfline
);
revoke all on pricfxaf from public ; 
grant select on pricfxaf to public ; 
