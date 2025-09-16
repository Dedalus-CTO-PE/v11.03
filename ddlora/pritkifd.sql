create table pritkiaf
(
prtkptst    varchar2(9),
prtkpkwd    varchar2(15),
prtkpspa    varchar2(10),
lf          varchar2(1),
constraint pritkia1 primary key( 
prtkptst,
prtkpkwd)
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
create public synonym pritkiaf for pritkiaf;
create unique index pritkia2 on pritkiaf
(
prtkpkwd,
prtkptst
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
