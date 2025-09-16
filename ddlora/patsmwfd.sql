create table patsmwaf
(
ptmwurno    varchar2(8),
ptmwclss    varchar2(3),
dptmwcnt    varchar2(3),
ptmwdate    varchar2(8),
ptmwtext    varchar2(70),
ptmwmarc    varchar2(8),
ptmwhosp    varchar2(20),
ptmwdoct    varchar2(5),
ptmwsys     number(2,0),
ptmwcode    varchar2(9),
ptmwlupd    varchar2(14),
ptmwspar    varchar2(24),
lf          varchar2(1),
constraint patsmwa1 primary key( 
ptmwurno,
ptmwclss,
dptmwcnt)
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
create public synonym patsmwaf for patsmwaf;
