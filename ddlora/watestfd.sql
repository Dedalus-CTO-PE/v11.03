create table watestaf
(
wtessdat    varchar2(8),
wtesusid    varchar2(10),
wtesdate    varchar2(8),
wtestime    varchar2(8),
wtesspar    varchar2(30),
lf          varchar2(1),
constraint watesta1 primary key( 
wtessdat)
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
create public synonym watestaf for watestaf;
