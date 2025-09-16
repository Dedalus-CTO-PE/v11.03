create table respenaf
(
repekey     varchar2(32),
repeeml     varchar2(50),
repeall     number(1,0),
repeabn     number(1,0),
repeurg     number(1,0),
repespa     varchar2(50),
lf          varchar2(1),
constraint respena1 primary key( 
repekey)
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
create public synonym respenaf for respenaf;
