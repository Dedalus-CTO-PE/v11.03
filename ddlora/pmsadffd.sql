create table pmsadfaf
(
pmafcode    varchar2(6),
pmafline    varchar2(3),
pmafdata    varchar2(100),
pmafspar    varchar2(30),
lf          varchar2(1),
constraint pmsadfa1 primary key( 
pmafcode,
pmafline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsadfaf for pmsadfaf;
