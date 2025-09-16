create table pmsboraf
(
pmbofiel    varchar2(8),
pmboflno    varchar2(3),
pmbodeft    varchar2(1),
pmbocode    varchar2(10),
pmbospar    varchar2(50),
lf          varchar2(1),
constraint pmsbora1 primary key( 
pmbofiel)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsboraf for pmsboraf;
create unique index pmsbora2 on pmsboraf
(
pmboflno
)
  tablespace pas_indx; 
