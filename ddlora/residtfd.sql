create table residtaf
(
reidrtyp    varchar2(3),
reidiord    varchar2(3),
reiditem    varchar2(12),
reidides    varchar2(50),
reidrity    varchar2(1),
reidrran    varchar2(1),
reidrrty    varchar2(1),
reidlrrm    number(5,2),
reidhrrm    number(5,2),
reidlrrf    number(5,2),
reidhrrf    number(5,2),
reidrrde    varchar2(25),
reidumea    varchar2(10),
reidwebc    varchar2(10),
reiddatc    varchar2(8),
reidtimc    varchar2(8),
reidwebu    varchar2(10),
reiddatu    varchar2(8),
reidtimu    varchar2(8),
reidspar    varchar2(50),
lf          varchar2(1),
constraint residta1 primary key( 
reidrtyp,
reidiord)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym residtaf for residtaf;
create unique index residta2 on residtaf
(
reiditem,
reidrtyp,
reidiord
)
  tablespace pas_indx; 
create unique index residta3 on residtaf
(
reidides,
reidrtyp,
reidiord
)
  tablespace pas_indx; 
