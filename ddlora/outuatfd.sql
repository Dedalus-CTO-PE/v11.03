create table outuataf
(
  dopuaout    varchar2(8) default ' ' not null,
  opuaurno    varchar2(8) default ' ' not null,
  dopuauni    varchar2(3) default ' ' not null,
  opuasite    varchar2(6) default ' ' not null,
  opuaclin    varchar2(6) default ' ' not null,
  opuadate    varchar2(8) default ' ' not null,
  opuastrt    varchar2(5) default ' ' not null,
  opuaslot    number(3,0) default 0 not null,
  opuatime    varchar2(5) default ' ' not null,
  opuactyp    varchar2(6) default ' ' not null,
  opuasrcr    varchar2(3) default ' ' not null,
  opuacomp    varchar2(3) default ' ' not null,
  opuaclas    varchar2(3) default ' ' not null,
  opuainsr    varchar2(3) default ' ' not null,
  opuaattn    varchar2(3) default ' ' not null,
  opuadoct    varchar2(6) default ' ' not null,
  opuapcat    varchar2(3) default ' ' not null,
  opuaprty    varchar2(3) default ' ' not null,
  opuausr1    varchar2(3) default ' ' not null,
  opuausr2    varchar2(3) default ' ' not null,
  opuausr3    varchar2(3) default ' ' not null,
  opuausr4    varchar2(3) default ' ' not null,
  opuaudat    varchar2(8) default ' ' not null,
  opuautim    varchar2(8) default ' ' not null,
  opuatype    number(1,0) default 0 not null,
  opuaspar    varchar2(34) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outuata1 primary key( 
dopuaout,
opuaurno,
dopuauni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
