create table webrgmaf
(
wbrggrid    varchar2(5),
wbrgdesc    varchar2(35),
wbrgspar    varchar2(80),
lf          varchar2(1),
constraint webrgma1 primary key( 
wbrggrid)
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
create public synonym webrgmaf for webrgmaf;
