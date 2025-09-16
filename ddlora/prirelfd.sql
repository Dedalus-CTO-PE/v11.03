create table prirelaf
(
prrlseid    varchar2(4),
prrlname    varchar2(30),
prrldebt    varchar2(8),
prrlivno    varchar2(8),
prrlscan    varchar2(2),
prrlstat    varchar2(1),
prrlspar    varchar2(20),
lf          varchar2(1),
constraint prirela1 primary key( 
prrlseid,
prrlname,
prrldebt,
prrlivno)
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
create public synonym prirelaf for prirelaf;
