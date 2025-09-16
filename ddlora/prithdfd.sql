create table prithdaf
(
prthtmid    varchar2(4),
prthdesc    varchar2(35),
prthindc    varchar2(1),
prthspre    varchar2(40),
lf          varchar2(1),
constraint prithda1 primary key( 
prthtmid)
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
create public synonym prithdaf for prithdaf;
