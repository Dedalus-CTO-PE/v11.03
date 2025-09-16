create table reslabaf
(
relblcd     varchar2(3),
relbdes     varchar2(40),
relblrn     number(4,0),
relbeml     varchar2(50),
relbhem     varchar2(50),
relbmid     number(8,0),
relbsap     varchar2(10),
relbspa     varchar2(20),
lf          varchar2(1),
constraint reslaba1 primary key( 
relblcd)
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
create public synonym reslabaf for reslabaf;
