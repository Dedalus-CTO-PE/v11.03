create table patwssaf
(
wssdate     varchar2(6),
wssward     varchar2(3),
wssspec     varchar2(3),
wssadmn     number(6,0),
wsstrin     number(6,0),
wssdocs     number(6,0),
wssbday     number(8,0),
wssdsch     number(6,0),
wsstout     number(6,0),
wssspar     varchar2(26),
lf          varchar2(1),
constraint patwssa1 primary key( 
wssdate,
wssward,
wssspec)
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
create public synonym patwssaf for patwssaf;
