create table pmseedaf
(
pmdearid    varchar2(20),
pmderptc    varchar2(3),
pmdecfec    varchar2(4),
pmdeexpc    varchar2(3),
pmdecfet    varchar2(80),
pmdectid    varchar2(24),
pmdespar    varchar2(30),
lf          varchar2(1),
constraint pmseeda1 primary key( 
pmdearid,
pmderptc,
pmdecfec,
pmdeexpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmseedaf for pmseedaf;
