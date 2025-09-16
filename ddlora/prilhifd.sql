create table prilhisf
(
prlhdebt    varchar2(8),
dprlhscn    varchar2(2),
prlhdate    varchar2(8),
dprlhnum    varchar2(3),
prlhspar    varchar2(8),
lf          varchar2(1),
constraint prilhis1 primary key( 
prlhdebt,
dprlhscn,
prlhdate,
dprlhnum)
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
create public synonym prilhisf for prilhisf;
