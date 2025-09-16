create table patw20af
(
  pt20drgc    char(4) default ' ' not null,
  pt20drgd    char(60) default ' ' not null,
  pt20sdmt    char(1) default ' ' not null,
  pt20mvel    char(1) default ' ' not null,
  pt20cpay    char(3) default ' ' not null,
  pt20libp    decimal(4,0) default 0 not null,
  pt20hibp    decimal(4,0) default 0 not null,
  pt20ilos    decimal(6,2) default 0 not null,
  pt20sdod    char(1) default ' ' not null,
  pt20tsdw    decimal(10,4) default 0 not null,
  pt20todw    decimal(10,4) default 0 not null,
  pt20tlom    decimal(10,4) default 0 not null,
  pt20timw    decimal(10,4) default 0 not null,
  pt20thom    decimal(10,4) default 0 not null,
  pt20thih    decimal(10,4) default 0 not null,
  pt20spar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patw20a1 on patw20af
(
pt20drgc
);
revoke all on patw20af from public ; 
grant select on patw20af to public ; 
