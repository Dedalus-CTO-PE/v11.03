create table fmscafaf
(
  fmcaled     char(2) default ' ' not null,
  fmcaacc     char(12) default ' ' not null,
  fmcatyp     decimal(1,0) default 0 not null,
  fmcajnl     decimal(1,0) default 0 not null,
  fmcachq     char(15) default ' ' not null,
  fmcaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmscafa1 on fmscafaf
(
fmcaled,
fmcaacc
);
create unique index fmscafa2 on fmscafaf
(
fmcachq,
fmcaled,
fmcaacc
);
revoke all on fmscafaf from public ; 
grant select on fmscafaf to public ; 
