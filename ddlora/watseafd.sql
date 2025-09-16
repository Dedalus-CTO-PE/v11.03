create table watseaaf
(
wtsauser    varchar2(4),
wtsaspar    varchar2(30),
lf          varchar2(1),
constraint watseaa1 primary key( 
wtsauser)
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
create public synonym watseaaf for watseaaf;
