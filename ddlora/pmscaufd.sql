create table pmscauaf
(
pmcavisn    varchar2(8),
pmcadate    varchar2(8),
pmcatime    varchar2(8),
pmcaoclm    varchar2(3),
pmcanclm    varchar2(3),
pmcaoaty    varchar2(3),
pmcanaty    varchar2(3),
pmcaohfn    varchar2(6),
pmcanhfn    varchar2(6),
pmcaohft    varchar2(8),
pmcanhft    varchar2(8),
pmcawbid    varchar2(10),
pmcaspar    varchar2(100),
lf          varchar2(1),
constraint pmscaua1 primary key( 
pmcavisn,
pmcadate,
pmcatime)
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
create public synonym pmscauaf for pmscauaf;
