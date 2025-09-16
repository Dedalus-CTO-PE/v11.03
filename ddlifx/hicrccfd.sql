create table hicrccaf
(
  hcrcbtch    char(5) default ' ' not null,
  hcrcrnum    char(3) default ' ' not null,
  hcrccntr    char(5) default ' ' not null,
  hcrcdate    char(8) default ' ' not null,
  hcrcpyee    char(10) default ' ' not null,
  hcrcsprv    char(10) default ' ' not null,
  hcrcbena    decimal(14,2) default 0 not null,
  hcrcbenp    decimal(14,2) default 0 not null,
  hcrcexcn    decimal(4,0) default 0 not null,
  hcrcspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index hicrcca1 on hicrccaf
(
hcrcbtch,
hcrcrnum,
hcrccntr
);
create unique index hicrcca2 on hicrccaf
(
hcrcrnum,
hcrccntr,
hcrcbtch
);
revoke all on hicrccaf from public ; 
grant select on hicrccaf to public ; 
