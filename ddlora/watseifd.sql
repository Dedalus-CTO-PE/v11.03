create table watseiaf
(
wtsicons    varchar2(6),
wtsiltyp    varchar2(3),
wtsiuser    varchar2(4),
wtsispar    varchar2(30),
lf          varchar2(1),
constraint watseia1 primary key( 
wtsicons,
wtsiltyp,
wtsiuser)
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
create public synonym watseiaf for watseiaf;
create unique index watseia2 on watseiaf
(
wtsiuser,
wtsicons,
wtsiltyp
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
