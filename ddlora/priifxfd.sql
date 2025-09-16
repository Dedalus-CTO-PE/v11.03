create table priifxaf
(
  prifinvn    varchar2(8) default ' ' not null,
  prifctyp    varchar2(3) default ' ' not null,
  prifnote    varchar2(6) default ' ' not null,
  prifline    varchar2(3) default ' ' not null,
  prifcmnt    varchar2(100) default ' ' not null,
  prifspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priifxa1 primary key( 
prifinvn,
prifctyp,
prifnote,
prifline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
