create table ccidptaf
(
  ccdtdept    varchar2(3) default ' ' not null,
  ccdtserv    varchar2(2) default ' ' not null,
  ccdtlong    varchar2(1) default ' ' not null,
  ccdtcsdp    varchar2(4) default ' ' not null,
  dccdtlsd    varchar2(2) default ' ' not null,
  ccdttrcs    varchar2(5) default ' ' not null,
  ccdtspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccidpta1 primary key( 
ccdtdept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
