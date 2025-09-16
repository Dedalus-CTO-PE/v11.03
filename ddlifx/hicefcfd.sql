create table hicefcaf
(
  hcecbtch    char(5) default ' ' not null,
  hcecrnum    char(3) default ' ' not null,
  hceccntr    char(5) default ' ' not null,
  hcectdat    char(8) default ' ' not null,
  hcecdamt    decimal(14,2) default 0 not null,
  hcecspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index hicefca1 on hicefcaf
(
hcecbtch,
hcecrnum,
hceccntr
);
create unique index hicefca2 on hicefcaf
(
hcecrnum,
hceccntr,
hcecbtch
);
revoke all on hicefcaf from public ; 
grant select on hicefcaf to public ; 
