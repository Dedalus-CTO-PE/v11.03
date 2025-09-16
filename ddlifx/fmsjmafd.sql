create table fmsjmaaf
(
  fmjmjty     char(1) default ' ' not null,
  fmjmjid     char(6) default ' ' not null,
  fmjmdesc    char(35) default ' ' not null,
  fmjmdent    char(8) default ' ' not null,
  fmjmledg    char(2) default ' ' not null,
  fmjmstat    char(1) default ' ' not null,
  fmjmcash    decimal(1,0) default 0 not null,
  fmjmrev     decimal(1,0) default 0 not null,
  fmjmrpos    char(8) default ' ' not null,
  fmjmcpos    char(8) default ' ' not null,
  fmjmppos    char(8) default ' ' not null,
  fmjmpdat    char(8) default ' ' not null,
  fmjmpbat    char(5) default ' ' not null,
  fmjmrdat    char(8) default ' ' not null,
  fmjmrbat    char(5) default ' ' not null,
  fmjmsper    decimal(1,0) default 0 not null,
  fmjmfper    char(6) default ' ' not null,
  fmjmlper    char(6) default ' ' not null,
  fmjmprof    char(4) default ' ' not null,
  fmjmspar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index fmsjmaa1 on fmsjmaaf
(
fmjmjty,
fmjmjid
);
create unique index fmsjmaa2 on fmsjmaaf
(
fmjmjty,
fmjmstat,
fmjmjid
);
create unique index fmsjmaa3 on fmsjmaaf
(
fmjmjty,
fmjmdent,
fmjmjid
);
revoke all on fmsjmaaf from public ; 
grant select on fmsjmaaf to public ; 
