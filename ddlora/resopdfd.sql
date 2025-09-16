create table resopdaf
(
reopsch     varchar2(10),
reopoid     varchar2(10),
reopsnm     varchar2(25),
reopgnm     varchar2(20),
reopint     varchar2(1),
reopspa     varchar2(30),
lf          varchar2(1),
constraint resopda1 primary key( 
reopsch,
reopoid)
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
create public synonym resopdaf for resopdaf;
