create table vispayaf
(
vspavisn    varchar2(8),
vspapayc    varchar2(6),
vspaseqn    varchar2(2),
vspacomm    varchar2(30),
vspaactv    varchar2(1),
vspaisen    number(1,0),
vspacdat    varchar2(8),
vspactim    varchar2(8),
vspacuid    varchar2(10),
vspaudat    varchar2(8),
vspautim    varchar2(8),
vspauuid    varchar2(10),
vspaspar    varchar2(50),
lf          varchar2(1),
constraint vispaya1 primary key( 
vspavisn,
vspapayc)
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
create public synonym vispayaf for vispayaf;
create unique index vispaya2 on vispayaf
(
vspavisn,
vspaseqn
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
