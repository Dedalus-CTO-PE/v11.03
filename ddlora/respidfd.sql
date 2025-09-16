create table respidaf
(
repipid     varchar2(16),
repisnm     varchar2(25),
repignm     varchar2(20),
repiint     varchar2(1),
repidob     varchar2(8),
repisex     varchar2(1),
repiad1     varchar2(30),
repiad2     varchar2(30),
repiad3     varchar2(30),
repiad4     varchar2(30),
repipc      varchar2(8),
repiphh     varchar2(20),
repiphb     varchar2(20),
repispa     varchar2(30),
lf          varchar2(1),
constraint respida1 primary key( 
repipid)
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
create public synonym respidaf for respidaf;
