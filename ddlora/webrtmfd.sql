create table webrtmaf
(
wbrtprid    varchar2(8),
wbrttmnm    varchar2(3),
wbrtdesc    varchar2(35),
wbrtspid    varchar2(50),
wbrtspar    varchar2(80),
lf          varchar2(1),
constraint webrtma1 primary key( 
wbrtprid,
wbrttmnm)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym webrtmaf for webrtmaf;
