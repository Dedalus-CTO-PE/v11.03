create table ccsdrgaf
(
  ccdgdrgc    char(4) default ' ' not null,
  ccdgdes     char(60) default ' ' not null,
  ccdgmdc     char(3) default ' ' not null,
  ccdgwar     decimal(1,0) default 0 not null,
  ccdgtyp     char(1) default ' ' not null,
  ccdgsdr     char(1) default ' ' not null,
  ccdgsdt     char(1) default ' ' not null,
  ccdglow     decimal(8,2) default 0 not null,
  ccdghig     decimal(8,2) default 0 not null,
  ccdgslos    decimal(8,2) default 0 not null,
  ccdgswgt    decimal(10,4) default 0 not null,
  ccdgnat     decimal(10,4) default 0 not null,
  ccdgnlos    decimal(8,2) default 0 not null,
  ccdgspa     char(44) default ' ' not null,
  lf          char(1)
);
create unique index ccsdrga1 on ccsdrgaf
(
ccdgdrgc
);
revoke all on ccsdrgaf from public ; 
grant select on ccsdrgaf to public ; 
