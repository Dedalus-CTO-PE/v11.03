create table fmsnrixx
(
  fmnirept    varchar2(3) default ' ' not null,
  fmniacct    varchar2(12) default ' ' not null,
  fmnitype    varchar2(1) default ' ' not null,
  fmnipebr    number(17,5) default 0 not null,
  fmnipece    number(17,5) default 0 not null,
  fmnipe01    number(17,5) default 0 not null,
  fmnipe02    number(17,5) default 0 not null,
  fmnipe03    number(17,5) default 0 not null,
  fmnipe04    number(17,5) default 0 not null,
  fmnipe05    number(17,5) default 0 not null,
  fmnipe06    number(17,5) default 0 not null,
  fmnipe07    number(17,5) default 0 not null,
  fmnipe08    number(17,5) default 0 not null,
  fmnipe09    number(17,5) default 0 not null,
  fmnipe10    number(17,5) default 0 not null,
  fmnipe11    number(17,5) default 0 not null,
  fmnipe12    number(17,5) default 0 not null,
  fmnipe13    number(17,5) default 0 not null,
  fmnispar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnria1 primary key( 
fmnirept,
fmniacct,
fmnitype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
