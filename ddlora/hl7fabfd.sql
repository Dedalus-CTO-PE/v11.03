create table hl7fabaf
(
  hlabrsid    varchar2(64) default ' ' not null,
  hlabvrid    varchar2(10) default ' ' not null,
  hlabcnt1    varchar2(4) default ' ' not null,
  hlabpref    varchar2(200) default ' ' not null,
  hlabptyp    varchar2(255) default ' ' not null,
  hlabpdis    varchar2(255) default ' ' not null,
  hlabpidu    varchar2(50) default ' ' not null,
  hlabpsys    varchar2(255) default ' ' not null,
  hlabpivl    varchar2(200) default ' ' not null,
  hlabpids    varchar2(255) default ' ' not null,
  hlabpidv    varchar2(200) default ' ' not null,
  hlabpidc    varchar2(50) default ' ' not null,
  hlabpidd    varchar2(200) default ' ' not null,
  hlabpius    varchar2(10) default ' ' not null,
  hlabpidt    varchar2(200) default ' ' not null,
  hlabpips    varchar2(40) default ' ' not null,
  hlabpipe    varchar2(40) default ' ' not null,
  hlabspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7faba1 primary key( 
hlabrsid,
hlabvrid,
hlabcnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
