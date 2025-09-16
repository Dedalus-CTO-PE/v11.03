create table scrfmaaf
(
  scfmfid     char(8) default ' ' not null,
  scfmpid     char(8) default ' ' not null,
  scfmdes     char(35) default ' ' not null,
  scfmtyp     decimal(2,0) default 0 not null,
  scfmsfi     char(5) default ' ' not null,
  scfmspa     char(32) default ' ' not null,
  lf          char(1)
);
create unique index scrfmaa1 on scrfmaaf
(
scfmfid,
scfmpid
);
create unique index scrfmaa2 on scrfmaaf
(
scfmpid,
scfmfid
);
revoke all on scrfmaaf from public ; 
grant select on scrfmaaf to public ; 
