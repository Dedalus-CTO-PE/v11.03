create table pmsailaf
(
pmaladmn    varchar2(8),
pmalfino    varchar2(12),
pmalspar    varchar2(30),
lf          varchar2(1),
constraint pmsaila1 primary key( 
pmaladmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsailaf for pmsailaf;
create unique index pmsaila2 on pmsailaf
(
pmalfino,
pmaladmn
)
  tablespace pas_indx; 
