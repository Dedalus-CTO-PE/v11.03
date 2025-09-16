create table patw19af
(
  pt19drgc    char(4) default ' ' not null,
  pt19drgd    char(60) default ' ' not null,
  pt19sdmt    char(1) default ' ' not null,
  pt19mvel    char(1) default ' ' not null,
  pt19cpay    char(3) default ' ' not null,
  pt19libp    decimal(4,0) default 0 not null,
  pt19hibp    decimal(4,0) default 0 not null,
  pt19ilos    decimal(6,2) default 0 not null,
  pt19sdod    char(1) default ' ' not null,
  pt19tsdw    decimal(10,4) default 0 not null,
  pt19todw    decimal(10,4) default 0 not null,
  pt19tlom    decimal(10,4) default 0 not null,
  pt19timw    decimal(10,4) default 0 not null,
  pt19thom    decimal(10,4) default 0 not null,
  pt19thih    decimal(10,4) default 0 not null,
  pt19spar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patw19a1 on patw19af
(
pt19drgc
);
revoke all on patw19af from public ; 
grant select on patw19af to public ; 
