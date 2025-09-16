create table mrtaudrq
(
  mrrqaudd    char(8) default ' ' not null,
  mrrqaudt    char(8) default ' ' not null,
  mrrqaudr    char(1) default ' ' not null,
  mrrqrqno    char(10) default ' ' not null,
  mrrqdaye    char(8) default ' ' not null,
  mrrqtiym    char(5) default ' ' not null,
  mrrqdtrq    char(8) default ' ' not null,
  mrrqtmrq    char(5) default ' ' not null,
  mrrqlocr    char(4) default ' ' not null,
  mrrqpers    char(35) default ' ' not null,
  mrrqmovr    char(4) default ' ' not null,
  mrrqurgy    char(3) default ' ' not null,
  mrrqcomm    char(50) default ' ' not null,
  mrrqhosc    char(3) default ' ' not null,
  mrrqusid    char(10) default ' ' not null,
  mrrqdtup    char(8) default ' ' not null,
  mrrqtmup    char(5) default ' ' not null,
  mrrqusup    char(10) default ' ' not null,
  mrrqextn    char(20) default ' ' not null,
  mrrqpage    char(20) default ' ' not null,
  mrrqtrig    char(3) default ' ' not null,
  mrrqspae    char(38) default ' ' not null,
  lf          char(1)
);
create index mrtaudrq on mrtaudrq
(
mrrqrqno,
mrrqaudd,
mrrqaudt,
mrrqaudr
);
revoke all on mrtaudrq from public ; 
grant select on mrtaudrq to public ; 
create table mrtrqhaf
(
  mrrqrqno    char(10) default ' ' not null,
  mrrqdaye    char(8) default ' ' not null,
  mrrqtiym    char(5) default ' ' not null,
  mrrqdtrq    char(8) default ' ' not null,
  mrrqtmrq    char(5) default ' ' not null,
  mrrqlocr    char(4) default ' ' not null,
  mrrqpers    char(35) default ' ' not null,
  mrrqmovr    char(4) default ' ' not null,
  mrrqurgy    char(3) default ' ' not null,
  mrrqcomm    char(50) default ' ' not null,
  mrrqhosc    char(3) default ' ' not null,
  mrrqusid    char(10) default ' ' not null,
  mrrqdtup    char(8) default ' ' not null,
  mrrqtmup    char(5) default ' ' not null,
  mrrqusup    char(10) default ' ' not null,
  mrrqextn    char(20) default ' ' not null,
  mrrqpage    char(20) default ' ' not null,
  mrrqtrig    char(3) default ' ' not null,
  mrrqspae    char(38) default ' ' not null,
  lf          char(1)
);
create unique index mrtrqhr1 on mrtrqhaf
(
mrrqrqno
);
create unique index mrtrqhr2 on mrtrqhaf
(
mrrqdtrq,
mrrqtmrq,
mrrqrqno
);
create unique index mrtrqhr3 on mrtrqhaf
(
mrrqhosc,
mrrqlocr,
mrrqdtrq,
mrrqtmrq,
mrrqrqno
);
create unique index mrtrqhr4 on mrtrqhaf
(
mrrqusid,
mrrqrqno
);
create unique index mrtrqhr5 on mrtrqhaf
(
mrrqdaye,
mrrqtiym,
mrrqrqno
);
revoke all on mrtrqhaf from public ; 
grant select on mrtrqhaf to public ; 
