create table sindpcaf
(
  sidpcode    varchar2(3) default ' ' not null,
  sidpadd1    varchar2(40) default ' ' not null,
  sidpadd2    varchar2(40) default ' ' not null,
  sidpactv    varchar2(1) default ' ' not null,
  sidpspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sindpca1 primary key( 
sidpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
