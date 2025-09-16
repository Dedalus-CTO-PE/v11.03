create table pmscdmaf
(
pmdmurno    varchar2(8),
pmdmstat    varchar2(1),
pmdmpw01    varchar2(5),
pmdmpw02    varchar2(5),
pmdmpw03    varchar2(5),
pmdmpw04    varchar2(5),
pmdmpw05    varchar2(5),
pmdmpw06    varchar2(5),
pmdmpw07    varchar2(5),
pmdmpw08    varchar2(5),
pmdmpw09    varchar2(5),
pmdmpw10    varchar2(5),
pmdmspar    varchar2(50),
lf          varchar2(1),
constraint pmscdma1 primary key( 
pmdmurno)
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
create public synonym pmscdmaf for pmscdmaf;
