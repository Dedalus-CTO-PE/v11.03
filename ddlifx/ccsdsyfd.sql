create table ccsdsyaf
(
  ccdssec     char(4) default ' ' not null,
  ccdshcd     char(2) default ' ' not null,
  ccdsdpt     char(8) default ' ' not null,
  ccdsspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ccsdsya1 on ccsdsyaf
(
ccdssec,
ccdshcd,
ccdsdpt
);
create unique index ccsdsya2 on ccsdsyaf
(
ccdshcd,
ccdsdpt,
ccdssec
);
revoke all on ccsdsyaf from public ; 
grant select on ccsdsyaf to public ; 
