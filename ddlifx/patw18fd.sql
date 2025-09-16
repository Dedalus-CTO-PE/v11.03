create table patw18af
(
  pt18drgc    char(4) default ' ' not null,
  pt18drgd    char(60) default ' ' not null,
  pt18sdmt    char(1) default ' ' not null,
  pt18mvel    char(1) default ' ' not null,
  pt18cpay    char(3) default ' ' not null,
  pt18libp    decimal(4,0) default 0 not null,
  pt18hibp    decimal(4,0) default 0 not null,
  pt18ilos    decimal(6,2) default 0 not null,
  pt18sdod    char(1) default ' ' not null,
  pt18tsdw    decimal(10,4) default 0 not null,
  pt18todw    decimal(10,4) default 0 not null,
  pt18tlom    decimal(10,4) default 0 not null,
  pt18timw    decimal(10,4) default 0 not null,
  pt18thom    decimal(10,4) default 0 not null,
  pt18thih    decimal(10,4) default 0 not null,
  pt18spar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patw18a1 on patw18af
(
pt18drgc
);
revoke all on patw18af from public ; 
grant select on patw18af to public ; 
