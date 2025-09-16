create table watopsaf
(
wtosurno    varchar2(8),
wtoscode    varchar2(9),
wtoscoun    varchar2(2),
wtossite    varchar2(6),
wtosclin    varchar2(6),
wtosdate    varchar2(8),
wtosstrt    varchar2(5),
wtosslot    varchar2(3),
wtosoutn    varchar2(8),
wtososta    varchar2(3),
wtospdat    varchar2(8),
wtosptim    varchar2(8),
wtosstat    varchar2(1),
wtoscdat    varchar2(8),
wtosctim    varchar2(8),
wtoscuid    varchar2(10),
wtosudat    varchar2(8),
wtosutim    varchar2(8),
wtosuuid    varchar2(10),
wtosspar    varchar2(50),
lf          varchar2(1),
constraint watopsa1 primary key( 
wtosurno,
wtoscode,
wtoscoun,
wtosoutn)
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
create public synonym watopsaf for watopsaf;
create unique index watopsa2 on watopsaf
(
wtosoutn
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
