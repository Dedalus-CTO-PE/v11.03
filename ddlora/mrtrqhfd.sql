create table mrtaudrq
(
  mrrqaudd    varchar2(8) default ' ' not null,
  mrrqaudt    varchar2(8) default ' ' not null,
  mrrqaudr    varchar2(1) default ' ' not null,
  mrrqrqno    varchar2(10) default ' ' not null,
  mrrqdaye    varchar2(8) default ' ' not null,
  mrrqtiym    varchar2(5) default ' ' not null,
  mrrqdtrq    varchar2(8) default ' ' not null,
  mrrqtmrq    varchar2(5) default ' ' not null,
  mrrqlocr    varchar2(4) default ' ' not null,
  mrrqpers    varchar2(35) default ' ' not null,
  mrrqmovr    varchar2(4) default ' ' not null,
  mrrqurgy    varchar2(3) default ' ' not null,
  mrrqcomm    varchar2(50) default ' ' not null,
  mrrqhosc    varchar2(3) default ' ' not null,
  mrrqusid    varchar2(10) default ' ' not null,
  mrrqdtup    varchar2(8) default ' ' not null,
  mrrqtmup    varchar2(5) default ' ' not null,
  mrrqusup    varchar2(10) default ' ' not null,
  mrrqextn    varchar2(20) default ' ' not null,
  mrrqpage    varchar2(20) default ' ' not null,
  mrrqtrig    varchar2(3) default ' ' not null,
  mrrqspae    varchar2(38) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index mrtaudrq on mrtaudrq
(
mrrqrqno,
mrrqaudd,
mrrqaudt,
mrrqaudr
)
tablespace pas_indx; 
create table mrtrqhaf
(
  mrrqrqno    varchar2(10) default ' ' not null,
  mrrqdaye    varchar2(8) default ' ' not null,
  mrrqtiym    varchar2(5) default ' ' not null,
  mrrqdtrq    varchar2(8) default ' ' not null,
  mrrqtmrq    varchar2(5) default ' ' not null,
  mrrqlocr    varchar2(4) default ' ' not null,
  mrrqpers    varchar2(35) default ' ' not null,
  mrrqmovr    varchar2(4) default ' ' not null,
  mrrqurgy    varchar2(3) default ' ' not null,
  mrrqcomm    varchar2(50) default ' ' not null,
  mrrqhosc    varchar2(3) default ' ' not null,
  mrrqusid    varchar2(10) default ' ' not null,
  mrrqdtup    varchar2(8) default ' ' not null,
  mrrqtmup    varchar2(5) default ' ' not null,
  mrrqusup    varchar2(10) default ' ' not null,
  mrrqextn    varchar2(20) default ' ' not null,
  mrrqpage    varchar2(20) default ' ' not null,
  mrrqtrig    varchar2(3) default ' ' not null,
  mrrqspae    varchar2(38) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtrqhr1 primary key( 
mrrqrqno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtrqhr2 on mrtrqhaf
(
mrrqdtrq,
mrrqtmrq,
mrrqrqno
)
  tablespace pas_indx; 
create unique index mrtrqhr3 on mrtrqhaf
(
mrrqhosc,
mrrqlocr,
mrrqdtrq,
mrrqtmrq,
mrrqrqno
)
  tablespace pas_indx; 
create unique index mrtrqhr4 on mrtrqhaf
(
mrrqusid,
mrrqrqno
)
  tablespace pas_indx; 
create unique index mrtrqhr5 on mrtrqhaf
(
mrrqdaye,
mrrqtiym,
mrrqrqno
)
  tablespace pas_indx; 
