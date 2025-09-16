create table pmsosdaf
(
pmodurno    varchar2(8),
pmodwebu    varchar2(10),
pmodspar    varchar2(70),
lf          varchar2(1),
constraint pmsosda1 primary key( 
pmodurno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsosdaf for pmsosdaf;
