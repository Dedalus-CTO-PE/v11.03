create table pmsdslaf
(
pmdlseli    varchar2(4),
pmdlhcpc    varchar2(10),
pmdldlst    varchar2(1),
pmdlspar    varchar2(20),
lf          varchar2(1),
constraint pmsdsla1 primary key( 
pmdlseli,
pmdlhcpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsdslaf for pmsdslaf;
