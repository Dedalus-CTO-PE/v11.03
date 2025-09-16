create table pmsgpaaf
(
pmgpurno    varchar2(8),
pmgpwebu    varchar2(10),
pmgpugpc    varchar2(10),
pmgppgpc    varchar2(10),
pmgppprc    varchar2(10),
pmgpovrs    varchar2(3),
pmgpovt1    varchar2(80),
pmgpovt2    varchar2(80),
pmgpovt3    varchar2(80),
pmgpovt4    varchar2(80),
pmgpdatc    varchar2(8),
pmgptimc    varchar2(8),
pmgpspar    varchar2(50),
lf          varchar2(1),
constraint pmsgpaa1 primary key( 
pmgpurno,
pmgpwebu,
pmgpdatc,
pmgptimc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsgpaaf for pmsgpaaf;
create unique index pmsgpaa2 on pmsgpaaf
(
pmgpdatc,
pmgptimc,
pmgpurno,
pmgpwebu
)
  tablespace pas_indx; 
