create table ccsrasaf
(
  ccramid     char(3) default ' ' not null,
  ccrahcd     char(2) default ' ' not null,
  ccradpt     char(8) default ' ' not null,
  ccrapcd     char(8) default ' ' not null,
  ccrafdr     decimal(18,6) default 0 not null,
  ccrafid     decimal(18,6) default 0 not null,
  ccravdr     decimal(18,6) default 0 not null,
  ccravid     decimal(18,6) default 0 not null,
  ccraqty     decimal(14,2) default 0 not null,
  ccraspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsrasa1 on ccsrasaf
(
ccramid,
ccrahcd,
ccradpt,
ccrapcd
);
revoke all on ccsrasaf from public ; 
grant select on ccsrasaf to public ; 
