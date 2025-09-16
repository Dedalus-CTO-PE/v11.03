create table pmsdvaaf
(
  pmdvacat    varchar2(2) default ' ' not null,
  pmdvacod    varchar2(3) default ' ' not null,
  pmdvserv    varchar2(9) default ' ' not null,
  pmdvspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsdvaa1 primary key( 
pmdvacat,
pmdvacod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsdvaaf for pmsdvaaf;
