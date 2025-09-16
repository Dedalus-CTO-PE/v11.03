create table prialsaf
(
pralusid    varchar2(10),
pralspar    varchar2(30),
lf          varchar2(1),
constraint prialsa1 primary key( 
pralusid)
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
create public synonym prialsaf for prialsaf;
