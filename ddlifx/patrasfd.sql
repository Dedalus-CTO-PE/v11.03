create table patrasaf
(
  ptrainvn    char(8) default ' ' not null,
  ptracntn    char(2) default ' ' not null,
  ptrasyst    char(1) default ' ' not null,
  ptraoust    decimal(14,2) default 0 not null,
  ptrarmov    char(3) default ' ' not null,
  ptrappor    decimal(14,2) default 0 not null,
  ptraibal    char(8) default ' ' not null,
  ptradele    char(1) default ' ' not null,
  ptracdat    char(8) default ' ' not null,
  ptractim    char(8) default ' ' not null,
  ptracuid    char(10) default ' ' not null,
  ptraudat    char(8) default ' ' not null,
  ptrautim    char(8) default ' ' not null,
  ptrauuid    char(10) default ' ' not null,
  ptradbag    char(3) default ' ' not null,
  ptraspar    char(97) default ' ' not null,
  lf          char(1)
);
create unique index patrasa1 on patrasaf
(
ptrainvn,
ptracntn
);
revoke all on patrasaf from public ; 
grant select on patrasaf to public ; 
