create table pmsmdtaf
(
pmmdurno    varchar2(8),
pmmdnote    varchar2(6),
pmmddate    varchar2(8),
pmmdtime    varchar2(8),
pmmduser    varchar2(10),
pmmdoccg    varchar2(3),
pmmddelt    varchar2(1),
pmmdddat    varchar2(8),
pmmddtim    varchar2(8),
pmmdduse    varchar2(10),
pmmddocc    varchar2(3),
pmmdspar    varchar2(98),
lf          varchar2(1),
constraint pmsmdta1 primary key( 
pmmdurno,
pmmdnote)
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
create public synonym pmsmdtaf for pmsmdtaf;
