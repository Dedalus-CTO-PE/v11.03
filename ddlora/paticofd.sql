create table paticdof
(
  opcode      varchar2(9) default ' ' not null,
  ogpcode     varchar2(4) default ' ' not null,
  okeywd      varchar2(10) default ' ' not null,
  odesc       varchar2(70) default ' ' not null,
  oflag       varchar2(1) default ' ' not null,
  oagegp      varchar2(1) default ' ' not null,
  olow        number(2,0) default 0 not null,
  ohigh       number(2,0) default 0 not null,
  osex        varchar2(1) default ' ' not null,
  odagger     varchar2(1) default ' ' not null,
  oarea       varchar2(1) default ' ' not null,
  odigits     varchar2(10) default ' ' not null,
  ofee        number(5,0) default 0 not null,
  oicd10cd    varchar2(9) default ' ' not null,
  ptiospar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint paticdo1 primary key( 
opcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index paticdo2 on paticdof
(
ogpcode,
opcode
)
  tablespace pas_indx; 
create unique index paticdo3 on paticdof
(
odesc,
opcode
)
  tablespace pas_indx; 
