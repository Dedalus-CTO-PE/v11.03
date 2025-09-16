create table priikiaf
(
priktflg    varchar2(2),
prikkitm    varchar2(9),
prikkkwd    varchar2(15),
prikkspa    varchar2(10),
lf          varchar2(1),
constraint priikia1 primary key( 
priktflg,
prikkitm,
prikkkwd)
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
create public synonym priikiaf for priikiaf;
create unique index priikia2 on priikiaf
(
priktflg,
prikkkwd,
prikkitm
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
