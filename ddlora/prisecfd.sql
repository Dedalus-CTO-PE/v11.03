create table prisecaf
(
prseprac    varchar2(6),
prseusid    varchar2(10),
prsespar    varchar2(30),
lf          varchar2(1),
constraint priseca1 primary key( 
prseprac,
prseusid)
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
create public synonym prisecaf for prisecaf;
create unique index priseca2 on prisecaf
(
prseusid,
prseprac
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
