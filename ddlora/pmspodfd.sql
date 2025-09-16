create table pmspodaf
(
pmpovisn    varchar2(8),
pmpocode    varchar2(6),
pmpoocnt    varchar2(3),
pmpograd    varchar2(1),
pmpodelt    varchar2(1),
pmpouniq    varchar2(10),
pmpowebc    varchar2(10),
pmpodatc    varchar2(8),
pmpotimc    varchar2(8),
pmpowebu    varchar2(10),
pmpodatu    varchar2(8),
pmpotimu    varchar2(8),
pmpospar    varchar2(30),
lf          varchar2(1),
constraint pmspoda1 primary key( 
pmpovisn,
pmpoocnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmspodaf for pmspodaf;
