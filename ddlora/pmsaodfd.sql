create table pmsaodaf
(
pmaocode    varchar2(6),
pmaolcnt    varchar2(3),
pmaoline    varchar2(100),
pmaospar    varchar2(30),
lf          varchar2(1),
constraint pmsaoda1 primary key( 
pmaocode,
pmaolcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsaodaf for pmsaodaf;
