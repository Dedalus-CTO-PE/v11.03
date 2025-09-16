create table visctmaf
(
vscmtem     varchar2(3),
vscmunq     varchar2(3),
vscmcmt     varchar2(70),
vscmspa     varchar2(30),
lf          varchar2(1),
constraint visctma1 primary key( 
vscmtem,
vscmunq)
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
create public synonym visctmaf for visctmaf;
