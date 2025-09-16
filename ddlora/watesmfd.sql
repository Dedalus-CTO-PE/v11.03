create table watesmaf
(
wtemedat    varchar2(8),
wtemcurn    varchar2(8),
wtemrurn    varchar2(8),
wtemspar    varchar2(50),
lf          varchar2(1),
constraint watesma1 primary key( 
wtemcurn,
wtemrurn,
wtemedat)
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
create public synonym watesmaf for watesmaf;
create unique index watesma2 on watesmaf
(
wtemedat,
wtemcurn,
wtemrurn
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
