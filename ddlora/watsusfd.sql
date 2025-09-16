create table watsusaf
(
wtsuurno    varchar2(8),
wtsucode    varchar2(9),
dwtsucnt    varchar2(2),
dwtsuscn    varchar2(2),
wtsufdat    varchar2(8),
wtsutdat    varchar2(8),
wtsureas    varchar2(3),
wtsulsts    varchar2(3),
wtsuuser    varchar2(10),
wtsuauto    varchar2(1),
wtsuspar    varchar2(5),
lf          varchar2(1),
constraint watsusa1 primary key( 
wtsuurno,
wtsucode,
dwtsucnt,
dwtsuscn)
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
create public synonym watsusaf for watsusaf;
create unique index watsusa2 on watsusaf
(
wtsuurno,
wtsucode,
dwtsucnt,
wtsufdat,
dwtsuscn
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
