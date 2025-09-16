create table outcmnaf
(
  otcmtdat    varchar2(8) default ' ' not null,
  otcmfdat    varchar2(8) default ' ' not null,
  otcmcono    varchar2(3) default ' ' not null,
  otcmcom1    varchar2(60) default ' ' not null,
  otcmcom2    varchar2(60) default ' ' not null,
  otcmcom3    varchar2(60) default ' ' not null,
  otcmcom4    varchar2(60) default ' ' not null,
  otcmsite    varchar2(6) default ' ' not null,
  otcmclin    varchar2(6) default ' ' not null,
  otcmcdat    varchar2(8) default ' ' not null,
  otcmctim    varchar2(8) default ' ' not null,
  otcmcuid    varchar2(10) default ' ' not null,
  otcmspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outcmna1 primary key( 
otcmtdat,
otcmfdat,
otcmcono)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
