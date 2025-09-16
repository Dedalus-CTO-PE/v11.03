create table primgpaf
(
prmgdate    varchar2(8),
prmgvalu    number(5,2),
prmgspar    varchar2(40),
lf          varchar2(1),
constraint primgpa1 primary key( 
prmgdate)
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
create public synonym primgpaf for primgpaf;
