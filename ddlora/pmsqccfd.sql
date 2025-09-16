create table pmsqccaf
(
dpmqcmes    varchar2(20),
pmcdurno    varchar2(8),
pmcdctyp    varchar2(3),
pmcdcnum    varchar2(20),
pmcdexdt    varchar2(8),
pmqcspar    varchar2(20),
lf          varchar2(1),
constraint pmsqcca1 primary key( 
dpmqcmes)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmsqccaf for pmsqccaf;
