create table hl7fagaf
(
  hlagrsid    varchar2(64) default ' ' not null,
  hlagvrid    varchar2(10) default ' ' not null,
  hlagcnt1    varchar2(4) default ' ' not null,
  hlagrare    varchar2(200) default ' ' not null,
  hlagraty    varchar2(255) default ' ' not null,
  hlagradi    varchar2(200) default ' ' not null,
  hlagraus    varchar2(50) default ' ' not null,
  hlagrisy    varchar2(255) default ' ' not null,
  hlagriva    varchar2(200) default ' ' not null,
  hlagritx    varchar2(200) default ' ' not null,
  hlagrcsy    varchar2(255) default ' ' not null,
  hlagrcve    varchar2(200) default ' ' not null,
  hlagrcco    varchar2(50) default ' ' not null,
  hlagrcdi    varchar2(200) default ' ' not null,
  hlagrcus    varchar2(10) default ' ' not null,
  hlagrpst    varchar2(40) default ' ' not null,
  hlagrren    varchar2(40) default ' ' not null,
  hlagspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7faga1 primary key( 
hlagrsid,
hlagvrid,
hlagcnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
