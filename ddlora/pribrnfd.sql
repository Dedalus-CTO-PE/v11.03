create table pribrnaf
(
prbrprac    varchar2(6),
prbrrang    varchar2(3),
prbrfbat    varchar2(8),
prbrtbat    varchar2(8),
prbrnbat    varchar2(8),
prbractv    varchar2(1),
prbrcdat    varchar2(8),
prbrctim    varchar2(8),
prbrcuid    varchar2(10),
prbrudat    varchar2(8),
prbrutim    varchar2(8),
prbruuid    varchar2(10),
prbrspar    varchar2(70),
lf          varchar2(1),
constraint pribrna1 primary key( 
prbrprac,
prbrrang)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pribrnaf for pribrnaf;
create unique index pribrna2 on pribrnaf
(
prbrfbat,
prbrtbat
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pribrna3 on pribrnaf
(
prbrtbat,
prbrfbat
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
