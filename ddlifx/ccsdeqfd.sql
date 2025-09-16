create table ccsdeqaf
(
  ccdeport    char(2) default ' ' not null,
  ccdehcd     char(2) default ' ' not null,
  ccdedpt     char(8) default ' ' not null,
  ccdedes     char(35) default ' ' not null,
  ccdenum     decimal(10,2) default 0 not null,
  ccdestd     decimal(14,2) default 0 not null,
  ccdeact     decimal(14,2) default 0 not null,
  ccdebud     decimal(14,2) default 0 not null,
  ccdespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsdeqa1 on ccsdeqaf
(
ccdeport,
ccdehcd,
ccdedpt
);
revoke all on ccsdeqaf from public ; 
grant select on ccsdeqaf to public ; 
