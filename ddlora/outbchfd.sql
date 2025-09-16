create table outaudbc
(
  otbcaudd    varchar2(8) default ' ' not null,
  otbcaudt    varchar2(8) default ' ' not null,
  otbcaudp    varchar2(2) default ' ' not null,
  otbcaudr    varchar2(1) default ' ' not null,
  otbcauds    number(1,0) default 0 not null,
  otbcaudo    varchar2(4) default ' ' not null,
  otbcclm     varchar2(3) default ' ' not null,
  otbcbrd     varchar2(6) default ' ' not null,
  otbcdept    varchar2(3) default ' ' not null,
  dotbcage    varchar2(3) default ' ' not null,
  dotbcnvi    varchar2(3) default ' ' not null,
  otbcdesc    varchar2(30) default ' ' not null,
  dotbcppo    number(14,2) default 0 not null,
  dotbcbpo    number(14,2) default 0 not null,
  otbcninv    number(1,0) default 0 not null,
  otbcitem    varchar2(3) default ' ' not null,
  otbcspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index outaudbc on outaudbc
(
otbcaudd,
otbcaudt,
otbcaudp,
otbcaudr
)
tablespace pas_indx; 
create table outbchaf
(
  otbcclm     varchar2(3) default ' ' not null,
  otbcbrd     varchar2(6) default ' ' not null,
  otbcdept    varchar2(3) default ' ' not null,
  dotbcage    varchar2(3) default ' ' not null,
  dotbcnvi    varchar2(3) default ' ' not null,
  otbcdesc    varchar2(30) default ' ' not null,
  dotbcppo    number(14,2) default 0 not null,
  dotbcbpo    number(14,2) default 0 not null,
  otbcninv    number(1,0) default 0 not null,
  otbcitem    varchar2(3) default ' ' not null,
  otbcspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outbcha1 primary key( 
otbcclm,
otbcbrd,
otbcdept,
dotbcage,
dotbcnvi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
