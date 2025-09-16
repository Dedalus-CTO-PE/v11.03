create table ccsgpfaf
(
  ccgphcd     char(2) default ' ' not null,
  ccgpdpt     char(8) default ' ' not null,
  ccgppcd     char(8) default ' ' not null,
  ccgpghcd    char(2) default ' ' not null,
  ccgpgdpt    char(8) default ' ' not null,
  ccgpgpcd    char(8) default ' ' not null,
  ccgpgqty    decimal(12,2) default 0 not null,
  ccgpgch     decimal(12,2) default 0 not null,
  ccgpspa     char(23) default ' ' not null,
  lf          char(1)
);
create unique index ccsgpfa1 on ccsgpfaf
(
ccgphcd,
ccgpdpt,
ccgppcd,
ccgpghcd,
ccgpgdpt,
ccgpgpcd
);
revoke all on ccsgpfaf from public ; 
grant select on ccsgpfaf to public ; 
