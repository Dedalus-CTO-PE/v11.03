create table apsbmfaf
(
  apbmbch     char(5) default ' ' not null,
  apbmled     char(2) default ' ' not null,
  apbmdis     char(5) default ' ' not null,
  apbmres     char(4) default ' ' not null,
  apbmtot     decimal(14,2) default 0 not null,
  apbmtyp     char(2) default ' ' not null,
  apbmopr     char(4) default ' ' not null,
  apbmdat     char(8) default ' ' not null,
  apbmadt     char(8) default ' ' not null,
  apbmudt     char(8) default ' ' not null,
  apbmchq     char(15) default ' ' not null,
  apbmspa     char(12) default ' ' not null,
  lf          char(1)
);
create unique index apsbmfa1 on apsbmfaf
(
apbmbch
);
create unique index apsbmfa2 on apsbmfaf
(
apbmtyp,
apbmbch
);
create unique index apsbmfa3 on apsbmfaf
(
apbmudt,
apbmbch
);
create unique index apsbmfa4 on apsbmfaf
(
apbmtyp,
apbmadt,
apbmbch
);
revoke all on apsbmfaf from public ; 
grant select on apsbmfaf to public ; 
