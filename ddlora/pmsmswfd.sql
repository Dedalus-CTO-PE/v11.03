create table pmsmswaf
(
pmmwhosp    varchar2(3),
pmmwward    varchar2(3),
pmmwbedc    varchar2(3),
pmmwwcls    varchar2(3),
pmmwordp    varchar2(2),
pmmwwebc    varchar2(10),
pmmwdatc    varchar2(8),
pmmwtimc    varchar2(8),
pmmwwebu    varchar2(10),
pmmwdatu    varchar2(8),
pmmwtimu    varchar2(8),
pmmwspar    varchar2(30),
lf          varchar2(1),
constraint pmsmswa1 primary key( 
pmmwhosp,
pmmwward,
pmmwbedc,
pmmwwcls)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsmswaf for pmsmswaf;
create unique index pmsmswa2 on pmsmswaf
(
pmmwhosp,
pmmwward,
pmmwbedc,
pmmwordp,
pmmwwcls
)
  tablespace pas_indx; 
