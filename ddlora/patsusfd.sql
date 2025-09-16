create table patsusaf
(
ptssurno    varchar2(8),
ptssfdat    varchar2(8),
ptsstdat    varchar2(8),
ptssrfcs    varchar2(3),
ptssreas    varchar2(3),
ptsswebc    varchar2(10),
ptssdatc    varchar2(8),
ptsstimc    varchar2(8),
ptsswebu    varchar2(10),
ptssdatu    varchar2(8),
ptsstimu    varchar2(8),
ptsscom1    varchar2(100),
ptsscom2    varchar2(100),
ptssspar    varchar2(50),
lf          varchar2(1),
constraint patsusa1 primary key( 
ptssurno,
ptssfdat)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym patsusaf for patsusaf;
