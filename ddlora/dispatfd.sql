create table dispataf
(
  dspturno    varchar2(8) default ' ' not null,
  dsptdiid    varchar2(20) default ' ' not null,
  dsptcode    varchar2(9) default ' ' not null,
  dsptsdat    varchar2(8) default ' ' not null,
  dsptstim    varchar2(8) default ' ' not null,
  dsptedat    varchar2(8) default ' ' not null,
  dsptetim    varchar2(8) default ' ' not null,
  dsptotcm    varchar2(3) default ' ' not null,
  dsptfica    varchar2(2) default ' ' not null,
  dsptcusr    varchar2(10) default ' ' not null,
  dsptcdat    varchar2(8) default ' ' not null,
  dsptctim    varchar2(8) default ' ' not null,
  dsptuusr    varchar2(10) default ' ' not null,
  dsptudat    varchar2(8) default ' ' not null,
  dsptutim    varchar2(8) default ' ' not null,
  dsptspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint dispata1 primary key( 
dspturno,
dsptcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index dispata2 on dispataf
(
dsptcode,
dspturno
)
  tablespace pas_indx; 
