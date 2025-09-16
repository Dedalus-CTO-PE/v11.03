create table pmsqitaf
(
dpmqimes    varchar2(20),
pmqitran    varchar2(6),
pmqiitem    varchar2(9),
pmqitdat    varchar2(8),
pmqiserv    number(5,0),
pmqittyp    varchar2(1),
pmqidoct    varchar2(10),
pmqisess    varchar2(2),
pmqiamnt    number(14,2),
pmqigstc    varchar2(6),
pmqihfnd    varchar2(6),
pmqistim    varchar2(8),
pmqispar    varchar2(21),
lf          varchar2(1),
constraint pmsqita1 primary key( 
dpmqimes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsqitaf for pmsqitaf;
