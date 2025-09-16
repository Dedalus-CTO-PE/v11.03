create table rcpcmnaf
(
  rccmrecn    varchar2(12) default ' ' not null,
  rccmtcnt    varchar2(5) default ' ' not null,
  rccmlnno    varchar2(3) default ' ' not null,
  rccmlnda    varchar2(100) default ' ' not null,
  rccmcrdt    varchar2(8) default ' ' not null,
  rccmcrtm    varchar2(8) default ' ' not null,
  rccmcrud    varchar2(10) default ' ' not null,
  rccmupdt    varchar2(8) default ' ' not null,
  rccmuptm    varchar2(8) default ' ' not null,
  rccmupud    varchar2(10) default ' ' not null,
  rccmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpcmna1 primary key( 
rccmrecn,
rccmtcnt,
rccmlnno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
