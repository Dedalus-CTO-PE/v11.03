create table ccsimcaf
(
  ccimtyp     char(1) default ' ' not null,
  ccimcod     char(9) default ' ' not null,
  ccimity     decimal(1,0) default 0 not null,
  ccimspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsimca1 on ccsimcaf
(
ccimtyp,
ccimcod
);
revoke all on ccsimcaf from public ; 
grant select on ccsimcaf to public ; 
