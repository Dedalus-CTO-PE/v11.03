create table pmspayaf
(
pmpaurno    varchar2(8),
pmpapayc    varchar2(6),
pmpaseqn    varchar2(2),
pmpacomm    varchar2(30),
pmpaactv    varchar2(1),
pmpacdat    varchar2(8),
pmpactim    varchar2(8),
pmpacuid    varchar2(10),
pmpaudat    varchar2(8),
pmpautim    varchar2(8),
pmpauuid    varchar2(10),
pmpaspar    varchar2(50),
lf          varchar2(1),
constraint pmspaya1 primary key( 
pmpaurno,
pmpapayc)
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
create public synonym pmspayaf for pmspayaf;
create unique index pmspaya2 on pmspayaf
(
pmpaurno,
pmpaseqn
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
