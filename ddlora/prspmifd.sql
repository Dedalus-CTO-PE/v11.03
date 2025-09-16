create table prspmiaf
(
p2pmurno    varchar2(8),
p2pmuniq    varchar2(3),
p2pmvalu    varchar2(35),
p2pmspar    varchar2(50),
lf          varchar2(1),
constraint prspmia1 primary key( 
p2pmurno,
p2pmuniq)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym prspmiaf for prspmiaf;
