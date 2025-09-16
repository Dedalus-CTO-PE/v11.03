create table pmsdtcaf
(
  pmdtvisn    varchar2(8) default ' ' not null,
  pmdtdoct    varchar2(10) default ' ' not null,
  pmdtunit    varchar2(3) default ' ' not null,
  pmdtsdat    varchar2(8) default ' ' not null,
  pmdtstim    varchar2(8) default ' ' not null,
  pmdtedat    varchar2(8) default ' ' not null,
  pmdtetim    varchar2(8) default ' ' not null,
  pmdtcdat    varchar2(8) default ' ' not null,
  pmdtctim    varchar2(8) default ' ' not null,
  pmdtcuid    varchar2(10) default ' ' not null,
  pmdtudat    varchar2(8) default ' ' not null,
  pmdtutim    varchar2(8) default ' ' not null,
  pmdtuuid    varchar2(10) default ' ' not null,
  pmdtteam    varchar2(5) default ' ' not null,
  pmdtspar    varchar2(45) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsdtca1 primary key( 
pmdtvisn,
pmdtsdat,
pmdtstim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
