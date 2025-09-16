create table mltsitaf
(
  mlstusid    varchar2(10) default ' ' not null,
  mlstsite    varchar2(6) default ' ' not null,
  mlstspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mltsita1 primary key( 
mlstusid,
mlstsite)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
