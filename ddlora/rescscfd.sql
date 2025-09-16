create table rescscaf
(
recscsc     varchar2(12),
recsdes     varchar2(40),
recsur1     varchar2(25),
recsur2     varchar2(25),
recsud1     varchar2(8),
recsud2     varchar2(8),
recsuy1     varchar2(1),
recsuy2     varchar2(1),
recsspa     varchar2(20),
lf          varchar2(1),
constraint rescsca1 primary key( 
recscsc)
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
create public synonym rescscaf for rescscaf;
