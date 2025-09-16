create table aaeaudbc
(
  aebcaudd    varchar2(8) default ' ' not null,
  aebcaudt    varchar2(8) default ' ' not null,
  aebcaudp    varchar2(2) default ' ' not null,
  aebcaudr    varchar2(1) default ' ' not null,
  aebcauds    number(1,0) default 0 not null,
  aebcaudo    varchar2(4) default ' ' not null,
  aebcclm     varchar2(3) default ' ' not null,
  aebcbrd     varchar2(6) default ' ' not null,
  daebcage    varchar2(3) default ' ' not null,
  daebcnvi    varchar2(3) default ' ' not null,
  aebcdesc    varchar2(30) default ' ' not null,
  aebcptpo    number(14,2) default 0 not null,
  aebcbdpo    number(14,2) default 0 not null,
  aebcninv    number(1,0) default 0 not null,
  aebcitem    varchar2(3) default ' ' not null,
  aebcspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index aaeaudbc on aaeaudbc
(
aebcaudd,
aebcaudt,
aebcaudp,
aebcaudr
)
tablespace pas_indx; 
create table aaebchaf
(
  aebcclm     varchar2(3) default ' ' not null,
  aebcbrd     varchar2(6) default ' ' not null,
  daebcage    varchar2(3) default ' ' not null,
  daebcnvi    varchar2(3) default ' ' not null,
  aebcdesc    varchar2(30) default ' ' not null,
  aebcptpo    number(14,2) default 0 not null,
  aebcbdpo    number(14,2) default 0 not null,
  aebcninv    number(1,0) default 0 not null,
  aebcitem    varchar2(3) default ' ' not null,
  aebcspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaebcha1 primary key( 
aebcclm,
aebcbrd,
daebcage,
daebcnvi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
