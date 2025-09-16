create table pmsoesaf
(
pmosvisn    varchar2(8),
pmoscntr    varchar2(3),
pmosscnt    varchar2(3),
pmosrtyp    varchar2(1),
pmositem    varchar2(9),
pmosquan    varchar2(3),
pmospdte    varchar2(8),
pmoscdte    varchar2(8),
pmosctim    varchar2(8),
pmosspar    varchar2(30),
lf          varchar2(1),
constraint pmsoesa1 primary key( 
pmosvisn,
pmoscntr,
pmosscnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsoesaf for pmsoesaf;
