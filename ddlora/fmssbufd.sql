create table fmsaudst
(
  fmstaudd    varchar2(8) default ' ' not null,
  fmstaudt    varchar2(8) default ' ' not null,
  fmstaudp    varchar2(2) default ' ' not null,
  fmstaudr    varchar2(1) default ' ' not null,
  fmstauds    number(1,0) default 0 not null,
  fmstaudo    varchar2(4) default ' ' not null,
  fmstculd    varchar2(2) default ' ' not null,
  fmstcuac    varchar2(12) default ' ' not null,
  fmstcupr    varchar2(3) default ' ' not null,
  fmstca01    number(17,5) default 0 not null,
  fmstca02    number(17,5) default 0 not null,
  fmstca03    number(17,5) default 0 not null,
  fmstca04    number(17,5) default 0 not null,
  fmstca05    number(17,5) default 0 not null,
  fmstca06    number(17,5) default 0 not null,
  fmstca07    number(17,5) default 0 not null,
  fmstca08    number(17,5) default 0 not null,
  fmstca09    number(17,5) default 0 not null,
  fmstca10    number(17,5) default 0 not null,
  fmstca11    number(17,5) default 0 not null,
  fmstca12    number(17,5) default 0 not null,
  fmstca13    number(17,5) default 0 not null,
  fmstcusp    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index fmsaudst on fmsaudst
(
fmstaudd,
fmstaudt,
fmstaudp,
fmstaudr
)
tablespace pas_indx; 
create table fmscxxxx
(
  fmstculd    varchar2(2) default ' ' not null,
  fmstcuac    varchar2(12) default ' ' not null,
  fmstcupr    varchar2(3) default ' ' not null,
  fmstca01    number(17,5) default 0 not null,
  fmstca02    number(17,5) default 0 not null,
  fmstca03    number(17,5) default 0 not null,
  fmstca04    number(17,5) default 0 not null,
  fmstca05    number(17,5) default 0 not null,
  fmstca06    number(17,5) default 0 not null,
  fmstca07    number(17,5) default 0 not null,
  fmstca08    number(17,5) default 0 not null,
  fmstca09    number(17,5) default 0 not null,
  fmstca10    number(17,5) default 0 not null,
  fmstca11    number(17,5) default 0 not null,
  fmstca12    number(17,5) default 0 not null,
  fmstca13    number(17,5) default 0 not null,
  fmstcusp    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmssbua1 primary key( 
fmstculd,
fmstcuac)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmssbua2 on fmscxxxx
(
fmstcupr,
fmstculd,
fmstcuac
)
  tablespace pas_indx; 
