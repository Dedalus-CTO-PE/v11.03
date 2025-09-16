create table pataudbc
(
  ptbcaudd    varchar2(8) default ' ' not null,
  ptbcaudt    varchar2(8) default ' ' not null,
  ptbcaudp    varchar2(2) default ' ' not null,
  ptbcaudr    varchar2(1) default ' ' not null,
  ptbcauds    number(1,0) default 0 not null,
  ptbcaudo    varchar2(4) default ' ' not null,
  ptbcclm     varchar2(3) default ' ' not null,
  ptbcbrd     varchar2(6) default ' ' not null,
  ptbcdept    varchar2(3) default ' ' not null,
  dptbcend    varchar2(3) default ' ' not null,
  ptbcdesc    varchar2(30) default ' ' not null,
  ptbcppor    number(14,2) default 0 not null,
  ptbcbpor    number(14,2) default 0 not null,
  ptbcninv    number(1,0) default 0 not null,
  ptbcspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pataudbc on pataudbc
(
ptbcaudd,
ptbcaudt,
ptbcaudp,
ptbcaudr
)
tablespace pas_indx; 
create table patbchaf
(
  ptbcclm     varchar2(3) default ' ' not null,
  ptbcbrd     varchar2(6) default ' ' not null,
  ptbcdept    varchar2(3) default ' ' not null,
  dptbcend    varchar2(3) default ' ' not null,
  ptbcdesc    varchar2(30) default ' ' not null,
  ptbcppor    number(14,2) default 0 not null,
  ptbcbpor    number(14,2) default 0 not null,
  ptbcninv    number(1,0) default 0 not null,
  ptbcspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbcha1 primary key( 
ptbcclm,
ptbcbrd,
ptbcdept,
dptbcend)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
