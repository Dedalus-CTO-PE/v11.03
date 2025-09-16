create table pmssinaf
(
pmsicode    varchar2(3),
pmsifund    varchar2(6),
pmsitblt    varchar2(3),
pmsicscd    varchar2(9),
pmsibkcd    varchar2(3),
pmsiamnt    number(14,2),
pmsicnid    varchar2(6),
pmsispar    varchar2(24),
lf          varchar2(1),
constraint pmssina1 primary key( 
pmsicnid,
pmsicode,
pmsifund,
pmsitblt,
pmsicscd,
pmsibkcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmssinaf for pmssinaf;
