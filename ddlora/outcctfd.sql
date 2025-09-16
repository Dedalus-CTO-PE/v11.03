create table outcctaf
(
  otccsite    varchar2(6) default ' ' not null,
  otccctyp    varchar2(6) default ' ' not null,
  otcccont    varchar2(3) default ' ' not null,
  otcccdat    varchar2(8) default ' ' not null,
  otccctim    varchar2(8) default ' ' not null,
  otcccuid    varchar2(10) default ' ' not null,
  otccudat    varchar2(8) default ' ' not null,
  otccutim    varchar2(8) default ' ' not null,
  otccuuid    varchar2(10) default ' ' not null,
  otccspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outccta1 primary key( 
otccsite,
otccctyp,
otcccont)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
