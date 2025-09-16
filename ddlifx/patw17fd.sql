create table patw17af
(
  pt17drgc    char(4) default ' ' not null,
  pt17drgd    char(60) default ' ' not null,
  pt17sdmt    char(1) default ' ' not null,
  pt17mvel    char(1) default ' ' not null,
  pt17cpay    char(3) default ' ' not null,
  pt17libp    decimal(4,0) default 0 not null,
  pt17hibp    decimal(4,0) default 0 not null,
  pt17ilos    decimal(6,2) default 0 not null,
  pt17sdod    char(1) default ' ' not null,
  pt17tsdw    decimal(10,4) default 0 not null,
  pt17todw    decimal(10,4) default 0 not null,
  pt17tlom    decimal(10,4) default 0 not null,
  pt17timw    decimal(10,4) default 0 not null,
  pt17thom    decimal(10,4) default 0 not null,
  pt17thih    decimal(10,4) default 0 not null,
  pt17spar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patw17a1 on patw17af
(
pt17drgc
);
revoke all on patw17af from public ; 
grant select on patw17af to public ; 
