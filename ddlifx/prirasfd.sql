create table prirasaf
(
  prrainvn    char(8) default ' ' not null,
  prracntn    char(2) default ' ' not null,
  prraoust    decimal(14,2) default 0 not null,
  prrarmov    char(3) default ' ' not null,
  prrappor    decimal(14,2) default 0 not null,
  prradele    char(1) default ' ' not null,
  prradbag    char(3) default ' ' not null,
  prracdat    char(8) default ' ' not null,
  prractim    char(8) default ' ' not null,
  prracuid    char(10) default ' ' not null,
  prraudat    char(8) default ' ' not null,
  prrautim    char(8) default ' ' not null,
  prrauuid    char(10) default ' ' not null,
  prraspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index prirasa1 on prirasaf
(
prrainvn,
prracntn
);
revoke all on prirasaf from public ; 
grant select on prirasaf to public ; 
