create table patwspaf
(
wspward     varchar2(3),
wspspec     varchar2(3),
wspnbed     number(3,0),
wspspar     varchar2(10),
lf          varchar2(1),
constraint patwspa1 primary key( 
wspward,
wspspec)
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
create public synonym patwspaf for patwspaf;
