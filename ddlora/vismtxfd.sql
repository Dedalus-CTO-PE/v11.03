create table vismtxaf
(
vsmtvisn    varchar2(8),
vsmttype    varchar2(3),
vsmtnote    varchar2(6),
vsmtuniq    varchar2(3),
vsmtcmnt    varchar2(100),
vsmtspar    varchar2(30),
lf          varchar2(1),
constraint vismtxa1 primary key( 
vsmtvisn,
vsmttype,
vsmtnote,
vsmtuniq)
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
create public synonym vismtxaf for vismtxaf;
