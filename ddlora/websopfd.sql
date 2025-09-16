create table websopaf
(
wbsoprg     varchar2(8),
wbsoopt     varchar2(2),
wbsodes     varchar2(35),
wbsour1     varchar2(30),
wbsour2     varchar2(30),
wbsoud1     varchar2(8),
wbsoud2     varchar2(8),
wbsouy1     varchar2(1),
wbsouy2     varchar2(1),
wbsospa     varchar2(20),
lf          varchar2(1),
constraint websopa1 primary key( 
wbsoprg,
wbsoopt)
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
create public synonym websopaf for websopaf;
