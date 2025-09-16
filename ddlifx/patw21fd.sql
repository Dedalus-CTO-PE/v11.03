create table patw21af
(
  pt21drgc    char(4) default ' ' not null,
  pt21drgd    char(60) default ' ' not null,
  pt21sdmt    char(1) default ' ' not null,
  pt21mvel    char(1) default ' ' not null,
  pt21cpay    char(3) default ' ' not null,
  pt21libp    decimal(4,0) default 0 not null,
  pt21hibp    decimal(4,0) default 0 not null,
  pt21ilos    decimal(6,2) default 0 not null,
  pt21sdod    char(1) default ' ' not null,
  pt21tsdw    decimal(10,4) default 0 not null,
  pt21todw    decimal(10,4) default 0 not null,
  pt21tlom    decimal(10,4) default 0 not null,
  pt21timw    decimal(10,4) default 0 not null,
  pt21thom    decimal(10,4) default 0 not null,
  pt21thih    decimal(10,4) default 0 not null,
  pt21spar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patw21a1 on patw21af
(
pt21drgc
);
revoke all on patw21af from public ; 
grant select on patw21af to public ; 
