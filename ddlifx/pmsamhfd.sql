create table pmsamhaf
(
  pmmhcntr    char(6) default ' ' not null,
  pmmhamhc    char(10) default ' ' not null,
  pmmhamhd    char(80) default ' ' not null,
  pmmhavpl    decimal(8,2) default 0 not null,
  pmmhlowb    decimal(4,0) default 0 not null,
  pmmhuppb    decimal(4,0) default 0 not null,
  pmmhssob    decimal(14,4) default 0 not null,
  pmmhssop    decimal(14,4) default 0 not null,
  pmmhinli    decimal(14,4) default 0 not null,
  pmmhlsop    decimal(14,4) default 0 not null,
  pmmhppsa    decimal(5,2) default 0 not null,
  pmmhcdat    char(8) default ' ' not null,
  pmmhctim    char(8) default ' ' not null,
  pmmhcuid    char(10) default ' ' not null,
  pmmhudat    char(8) default ' ' not null,
  pmmhutim    char(8) default ' ' not null,
  pmmhuuid    char(10) default ' ' not null,
  pmmhspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsamha1 on pmsamhaf
(
pmmhcntr,
pmmhamhc
);
create unique index pmsamha2 on pmsamhaf
(
pmmhamhc,
pmmhcntr
);
revoke all on pmsamhaf from public ; 
grant select on pmsamhaf to public ; 
